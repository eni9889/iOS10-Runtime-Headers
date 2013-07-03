/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAUISnippetInteraction : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * requestId;
@property(copy) NSString * snippetId;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)snippetInteractionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)snippetInteraction;

- (void)setSnippetId:(id)arg1;
- (id)snippetId;
- (void)setRequestId:(id)arg1;
- (id)requestId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
