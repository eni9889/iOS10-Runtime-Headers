/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDAMessageStoreSetFlagsRequest : DAMailboxSetFlagsRequest <MFDAMailAccountRequest> {
}

@property(readonly) BOOL shouldSend;
@property(readonly) BOOL isUserRequested;


- (BOOL)shouldSend;
- (id)deferredOperation;
- (BOOL)isUserRequested;
- (unsigned long long)generationNumber;

@end
