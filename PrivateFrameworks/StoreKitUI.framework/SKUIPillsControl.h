/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImageView, UIImage, SKUIColorScheme, NSString, NSArray, NSMutableArray;

@interface SKUIPillsControl : UIControl  {
    UIImage *_backgroundImage;
    UIImageView *_backgroundViewLeft;
    UIImageView *_backgroundViewRight;
    NSMutableArray *_buttons;
    SKUIColorScheme *_colorScheme;
    int _maximumNumberOfVisiblePills;
    NSString *_moreListTitle;
    UIImage *_notchImage;
    UIImageView *_notchImageView;
    int _selectedIndex;
    UIImage *_selectedPillImage;
    BOOL _showsSelectedPillNotch;
    BOOL _showsShadow;
    NSArray *_titles;
}

@property(copy) SKUIColorScheme * colorScheme;
@property int maximumNumberOfVisiblePills;
@property(copy) NSString * moreListTitle;
@property int selectedIndex;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } selectedPillFrame;
@property BOOL showsSelectedPillNotch;
@property BOOL showsShadow;
@property(copy) NSArray * titles;


- (void)_buttonAction:(id)arg1;
- (id)moreListTitle;
- (void)setMoreListTitle:(id)arg1;
- (BOOL)showsShadow;
- (BOOL)showsSelectedPillNotch;
- (void)setMaximumNumberOfVisiblePills:(int)arg1;
- (int)maximumNumberOfVisiblePills;
- (void)setShowsShadow:(BOOL)arg1;
- (void)setShowsSelectedPillNotch:(BOOL)arg1;
- (void)reloadPills;
- (id)_selectedPillImageInBundle:(id)arg1;
- (id)_uberImageWithBaseName:(id)arg1 tintColor:(id)arg2 bundle:(id)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectedPillFrame;
- (id)_notchImageInBundle:(id)arg1;
- (id)_newButtonWithTitle:(id)arg1 bundle:(id)arg2;
- (id)_backgroundImageInBundle:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)titles;
- (void)setSelectedIndex:(int)arg1;
- (int)selectedIndex;
- (void)setTitles:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;

@end
