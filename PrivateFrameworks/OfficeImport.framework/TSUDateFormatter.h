/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface TSUDateFormatter : NSObject  {
    NSString *mDateOnlyFormatString;
    NSString *mTimeOnlyFormatString;
    struct __CFDateFormatter { } *mFullDateFormatter;
}

+ (id)shortMonthNamesForNonCachedCurrentLocale;
+ (id)timePortionOfDateTimeFormatString:(id)arg1;
+ (id)datePortionOfDateTimeFormatString:(id)arg1;
+ (id)dateFormatStringSpecialSymbols;
+ (id)supportedTimeFormats;
+ (id)supportedDateFormats;
+ (id)defaultDateTimeFormat;

- (id)stringFromDate:(id)arg1 format:(id)arg2;
- (id)appropriateOutputFormatStringForInputFormatString:(id)arg1;
- (id)fullDateString:(id)arg1;
- (id)init;
- (void)dealloc;

@end
