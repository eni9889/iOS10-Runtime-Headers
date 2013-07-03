/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKTextStyleImpl, GKTextStyle;

@interface GKButton : UIButton  {
    GKTextStyleImpl *_baseStyle;
    GKTextStyle *_appliedStyle;
}

@property(retain) GKTextStyleImpl * baseStyle;
@property(retain) GKTextStyle * appliedStyle;

+ (void)initialize;

- (id)baseStyle;
- (void)setAppliedStyle:(id)arg1;
- (id)appliedStyle;
- (void)setBaseStyle:(id)arg1;
- (void)replayAndApplyStyle;
- (void)applyTextStyle:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned int)arg2;

@end
