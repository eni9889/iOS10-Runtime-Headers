/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SANoteSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * notes;
@property(copy) NSArray * results;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)searchCompleted;

- (id)encodedClassName;
- (void)setNotes:(id)arg1;
- (id)notes;
- (id)results;
- (void)setResults:(id)arg1;
- (id)groupIdentifier;

@end
