/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class CLLocation, NSMutableDictionary, NSString;

@interface SSLookupProperties : NSObject <NSCopying, SSXPCCoding> {
    CLLocation *_location;
    int _localizationStyle;
    NSMutableDictionary *_requestParameters;
}

@property(copy) NSString * keyProfile;
@property int localizationStyle;
@property(copy) CLLocation * location;


- (void)setLocalizationStyle:(int)arg1;
- (int)localizationStyle;
- (void)setKeyProfile:(id)arg1;
- (id)keyProfile;
- (id)copyRequestParameters;
- (id)valueForRequestParameter:(id)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
