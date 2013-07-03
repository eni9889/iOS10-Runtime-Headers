/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSProtocolChecker, NSMutableArray, NSArray;

@interface IMAVDaemonListener : NSObject  {
    NSMutableArray *_handlers;
    NSProtocolChecker *_protocol;
    BOOL _setupComplete;
    BOOL _postedSetupComplete;
}

@property(readonly) BOOL isSetupComplete;
@property(readonly) NSArray * handlers;


- (void)removeHandler:(id)arg1;
- (void)addHandler:(id)arg1;
- (void)_noteDisconnected;
- (BOOL)isSetupComplete;
- (void)setupComplete:(BOOL)arg1 info:(id)arg2;
- (id)handlers;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;

@end
