/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKServerChangeToken;

@interface CKFetchNotificationChangesOperation : CKOperation {
    id _fetchNotificationChangesCompletionBlock;
    id _notificationChangedBlock;
    CKServerChangeToken *_previousServerChangeToken;
    CKServerChangeToken *_resultServerChangeToken;
    unsigned long long _resultsLimit;
    bool_moreComing;
}

@property(copy) id fetchNotificationChangesCompletionBlock;
@property(readonly) bool moreComing;
@property(copy) id notificationChangedBlock;
@property(copy) CKServerChangeToken * previousServerChangeToken;
@property(retain) CKServerChangeToken * resultServerChangeToken;
@property unsigned long long resultsLimit;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)fetchNotificationChangesCompletionBlock;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithPreviousServerChangeToken:(id)arg1;
- (bool)moreComing;
- (id)notificationChangedBlock;
- (void)performCKOperation;
- (id)previousServerChangeToken;
- (id)resultServerChangeToken;
- (unsigned long long)resultsLimit;
- (void)setFetchNotificationChangesCompletionBlock:(id)arg1;
- (void)setNotificationChangedBlock:(id)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setResultServerChangeToken:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;

@end
