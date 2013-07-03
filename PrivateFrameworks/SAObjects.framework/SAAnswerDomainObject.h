/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAUIAppPunchOut, NSString, NSArray, SAAnswerDirectAnswer;

@interface SAAnswerDomainObject : SADomainObject  {
}

@property(retain) SAUIAppPunchOut * appPunchOut;
@property(copy) NSString * category;
@property(retain) SAAnswerDirectAnswer * directAnswer;
@property(copy) NSArray * linkedAnswerGroups;
@property(copy) NSArray * structuredAnswers;

+ (id)domainObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObject;

- (void)setStructuredAnswers:(id)arg1;
- (id)structuredAnswers;
- (void)setLinkedAnswerGroups:(id)arg1;
- (id)linkedAnswerGroups;
- (void)setDirectAnswer:(id)arg1;
- (void)setAppPunchOut:(id)arg1;
- (id)directAnswer;
- (id)appPunchOut;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setCategory:(id)arg1;
- (id)category;
- (id)groupIdentifier;

@end
