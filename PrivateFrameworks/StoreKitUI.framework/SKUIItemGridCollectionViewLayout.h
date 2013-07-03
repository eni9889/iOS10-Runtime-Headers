/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIColor;

@interface SKUIItemGridCollectionViewLayout : UICollectionViewFlowLayout  {
    UIColor *_evenColor;
    int _numberOfColumns;
    UIColor *_oddColor;
    float _rowHeight;
}

@property(copy) UIColor * evenRowBackgroundColor;
@property(copy) UIColor * oddRowBackgroundColor;
@property int numberOfColumns;
@property float rowHeight;

+ (Class)layoutAttributesClass;

- (id)oddRowBackgroundColor;
- (id)evenRowBackgroundColor;
- (void)setOddRowBackgroundColor:(id)arg1;
- (void)setEvenRowBackgroundColor:(id)arg1;
- (void)setNumberOfColumns:(int)arg1;
- (int)numberOfColumns;
- (id)init;
- (void).cxx_destruct;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)rowHeight;
- (void)setRowHeight:(float)arg1;

@end
