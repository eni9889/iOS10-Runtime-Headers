/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class PKDiffView, UILabel, PKPassField;

@interface PKPassFieldView : UIView  {
    struct CGSize { 
        float width; 
        float height; 
    } _cachedLabelSize;
    struct CGSize { 
        float width; 
        float height; 
    } _cachedValueSize;
    BOOL _needsCachedSizeUpdate;
    PKPassField *_field;
    PKDiffView *_diffView;
    UILabel *_labelLabel;
    UILabel *_valueLabel;
}

@property(retain) PKPassField * field;
@property(readonly) UILabel * labelLabel;
@property(readonly) UILabel * valueLabel;
@property(readonly) float minimumWidth;
@property(retain) PKDiffView * diffView;
@property BOOL needsCachedSizeUpdate;


- (void)setNeedsCachedSizeUpdate:(BOOL)arg1;
- (BOOL)needsCachedSizeUpdate;
- (id)diffView;
- (void)setDiffView:(id)arg1;
- (void)_computeIntrinsicSizes;
- (void)setValueAttributedText:(id)arg1;
- (void)setLabelAttributedText:(id)arg1;
- (id)initWithField:(id)arg1 fieldTemplate:(id)arg2;
- (void)presentDiff:(id)arg1 inView:(id)arg2 completion:(id)arg3;
- (id)valueLabel;
- (id)labelLabel;
- (void)setField:(id)arg1;
- (id)field;
- (void)dealloc;
- (float)minimumWidth;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;

@end
