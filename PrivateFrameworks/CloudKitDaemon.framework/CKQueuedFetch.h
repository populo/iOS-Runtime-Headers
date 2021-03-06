/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDClientContext, CKDFetchRecordsOperation, NSDate, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface CKQueuedFetch : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_completionHandlersByRecordID;
    CKDClientContext *_context;
    NSString *_deviceIdentifier;
    CKDFetchRecordsOperation *_fetchOp;
    NSDate *_lastRequestDate;
    NSOperationQueue *_operationQueue;
    long long _qos;
    long long _scope;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSDate *_startDate;
    long long _usesBackgroundSession;
    bool_allowsCellularAccess;
    bool_isFinished;
}

@property bool allowsCellularAccess;
@property(retain) NSObject<OS_dispatch_queue> * callbackQueue;
@property(retain) NSMutableDictionary * completionHandlersByRecordID;
@property CKDClientContext * context;
@property(retain) NSString * deviceIdentifier;
@property(retain) CKDFetchRecordsOperation * fetchOp;
@property bool isFinished;
@property(retain) NSDate * lastRequestDate;
@property NSOperationQueue * operationQueue;
@property long long qos;
@property long long scope;
@property(retain) NSString * sourceApplicationBundleIdentifier;
@property(retain) NSString * sourceApplicationSecondaryIdentifier;
@property(retain) NSDate * startDate;
@property long long usesBackgroundSession;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addRequestForRecordID:(id)arg1 withCompletionHandler:(id)arg2;
- (bool)allowsCellularAccess;
- (id)callbackQueue;
- (bool)canBeUsedForOperation:(id)arg1;
- (id)completionHandlersByRecordID;
- (id)context;
- (id)description;
- (id)deviceIdentifier;
- (id)fetchOp;
- (id)initWithOperation:(id)arg1 context:(id)arg2 operationQueue:(id)arg3;
- (bool)isFinished;
- (id)lastRequestDate;
- (int)numberOfCallbacks;
- (id)operationQueue;
- (long long)qos;
- (long long)scope;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setCompletionHandlersByRecordID:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setFetchOp:(id)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setLastRequestDate:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setQos:(long long)arg1;
- (void)setScope:(long long)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setUsesBackgroundSession:(long long)arg1;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (void)start;
- (id)startDate;
- (long long)usesBackgroundSession;

@end
