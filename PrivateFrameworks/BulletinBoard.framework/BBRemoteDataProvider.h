/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class BBXPCOutgoingConnection, NSString, NSObject<OS_dispatch_queue>, NSMutableArray, <BBRemoteDataProviderDelegate>;

@interface BBRemoteDataProvider : BBDataProvider <XPCProxyTarget, BBXPCConnectionDelegate> {
    NSString *_sectionID;
    NSString *_appBundleID;
    BBXPCOutgoingConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pendingRequests;
    <BBRemoteDataProviderDelegate> *_delegate;
    BOOL _operational;
}

+ (id)_sharedSystemService;

- (id)initWithSectionID:(id)arg1 serviceName:(id)arg2 appBundleID:(id)arg3 delegate:(id)arg4 onQueue:(id)arg5;
- (void)_logDoesNotRespond:(SEL)arg1;
- (void)_sendRequest:(id)arg1;
- (void)_prependAndSendRequest:(id)arg1;
- (void)_processPendingRequests;
- (void)setSectionInfo:(id)arg1;
- (void)setClearedInfo:(id)arg1;
- (void)getClearedInfoWithCompletion:(id)arg1;
- (void)reloadDefaultSectionInfo:(id)arg1;
- (void)reloadSectionParameters:(id)arg1;
- (void)withdrawBulletinWithPublisherBulletinID:(id)arg1;
- (void)withdrawBulletinsWithRecordID:(id)arg1;
- (void)modifyBulletin:(id)arg1;
- (void)addBulletin:(id)arg1 forDestinations:(unsigned int)arg2;
- (void)invalidateBulletins;
- (BOOL)canPerformMigration;
- (void)reloadIdentityWithCompletion:(id)arg1;
- (void)startWatchdog;
- (void)noteSectionInfoDidChange:(id)arg1;
- (BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;
- (void)dataProviderDidLoad;
- (void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2;
- (void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(id)arg2 completion:(id)arg3;
- (void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(id)arg2 completion:(id)arg3;
- (void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(id)arg3;
- (void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)attachmentAspectRatioForRecordID:(id)arg1 completion:(id)arg2;
- (void)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 completion:(id)arg3;
- (void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(id)arg3;
- (void)ping:(id)arg1;
- (void)connection:(id)arg1 connectionStateDidChange:(BOOL)arg2;
- (void)getSectionInfoWithCompletion:(id)arg1;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)description;
- (void)resume;
- (void)_invalidate;

@end
