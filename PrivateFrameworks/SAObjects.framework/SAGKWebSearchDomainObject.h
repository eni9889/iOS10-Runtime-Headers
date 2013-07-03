/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAGKWebSearchDomainObject : SAGKDomainObject  {
}

@property(copy) NSArray * image;
@property(copy) NSArray * linkedAnswerGroups;
@property(copy) NSString * query;

+ (id)webSearchDomainObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)webSearchDomainObject;

- (void)setLinkedAnswerGroups:(id)arg1;
- (id)linkedAnswerGroups;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)image;
- (void)setImage:(id)arg1;
- (id)query;
- (id)groupIdentifier;
- (void)setQuery:(id)arg1;

@end
