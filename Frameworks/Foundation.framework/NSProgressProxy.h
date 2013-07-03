/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <NSProgressPublisher>, NSString;

@interface NSProgressProxy : NSProgress  {
    <NSProgressPublisher> *_forwarder;
    NSString *_publishingAppBundleIDOrNil;
    BOOL _isOld;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _unpublishingHandler;

}


- (void)setPrioritizationHandler:(id)arg1;
- (void)setCancellationHandler:(id)arg1;
- (void)setPausingHandler:(id)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)setPrioritizable:(BOOL)arg1;
- (void)setCancellable:(BOOL)arg1;
- (void)setPausable:(BOOL)arg1;
- (void)unpublish;
- (void)publish;
- (void)dealloc;
- (void)cancel;
- (void)_invokeUnpublishingHandler;
- (void)_invokePublishingHandler:(id)arg1;
- (id)_initWithForwarder:(id)arg1 publishingAppBundleID:(id)arg2 values:(id)arg3 isOld:(BOOL)arg4;
- (id)_publishingAppBundleIdentifier;
- (BOOL)isOld;
- (void)acknowledgeWithSuccess:(BOOL)arg1;
- (void)setKind:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)prioritize;
- (void)pause;
- (void)resignCurrent;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (void)setCompletedUnitCount:(long long)arg1;

@end
