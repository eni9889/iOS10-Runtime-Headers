/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMAbstractView, NSString, DOMMessagePort;

@interface DOMMessageEvent : DOMEvent  {
}

@property(readonly) NSString * origin;
@property(readonly) NSString * lastEventId;
@property(readonly) DOMAbstractView * source;
@property(readonly) NSString * data;
@property(readonly) DOMMessagePort * messagePort;


- (id)source;
- (void)initMessageEvent:(id)arg1 canBubbleArg:(BOOL)arg2 cancelableArg:(BOOL)arg3 dataArg:(id)arg4 originArg:(id)arg5 lastEventIdArg:(id)arg6 sourceArg:(id)arg7 messagePort:(id)arg8;
- (id)messagePort;
- (id)lastEventId;
- (id)data;
- (id)origin;

@end
