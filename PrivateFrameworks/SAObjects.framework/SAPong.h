/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAPong : SABaseClientBoundCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)pongWithDictionary:(id)arg1 context:(id)arg2;
+ (id)pong;

- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
