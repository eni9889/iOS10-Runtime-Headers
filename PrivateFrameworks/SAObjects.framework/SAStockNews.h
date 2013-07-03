/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDate, NSString;

@interface SAStockNews : SADomainObject  {
}

@property(copy) NSDate * timeStamp;
@property(copy) NSString * title;
@property(copy) NSString * url;

+ (id)newsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)news;

- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setTimeStamp:(id)arg1;
- (id)timeStamp;
- (void)setUrl:(id)arg1;
- (id)groupIdentifier;
- (id)url;

@end
