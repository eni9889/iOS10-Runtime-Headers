/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@class NSString;

@interface CTPhoneNumber : NSObject <NSCopying, CTMessageAddress> {
    NSString *_digits;
    NSString *_countryCode;
    BOOL _isShortCode;
}

@property(readonly) NSString * digits;
@property(readonly) NSString * countryCode;
@property BOOL isShortCode;

+ (bool)isValidPhoneNumber:(id)arg1;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
+ (bool)isValidPhoneNumberChar:(unsigned short)arg1;

- (id)countryCode;
- (BOOL)isShortCode;
- (id)formatForCallingCountry:(id)arg1;
- (void)setIsShortCode:(BOOL)arg1;
- (int)numberOfDigitsForShortCodeNumber;
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2;
- (id)encodedString;
- (id)canonicalFormat;
- (id)digits;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
