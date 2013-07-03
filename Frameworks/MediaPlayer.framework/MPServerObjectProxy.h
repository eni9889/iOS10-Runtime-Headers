/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPServerObjectProxy : NSObject  {
    unsigned int _didPrepareForRemoteSelectorInvocation : 1;
    unsigned int _lastPrepareForRemoteSelectorInvocationTimedOut : 1;
    double _lastPrepareAttemptTime;
}

+ (id)_center;

- (BOOL)prepareForRemoteSelectorInvocationWithTimeout:(double*)arg1;
- (void)_serverConnectionDied;
- (id)_performRemoteSelectorAndReceiveReply:(SEL)arg1 userInfo:(id)arg2 timeout:(double)arg3;
- (BOOL)_performRemoteSelector:(SEL)arg1 userInfo:(id)arg2 timeout:(double)arg3;
- (void)_messagingCenterDied:(id)arg1;
- (void)serverConnectionDied;
- (void)didPrepareForRemoteSelectorInvocation;
- (BOOL)prepareForRemoteSelectorInvocation;
- (id)init;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;

@end
