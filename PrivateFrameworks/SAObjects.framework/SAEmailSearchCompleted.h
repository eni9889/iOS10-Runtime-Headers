/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAEmailSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * emailResults;
@property(copy) NSArray * results;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)searchCompletedWithEmailResults:(id)arg1;
+ (id)searchCompletedWithResults:(id)arg1;
+ (id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)searchCompleted;

- (id)emailResults;
- (void)setEmailResults:(id)arg1;
- (id)initWithEmailResults:(id)arg1;
- (id)initWithResults:(id)arg1;
- (id)encodedClassName;
- (id)results;
- (void)setResults:(id)arg1;
- (id)groupIdentifier;

@end
