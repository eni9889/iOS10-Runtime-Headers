/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class UICollectionView, GKLabel, NSLayoutConstraint;

@interface GKShowMoreView : UICollectionReusableView  {
    BOOL _showShowAll;
    SEL _showMoreAction;
    GKLabel *_label;
    int _sectionIndex;
    NSLayoutConstraint *_horizontalContraint;
    NSLayoutConstraint *_verticalContraint;
    int _numberToShow;
    UICollectionView *_collectionView;
    float _textAlignmentOffset;
}

@property SEL showMoreAction;
@property(retain) GKLabel * label;
@property int sectionIndex;
@property(retain) NSLayoutConstraint * horizontalContraint;
@property(retain) NSLayoutConstraint * verticalContraint;
@property BOOL showShowAll;
@property int numberToShow;
@property(retain) UICollectionView * collectionView;
@property float textAlignmentOffset;


- (float)textAlignmentOffset;
- (void)setNumberToShow:(int)arg1;
- (int)numberToShow;
- (void)setShowShowAll:(BOOL)arg1;
- (BOOL)showShowAll;
- (void)setVerticalContraint:(id)arg1;
- (id)verticalContraint;
- (id)horizontalContraint;
- (SEL)showMoreAction;
- (void)updateLabel;
- (void)updateLayoutAttributes:(id)arg1 withNearbyCellAttributes:(id)arg2;
- (void)setTextAlignmentOffset:(float)arg1;
- (void)setHorizontalContraint:(id)arg1;
- (void)setShowMoreAction:(SEL)arg1;
- (void)setSectionIndex:(int)arg1;
- (int)sectionIndex;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)label;
- (void)dealloc;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)collectionView;
- (void)updateConstraints;
- (void)prepareForReuse;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
