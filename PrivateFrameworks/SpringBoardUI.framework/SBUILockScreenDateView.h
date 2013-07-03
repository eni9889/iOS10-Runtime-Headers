/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class <SBUILockScreenDateFormatter>, UILabel, UIColor, NSDate;

@interface SBUILockScreenDateView : UIView  {
    UILabel *_timeLabel;
    UILabel *_dateLabel;
    float _dateAlpha;
    NSDate *_date;
    <SBUILockScreenDateFormatter> *_formatter;
    UIColor *_textColor;
    float _dateAlphaPercentage;
}

@property(getter=isDateHidden) BOOL dateHidden;
@property(retain) NSDate * date;
@property(retain) <SBUILockScreenDateFormatter> * formatter;
@property(retain) UIColor * textColor;
@property float dateAlphaPercentage;

+ (float)defaultHeight;

- (void)setFormatter:(id)arg1;
- (id)formatter;
- (float)dateBaselineOffsetFromOrigin;
- (float)timeBaselineOffsetFromOrigin;
- (void)setContentAlpha:(float)arg1 withDateVisible:(BOOL)arg2;
- (void)setDateHidden:(BOOL)arg1;
- (BOOL)isDateHidden;
- (void)setDateAlphaPercentage:(float)arg1;
- (float)_dateBaselineOffsetFromTime;
- (void)_layoutDateLabel;
- (void)_layoutTimeLabel;
- (float)dateAlphaPercentage;
- (void)_setDateAlpha:(float)arg1;
- (id)_dateFont;
- (id)_timeFont;
- (void)updateFormat;
- (void)_addDateLabel;
- (void)_addTimeLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)date;
- (void)dealloc;
- (void)setDate:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (void)layoutSubviews;

@end
