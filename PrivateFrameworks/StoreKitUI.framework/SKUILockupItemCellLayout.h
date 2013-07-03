/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImageView, UILabel, UIColor, NSString;

@interface SKUILockupItemCellLayout : SKUIItemCellLayout  {
    UILabel *_categoryLabel;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInsets;
    struct CGSize { 
        float width; 
        float height; 
    } _imageBoundingSize;
    int _layoutStyle;
    int _lockupSize;
    int _numberOfUserRatings;
    UIColor *_textColor;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    float _userRating;
    UIImageView *_userRatingImageView;
    UILabel *_userRatingLabel;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property struct CGSize { float x1; float x2; } imageBoundingSize;
@property int layoutStyle;
@property int lockupSize;
@property(copy) NSString * categoryString;
@property(copy) NSString * title;
@property int numberOfUserRatings;
@property float userRating;


- (int)numberOfUserRatings;
- (int)lockupSize;
- (int)layoutStyle;
- (struct CGSize { float x1; float x2; })imageBoundingSize;
- (void)setCategoryString:(id)arg1;
- (id)categoryString;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_layoutLabelsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_layoutIconImageView;
- (void)_layoutVertical;
- (void)_layoutHorizontal;
- (void)_initSKUILockupItemCellLayout;
- (void)layoutForItemOfferChange;
- (id)initWithParentView:(id)arg1;
- (id)initWithCollectionViewCell:(id)arg1;
- (void)setLockupSize:(int)arg1;
- (void)setLayoutStyle:(int)arg1;
- (void)setImageBoundingSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)_reloadUserRatingViews;
- (void)setNumberOfUserRatings:(int)arg1;
- (void)setUserRating:(float)arg1;
- (float)userRating;
- (void)setIconImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setBackgroundColor:(id)arg1;
- (void).cxx_destruct;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)initWithTableViewCell:(id)arg1;
- (void)layoutSubviews;

@end
