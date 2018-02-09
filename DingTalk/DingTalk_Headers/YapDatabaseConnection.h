//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, YapCache, YapDatabase, YapDatabaseReadTransaction;
@protocol OS_dispatch_queue;

@interface YapDatabaseConnection : NSObject
{
    unsigned long long snapshot;
    id sharedKeySetForInternalChangeset;
    id sharedKeySetForExternalChangeset;
    YapDatabaseReadTransaction *longLivedReadTransaction;
    _Bool throwExceptionsForImplicitlyEndingLongLivedReadTransaction;
    NSMutableArray *pendingChangesets;
    NSMutableArray *processedChangesets;
    NSDictionary *registeredExtensions;
    _Bool registeredExtensionsChanged;
    NSDictionary *registeredMemoryTables;
    _Bool registeredMemoryTablesChanged;
    NSMutableDictionary *extensions;
    _Bool extensionsReady;
    id sharedKeySetForExtensions;
    YapDatabase *database;
    struct sqlite3 *db;
    NSObject<OS_dispatch_queue> *connectionQueue;
    void *IsOnConnectionQueueKey;
    NSArray *extensionsOrder;
    NSDictionary *extensionDependencies;
    _Bool hasDiskChanges;
    YapCache *keyCache;
    YapCache *objectCache;
    YapCache *metadataCache;
    unsigned long long objectCacheLimit;
    unsigned long long metadataCacheLimit;
    long long objectPolicy;
    long long metadataPolicy;
    _Bool needsMarkSqlLevelSharedReadLock;
    NSMutableDictionary *objectChanges;
    NSMutableDictionary *metadataChanges;
    NSMutableSet *removedKeys;
    NSMutableSet *removedCollections;
    NSMutableSet *removedRowids;
    _Bool allKeysRemoved;
    struct sqlite3_stmt *beginTransactionStatement;
    struct sqlite3_stmt *commitTransactionStatement;
    struct sqlite3_stmt *rollbackTransactionStatement;
    struct sqlite3_stmt *yapGetDataForKeyStatement;
    struct sqlite3_stmt *yapSetDataForKeyStatement;
    struct sqlite3_stmt *yapRemoveForKeyStatement;
    struct sqlite3_stmt *yapRemoveExtensionStatement;
    struct sqlite3_stmt *getCollectionCountStatement;
    struct sqlite3_stmt *getKeyCountForCollectionStatement;
    struct sqlite3_stmt *getKeyCountForAllStatement;
    struct sqlite3_stmt *getCountForRowidStatement;
    struct sqlite3_stmt *getRowidForKeyStatement;
    struct sqlite3_stmt *getKeyForRowidStatement;
    struct sqlite3_stmt *getDataForRowidStatement;
    struct sqlite3_stmt *getMetadataForRowidStatement;
    struct sqlite3_stmt *getAllForRowidStatement;
    struct sqlite3_stmt *getDataForKeyStatement;
    struct sqlite3_stmt *getMetadataForKeyStatement;
    struct sqlite3_stmt *getAllForKeyStatement;
    struct sqlite3_stmt *insertForRowidStatement;
    struct sqlite3_stmt *updateAllForRowidStatement;
    struct sqlite3_stmt *updateObjectForRowidStatement;
    struct sqlite3_stmt *updateMetadataForRowidStatement;
    struct sqlite3_stmt *removeForRowidStatement;
    struct sqlite3_stmt *removeCollectionStatement;
    struct sqlite3_stmt *removeAllStatement;
    struct sqlite3_stmt *enumerateCollectionsStatement;
    struct sqlite3_stmt *enumerateCollectionsForKeyStatement;
    struct sqlite3_stmt *enumerateKeysInCollectionStatement;
    struct sqlite3_stmt *enumerateKeysInAllCollectionsStatement;
    struct sqlite3_stmt *enumerateKeysAndMetadataInCollectionStatement;
    struct sqlite3_stmt *enumerateKeysAndMetadataInAllCollectionsStatement;
    struct sqlite3_stmt *enumerateKeysAndObjectsInCollectionStatement;
    struct sqlite3_stmt *enumerateKeysAndObjectsInAllCollectionsStatement;
    struct sqlite3_stmt *enumerateRowsInCollectionStatement;
    struct sqlite3_stmt *enumerateRowsInAllCollectionsStatement;
    int lock;
    _Bool writeQueueSuspended;
    _Bool activeReadWriteTransaction;
    NSString *_name;
    unsigned long long autoFlushMemoryFlags;
}

+ (void)load;
@property unsigned long long autoFlushMemoryFlags; // @synthesize autoFlushMemoryFlags;
@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) YapDatabase *database; // @synthesize database;
- (void).cxx_destruct;
- (id)implicitlyEndingLongLivedReadTransactionException;
- (id)nonMainThreadException;
- (void)maybeResetLongLivedReadTransaction;
- (void)unregisterMemoryTableWithName:(id)arg1;
- (_Bool)registerMemoryTable:(id)arg1 withName:(id)arg2;
- (id)registeredMemoryTables;
- (void)asyncVacuumWithCompletionQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)asyncVacuumWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)vacuum;
- (id)pragmaAutoVacuum;
- (void)removeRegisteredExtensionConnectionWithName:(id)arg1;
- (void)addRegisteredExtensionConnection:(id)arg1 withName:(id)arg2;
- (void)didUnregisterExtensionWithName:(id)arg1;
- (void)didRegisterExtension:(id)arg1 withName:(id)arg2 transaction:(id)arg3 needsClassValue:(_Bool)arg4;
- (void)willRegisterExtension:(id)arg1 withName:(id)arg2 transaction:(id)arg3 needsClassValue:(_Bool *)arg4;
- (void)_unregisterExtensionWithName:(id)arg1 transaction:(id)arg2;
- (void)unregisterExtensionWithName:(id)arg1;
- (_Bool)registerExtension:(id)arg1 withName:(id)arg2;
- (id)extensions;
- (id)ext:(id)arg1;
- (id)extension:(id)arg1;
- (_Bool)hasMetadataChangeForAnyKeys:(id)arg1 inCollection:(id)arg2 inNotifications:(id)arg3;
- (_Bool)hasObjectChangeForAnyKeys:(id)arg1 inCollection:(id)arg2 inNotifications:(id)arg3;
- (_Bool)hasChangeForAnyKeys:(id)arg1 inCollection:(id)arg2 inNotifications:(id)arg3;
- (_Bool)hasChangeForAnyKeys:(id)arg1 inCollection:(id)arg2 inNotifications:(id)arg3 includingObjectChanges:(_Bool)arg4 metadataChanges:(_Bool)arg5;
- (_Bool)hasMetadataChangeForKey:(id)arg1 inCollection:(id)arg2 inNotifications:(id)arg3;
- (_Bool)hasObjectChangeForKey:(id)arg1 inCollection:(id)arg2 inNotifications:(id)arg3;
- (_Bool)hasChangeForKey:(id)arg1 inCollection:(id)arg2 inNotifications:(id)arg3;
- (_Bool)hasChangeForKey:(id)arg1 inCollection:(id)arg2 inNotifications:(id)arg3 includingObjectChanges:(_Bool)arg4 metadataChanges:(_Bool)arg5;
- (_Bool)hasMetadataChangeForCollection:(id)arg1 inNotifications:(id)arg2;
- (_Bool)hasObjectChangeForCollection:(id)arg1 inNotifications:(id)arg2;
- (_Bool)hasChangeForCollection:(id)arg1 inNotifications:(id)arg2;
- (_Bool)hasChangeForCollection:(id)arg1 inNotifications:(id)arg2 includingObjectChanges:(_Bool)arg3 metadataChanges:(_Bool)arg4;
- (void)noteCommittedChanges:(id)arg1;
- (void)processChangeset:(id)arg1;
- (void)getInternalChangeset:(id *)arg1 externalChangeset:(id *)arg2;
- (id)externalChangesetKeys;
- (id)internalChangesetKeys;
- (void)disableExceptionsForImplicitlyEndingLongLivedReadTransaction;
- (void)enableExceptionsForImplicitlyEndingLongLivedReadTransaction;
- (_Bool)isInLongLivedReadTransaction;
- (id)endLongLivedReadTransaction;
- (id)beginLongLivedReadTransaction;
- (void)postRollbackCleanup;
- (void)markSqlLevelSharedReadLockAcquired;
- (unsigned long long)incrementSnapshotInDatabase;
- (unsigned long long)readSnapshotFromDatabase;
- (void)postVacuum;
- (void)preVacuum;
- (void)postReadWriteTransaction:(id)arg1;
- (void)preReadWriteTransaction:(id)arg1;
- (void)postReadTransaction:(id)arg1;
- (void)preReadTransaction:(id)arg1;
- (id)newReadWriteTransaction;
- (id)newReadTransaction;
- (void)asyncReadWriteWithBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)asyncReadWriteWithBlock:(CDUnknownBlockType)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)asyncReadWriteWithBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)asyncReadWriteWithBlock:(CDUnknownBlockType)arg1;
- (void)asyncReadWithBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)asyncReadWithBlock:(CDUnknownBlockType)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)asyncReadWithBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)asyncReadWithBlock:(CDUnknownBlockType)arg1;
- (void)readWriteWithBlock:(CDUnknownBlockType)arg1;
- (void)readWithBlock:(CDUnknownBlockType)arg1;
- (struct sqlite3_stmt *)enumerateRowsInAllCollectionsStatement;
- (struct sqlite3_stmt *)enumerateRowsInCollectionStatement;
- (struct sqlite3_stmt *)enumerateKeysAndObjectsInAllCollectionsStatement;
- (struct sqlite3_stmt *)enumerateKeysAndObjectsInCollectionStatement;
- (struct sqlite3_stmt *)enumerateKeysAndMetadataInAllCollectionsStatement;
- (struct sqlite3_stmt *)enumerateKeysAndMetadataInCollectionStatement;
- (struct sqlite3_stmt *)enumerateKeysInAllCollectionsStatement;
- (struct sqlite3_stmt *)enumerateKeysInCollectionStatement;
- (struct sqlite3_stmt *)enumerateCollectionsForKeyStatement;
- (struct sqlite3_stmt *)enumerateCollectionsStatement;
- (struct sqlite3_stmt *)removeAllStatement;
- (struct sqlite3_stmt *)removeCollectionStatement;
- (struct sqlite3_stmt *)removeForRowidStatement;
- (struct sqlite3_stmt *)updateMetadataForRowidStatement;
- (struct sqlite3_stmt *)updateObjectForRowidStatement;
- (struct sqlite3_stmt *)updateAllForRowidStatement;
- (struct sqlite3_stmt *)insertForRowidStatement;
- (struct sqlite3_stmt *)getAllForKeyStatement;
- (struct sqlite3_stmt *)getMetadataForKeyStatement;
- (struct sqlite3_stmt *)getDataForKeyStatement;
- (struct sqlite3_stmt *)getAllForRowidStatement;
- (struct sqlite3_stmt *)getMetadataForRowidStatement;
- (struct sqlite3_stmt *)getDataForRowidStatement;
- (struct sqlite3_stmt *)getKeyForRowidStatement;
- (struct sqlite3_stmt *)getRowidForKeyStatement;
- (struct sqlite3_stmt *)getCountForRowidStatement;
- (struct sqlite3_stmt *)getKeyCountForAllStatement;
- (struct sqlite3_stmt *)getKeyCountForCollectionStatement;
- (struct sqlite3_stmt *)getCollectionCountStatement;
- (struct sqlite3_stmt *)yapRemoveExtensionStatement;
- (struct sqlite3_stmt *)yapRemoveForKeyStatement;
- (struct sqlite3_stmt *)yapSetDataForKeyStatement;
- (struct sqlite3_stmt *)yapGetDataForKeyStatement;
- (struct sqlite3_stmt *)rollbackTransactionStatement;
- (struct sqlite3_stmt *)commitTransactionStatement;
- (struct sqlite3_stmt *)beginTransactionStatement;
- (void)updateKeyCacheLimit;
@property(readonly) unsigned long long snapshot;
@property long long metadataPolicy;
@property long long objectPolicy;
@property unsigned long long metadataCacheLimit;
@property _Bool metadataCacheEnabled;
@property unsigned long long objectCacheLimit;
@property _Bool objectCacheEnabled;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)flushMemoryWithFlags:(unsigned long long)arg1;
- (void)_flushMemoryWithFlags:(unsigned long long)arg1;
- (void)_flushStatements;
- (void)dealloc;
- (void)prepare;
- (id)initWithDatabase:(id)arg1;

@end
