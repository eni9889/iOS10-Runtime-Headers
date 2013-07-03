/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSNumber, UIFont;

@interface PKPassFieldTemplate : NSObject  {
    NSNumber *_boxedTextAlignment;
    NSNumber *_boxedVerticalPadding;
    NSNumber *_boxedSuppressesLabel;
    NSNumber *_boxedValueCanWrap;
    UIFont *_labelFont;
    UIFont *_valueFont;
    Class _viewSubclass;
}

@property int textAlignment;
@property float verticalPadding;
@property(retain) UIFont * labelFont;
@property(retain) UIFont * valueFont;
@property BOOL suppressesLabel;
@property BOOL valueCanWrap;
@property(retain) Class viewSubclass;
@property(retain) NSNumber * boxedTextAlignment;
@property(retain) NSNumber * boxedVerticalPadding;
@property(retain) NSNumber * boxedSuppressesLabel;
@property(retain) NSNumber * boxedValueCanWrap;

+ (id)fieldTemplateWithViewSubclass:(Class)arg1;
+ (id)fieldTemplateWithVerticalPadding:(float)arg1;
+ (id)_templateByResolvingTemplate:(id)arg1 withDefault:(id)arg2;
+ (id)fieldTemplateWithTextAlignment:(int)arg1;

- (void)setValueCanWrap:(BOOL)arg1;
- (BOOL)valueCanWrap;
- (void)setSuppressesLabel:(BOOL)arg1;
- (BOOL)suppressesLabel;
- (Class)viewSubclass;
- (id)labelFont;
- (void)setBoxedValueCanWrap:(id)arg1;
- (id)boxedValueCanWrap;
- (void)setBoxedSuppressesLabel:(id)arg1;
- (id)boxedSuppressesLabel;
- (void)setBoxedVerticalPadding:(id)arg1;
- (id)boxedVerticalPadding;
- (void)setBoxedTextAlignment:(id)arg1;
- (id)boxedTextAlignment;
- (void)setViewSubclass:(Class)arg1;
- (id)valueFont;
- (void)setVerticalPadding:(float)arg1;
- (void)setValueFont:(id)arg1;
- (float)verticalPadding;
- (void)setLabelFont:(id)arg1;
- (void)dealloc;
- (int)textAlignment;
- (void)setTextAlignment:(int)arg1;

@end
