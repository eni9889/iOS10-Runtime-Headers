/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAReminderEmailPayload : AceObject <SAReminderPayload> {
}

@property(copy) NSArray * recipientsTo;
@property(copy) NSString * subject;

+ (id)emailPayloadWithDictionary:(id)arg1 context:(id)arg2;
+ (id)emailPayload;

- (void)setRecipientsTo:(id)arg1;
- (id)recipientsTo;
- (id)encodedClassName;
- (void)setSubject:(id)arg1;
- (id)subject;
- (id)groupIdentifier;

@end
