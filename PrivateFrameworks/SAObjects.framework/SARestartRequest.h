/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SARestartRequest : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * lastResponseId;
@property(copy) NSString * requestId;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)restartRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)restartRequest;

- (void)setLastResponseId:(id)arg1;
- (id)lastResponseId;
- (void)setRequestId:(id)arg1;
- (id)requestId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
