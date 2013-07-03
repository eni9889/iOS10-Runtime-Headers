/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SALocalSearchAttribution : AceObject <SAAceSerializable> {
}

@property(copy) NSString * attributionId;
@property(copy) NSArray * urls;
@property int version;

+ (id)attributionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)attribution;

- (void)setUrls:(id)arg1;
- (id)urls;
- (void)setAttributionId:(id)arg1;
- (id)attributionId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setVersion:(int)arg1;
- (int)version;

@end
