/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class UIView, UICollectionViewCell;

@interface GKShowcaseCellView : UICollectionReusableView  {
    UICollectionViewCell *_cell;
    SEL _touchedShowcaseCellAction;
    UIView *_underlineView;
}

@property(retain) UICollectionViewCell * cell;
@property SEL touchedShowcaseCellAction;
@property(retain) UIView * underlineView;


- (void)setTouchedShowcaseCellAction:(SEL)arg1;
- (SEL)touchedShowcaseCellAction;
- (void)setUnderlineView:(id)arg1;
- (id)underlineView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setCell:(id)arg1;
- (id)cell;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end