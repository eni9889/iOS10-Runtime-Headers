/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSLayoutConstraint, UIView;

@interface GKSectionSeparatorView : UICollectionReusableView  {
    float _separatorOffset;
    UIView *_underlineView;
    NSLayoutConstraint *_underlineYConstraint;
}

@property float separatorOffset;
@property(retain) UIView * underlineView;
@property(retain) NSLayoutConstraint * underlineYConstraint;


- (void)setUnderlineYConstraint:(id)arg1;
- (id)underlineYConstraint;
- (float)separatorOffset;
- (void)setSeparatorOffset:(float)arg1;
- (void)setUnderlineView:(id)arg1;
- (id)underlineView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
