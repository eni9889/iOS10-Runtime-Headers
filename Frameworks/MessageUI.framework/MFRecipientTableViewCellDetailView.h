/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class UILabel, UIColor, NSArray;

@interface MFRecipientTableViewCellDetailView : UIView <MFTinting> {
    UIColor *_tintColor;
    BOOL _labelIsHidden;
    NSArray *_withLabelLayoutConstraints;
    NSArray *_sansLabelLayoutConstraints;
    BOOL _shouldDim;
    BOOL _highlighted;
    UILabel *_labelLabel;
    UILabel *_detailLabel;
}

@property(readonly) UILabel * labelLabel;
@property(readonly) UILabel * detailLabel;
@property BOOL highlighted;
@property BOOL shouldDim;

+ (id)groupStringAttributes;
+ (id)defaultStringAttributes;
+ (float)lineHeight;

- (void)_recalculateLabelColors;
- (id)_layoutConstraintsWithLabelText:(BOOL)arg1;
- (BOOL)shouldDim;
- (void)setShouldDim:(BOOL)arg1;
- (void)setTintColor:(id)arg1 animated:(BOOL)arg2;
- (id)detailLabel;
- (id)labelLabel;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (BOOL)highlighted;
- (void)setHighlighted:(BOOL)arg1;
- (id)tintColor;
- (void)layoutSubviews;

@end
