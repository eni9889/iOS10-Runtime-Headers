/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary, NSObject<OS_dispatch_semaphore>;

@interface NSDateFormatter : NSFormatter  {
    NSMutableDictionary *_attributes;
    struct __CFDateFormatter { } *_formatter;
    unsigned int _counter;
    NSObject<OS_dispatch_semaphore> *_lock;
}

+ (id)localizedStringFromDate:(id)arg1 dateStyle:(unsigned int)arg2 timeStyle:(unsigned int)arg3;
+ (id)dateFormatFromTemplate:(id)arg1 options:(unsigned int)arg2 locale:(id)arg3;
+ (void)initialize;
+ (unsigned int)defaultFormatterBehavior;
+ (void)setDefaultFormatterBehavior:(unsigned int)arg1;
+ (id)mf_formatDate:(id)arg1 shortStyle:(BOOL)arg2;

- (void)setDateFormat:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (void)setDoesRelativeDateFormatting:(BOOL)arg1;
- (id)PMSymbol;
- (id)AMSymbol;
- (id)shortStandaloneMonthSymbols;
- (id)standaloneMonthSymbols;
- (id)shortMonthSymbols;
- (id)monthSymbols;
- (id)init;
- (id)calendar;
- (void)setCalendar:(id)arg1;
- (id)shortStandaloneQuarterSymbols;
- (id)standaloneQuarterSymbols;
- (id)shortQuarterSymbols;
- (id)quarterSymbols;
- (id)veryShortStandaloneWeekdaySymbols;
- (id)shortStandaloneWeekdaySymbols;
- (id)standaloneWeekdaySymbols;
- (id)veryShortWeekdaySymbols;
- (id)veryShortStandaloneMonthSymbols;
- (id)veryShortMonthSymbols;
- (id)longEraSymbols;
- (id)shortWeekdaySymbols;
- (id)weekdaySymbols;
- (id)eraSymbols;
- (void)setGregorianStartDate:(id)arg1;
- (id)gregorianStartDate;
- (id)timeZone;
- (id)locale;
- (void)setLocale:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)_reset;
- (id)dateFromString:(id)arg1;
- (void)_setUsesCharacterDirection:(BOOL)arg1;
- (BOOL)_usesCharacterDirection;
- (BOOL)doesRelativeDateFormatting;
- (void)setShortStandaloneQuarterSymbols:(id)arg1;
- (void)setStandaloneQuarterSymbols:(id)arg1;
- (void)setShortQuarterSymbols:(id)arg1;
- (void)setQuarterSymbols:(id)arg1;
- (void)setVeryShortStandaloneWeekdaySymbols:(id)arg1;
- (void)setShortStandaloneWeekdaySymbols:(id)arg1;
- (void)setStandaloneWeekdaySymbols:(id)arg1;
- (void)setVeryShortWeekdaySymbols:(id)arg1;
- (void)setVeryShortStandaloneMonthSymbols:(id)arg1;
- (void)setShortStandaloneMonthSymbols:(id)arg1;
- (void)setStandaloneMonthSymbols:(id)arg1;
- (void)setVeryShortMonthSymbols:(id)arg1;
- (void)setLongEraSymbols:(id)arg1;
- (void)setPMSymbol:(id)arg1;
- (void)setAMSymbol:(id)arg1;
- (void)setShortWeekdaySymbols:(id)arg1;
- (void)setWeekdaySymbols:(id)arg1;
- (void)setShortMonthSymbols:(id)arg1;
- (void)setMonthSymbols:(id)arg1;
- (void)setEraSymbols:(id)arg1;
- (void)setDefaultDate:(id)arg1;
- (id)defaultDate;
- (void)setTwoDigitStartDate:(id)arg1;
- (id)twoDigitStartDate;
- (void)setLenient:(BOOL)arg1;
- (BOOL)isLenient;
- (void)_setIsLenient:(BOOL)arg1;
- (void)_setDateFormat:(id)arg1;
- (id)_dateFormat;
- (unsigned int)formatterBehavior;
- (void)setGeneratesCalendarDates:(BOOL)arg1;
- (BOOL)generatesCalendarDates;
- (unsigned int)timeStyle;
- (unsigned int)dateStyle;
- (void)setTimeStyle:(unsigned int)arg1;
- (void)setDateStyle:(unsigned int)arg1;
- (void)setFormatterBehavior:(unsigned int)arg1;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)stringForObjectValue:(id)arg1;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 error:(out id*)arg4;
- (void)_regenerateFormatterIfAbsent;
- (id)dateFormat;
- (void)_clearFormatter;
- (void)_regenerateFormatter;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
