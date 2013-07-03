/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SASetConnectionHeader : SABaseClientBoundCommand  {
}

@property(copy) NSString * aceHostHeader;
@property BOOL reconnectNow;

+ (id)setConnectionHeaderWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setConnectionHeader;

- (void)setReconnectNow:(BOOL)arg1;
- (BOOL)reconnectNow;
- (void)setAceHostHeader:(id)arg1;
- (id)aceHostHeader;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
