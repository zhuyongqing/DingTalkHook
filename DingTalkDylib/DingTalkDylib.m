//  weibo: http://weibo.com/xiaoqing28
//  blog:  http://www.alonemonkey.com
//
//  DingTalkDylib.m
//  DingTalkDylib
//
//  Created by zhuyongqing on 2018/2/8.
//  Copyright (c) 2018年 zhuyongqing. All rights reserved.
//

#import "DingTalkDylib.h"
#import <CaptainHook/CaptainHook.h>
#import <UIKit/UIKit.h>
#import <Cycript/Cycript.h>

static __attribute__((constructor)) void entry(){
    NSLog(@"\n               🎉!!！congratulations!!！🎉\n👍----------------insert dylib success----------------👍");
    [[NSNotificationCenter defaultCenter] addObserverForName:UIApplicationDidFinishLaunchingNotification object:nil queue:[NSOperationQueue mainQueue] usingBlock:^(NSNotification * _Nonnull note) {
        
        CYListenServer(6666);
    }];
}

CHDeclareClass(DTBizConversation)
CHOptimizedMethod(1, self,void,DTBizConversation,setLastMessage,void*,arg2){
    CHSuper(1, DTBizConversation,setLastMessage,arg2);
    NSLog(@"-------%@",arg2);
    Class cls = NSClassFromString(@"DTBizMessage");
    id message = [cls new];
    message = (__bridge id)arg2;
//    - (_Bool)isRedEnvelopNoticeMessage;
//    - (_Bool)isRedEnvelopMessage;
    id (*typed_msgSend)(id, SEL) = (void *)objc_msgSend;
    
}

//- (void)pickRedEnvelopCluster:(long long)arg1 clusterId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;

CHDeclareClass(DTRedEnvelopServiceIMP)
CHOptimizedMethod(4, self,void,DTRedEnvelopServiceIMP,pickRedEnvelopCluster,long long,arg1,clusterId,id,arg2,successBlock,void*,arg3,failureBlock,void*,arg4){
    CHSuper(4, DTRedEnvelopServiceIMP,pickRedEnvelopCluster,arg1,clusterId,arg2,successBlock,arg3,failureBlock,arg4);
}

CHDeclareClass(DTConversationListController)
CHOptimizedMethod(0, self,void,DTConversationListController,viewDidLoad){
    CHSuper(0, DTConversationListController,viewDidLoad);
//    id dataSource = CHIvar(self, _dataSource, __strong id);
//    id providerProxy = CHIvar(dataSource, _providerProxy, __strong id);
//    id _normalProvider = CHIvar(providerProxy, _normalProvider, __strong id);
//    id _rowItems = CHIvar(_normalProvider, _rowItems, __strong NSMutableArray *);
}

//- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(long long)arg4 newIndex:(unsigned long long)arg5;

//消息改变 拿到最新消息
CHDeclareClass(DTConversationListDataSource)
CHOptimizedMethod(5, self,void,DTConversationListDataSource,controller,id,arg1,didChangeObject,id,arg2,atIndex,unsigned long long,arg3,forChangeType,long long,arg4,newIndex,unsigned long long,arg5){
    CHSuper(5, DTConversationListDataSource,controller,arg1,didChangeObject,arg2,atIndex,arg3,forChangeType,arg4,newIndex,arg5);
    NSLog(@"%@",arg2);
    NSString *json = CHIvar(arg2, _latestMessageJson, __strong NSString *);
    NSDictionary *data = [NSJSONSerialization JSONObjectWithData:[json dataUsingEncoding:NSUTF8StringEncoding] options:NSJSONReadingAllowFragments error:nil];
    NSInteger type = [[data valueForKey:@"attachmentsType"] intValue];
    if(type == 902 || type == 901){
        if(![data[@"isRead"] boolValue]){
            NSString *clusterId = data[@"safeExtension"][@"clusterId"];
            long long sendId = [data[@"senderId"] longLongValue];
            id (*typed_msgSend)(id, SEL) = (void *)objc_msgSend;
            id imp = typed_msgSend(objc_getClass("DTRedEnvelopServiceFactory"),NSSelectorFromString(@"defaultServiceIMP"));
            id protocl = CHIvar(imp, _networkIMP, __weak id);
            if (clusterId.length > 0){
//                pickRedEnvelopCluster:(long long)arg1 clusterId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4
                //拆红包
                id (*openRed_msgSend)(id, SEL,long long,id,id,id) = (void *)objc_msgSend;
                openRed_msgSend(imp,NSSelectorFromString(@"pickRedEnvelopCluster:clusterId:successBlock:failureBlock:"),sendId,clusterId,nil,nil);
            }
        }
    }
    
}


CHDeclareClass(DTMessageRedEnvelopHandler)
CHOptimizedMethod(1, self,void,DTMessageRedEnvelopHandler,openLuckyMoneyWithMessage,void*,arg2){
    CHSuper(1, DTMessageRedEnvelopHandler,openLuckyMoneyWithMessage,arg2);
}


CHDeclareClass(DTMessageOTOViewController)
CHOptimizedMethod(2, self,void,DTMessageOTOViewController,handleDingMessageCellTapEventWithMessage,id,arg1,dingModel,id,arg2){
    NSLog(@"%@---%@",arg1,arg2);
    CHSuper(2, DTMessageOTOViewController,handleDingMessageCellTapEventWithMessage,arg1,dingModel,arg2);
}

//- (void)handleDingMessageCellTapEventWithMessage:(id)arg1 dingModel:(id)arg2;

CHConstructor{
    
    CHLoadLateClass(DTMessageOTOViewController);
    CHHook(2, DTMessageOTOViewController,handleDingMessageCellTapEventWithMessage,dingModel);
    
    CHLoadLateClass(DTRedEnvelopServiceIMP);
    CHHook(4, DTRedEnvelopServiceIMP,pickRedEnvelopCluster,clusterId,successBlock,failureBlock);
    
    CHLoadLateClass(DTConversationListController);
    CHHook(0,DTConversationListController,viewDidLoad);
    
    CHLoadLateClass(DTMessageRedEnvelopHandler);
    CHHook(1, DTMessageRedEnvelopHandler,openLuckyMoneyWithMessage);  
    
    CHLoadLateClass(DTBizConversation);
    CHHook(1, DTBizConversation,setLastMessage);
    
    CHLoadLateClass(DTConversationListDataSource);
    CHHook(5, DTConversationListDataSource,controller,didChangeObject,atIndex,forChangeType,newIndex);
}

