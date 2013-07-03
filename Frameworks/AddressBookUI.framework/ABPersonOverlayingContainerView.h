/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPersonTabsLayoutManager>, UIView;

@interface ABPersonOverlayingContainerView : UIScrollView <ABPersonTabsScrollView> {
    float _minimumBottomInset;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _savedContentInset;
    UIView *_backgroundView;
    UIView *_abContentView;
    <ABPersonTabsLayoutManager> *_tabsLayoutManager;
}

@property(retain) UIView * contentView;
@property float minimumBottomInset;
@property(retain) UIView * backgroundView;
@property(retain) <ABPersonTabsLayoutManager> * tabsLayoutManager;


- (void)_updateContentFrameAndSize;
- (void)setTabsLayoutManager:(id)arg1;
- (id)tabsLayoutManager;
- (void)setMinimumBottomInset:(float)arg1;
- (float)minimumBottomInset;
- (id)contentView;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)dealloc;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)layoutSubviews;

@end
