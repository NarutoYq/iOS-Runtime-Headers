/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStore : HMFObject <HMFLogging> {
    <HMDBackingStoreObjectProtocol> * _delegate;
    HMDHome * _home;
    HMDHomeManager * _homeManager;
    HMDBackingStoreLocal * _local;
    HMDObjectLookup * _lookup;
    CKRecordID * _root;
    NSUUID * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMDBackingStoreObjectProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic, retain) HMDBackingStoreLocal *local;
@property (nonatomic, retain) HMDObjectLookup *lookup;
@property (nonatomic, readonly) CKRecordID *root;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)allowedTypes;
+ (id)currentDevice;
+ (id)flushBackingStore;
+ (id)internalAllowedTypes;
+ (id)logCategory;
+ (id)resetBackingStore;
+ (void)start;

- (void).cxx_destruct;
- (id)__fetchWithGroup:(id)arg1 uuids:(id)arg2 error:(id*)arg3;
- (void)commit:(id)arg1 run:(bool)arg2 save:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)delegate;
- (void)deleteModelObjects:(id)arg1 destination:(unsigned long long)arg2;
- (id)description;
- (id)dumpState;
- (id)home;
- (id)homeManager;
- (id)initWithUUID:(id)arg1;
- (id)initWithUUID:(id)arg1 home:(id)arg2;
- (id)initWithUUID:(id)arg1 homeManager:(id)arg2;
- (id)initWithUUID:(id)arg1 homeManager:(id)arg2 home:(id)arg3;
- (id)local;
- (id)logIdentifier;
- (id)lookup;
- (id)root;
- (void)saveToPersistentStoreWithReason:(id)arg1 incrementGeneration:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setLocal:(id)arg1;
- (void)setLookup:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)submit:(id)arg1;
- (void)submitBlock:(id /* block */)arg1;
- (id)transaction:(id)arg1 options:(id)arg2;
- (id)transactionWithOptions:(id)arg1;
- (void)updateModelObjects:(id)arg1 destination:(unsigned long long)arg2;
- (id)uuid;

@end