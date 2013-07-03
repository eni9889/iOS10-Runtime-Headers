/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SALocalSearchRating : AceObject <SAAceSerializable> {
}

@property int count;
@property(copy) NSString * description;
@property double maxValue;
@property(copy) NSString * providerId;
@property double value;

+ (id)ratingWithDictionary:(id)arg1 context:(id)arg2;
+ (id)rating;

- (void)setProviderId:(id)arg1;
- (id)providerId;
- (id)encodedClassName;
- (double)maxValue;
- (void)setDescription:(id)arg1;
- (int)count;
- (id)description;
- (void)setMaxValue:(double)arg1;
- (id)groupIdentifier;
- (void)setValue:(double)arg1;
- (double)value;
- (void)setCount:(int)arg1;

@end
