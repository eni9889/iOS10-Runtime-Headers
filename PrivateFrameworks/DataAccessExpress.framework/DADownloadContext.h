/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSObject<OS_dispatch_queue>;

@interface DADownloadContext : NSObject  {
    NSString *_attachmentUUID;
    NSString *_accountID;
    NSObject<OS_dispatch_queue> *_queue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progressBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

}


- (void)finishedWithError:(id)arg1;
- (void)updateProgressDownloadedByteCount:(long long)arg1 totalByteCount:(long long)arg2;
- (id)initWithAttachmentUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 downloadProgressBlock:(id)arg4 completionBlock:(id)arg5;
- (void)dealloc;

@end
