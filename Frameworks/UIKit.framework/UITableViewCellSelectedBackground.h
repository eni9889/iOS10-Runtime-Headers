/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor;

@interface UITableViewCellSelectedBackground : UIView  {
    int _selectionStyle;
    UIColor *_multiselectBackgroundColor;
    UIColor *_selectionTintColor;
    BOOL _multiselect;
}

@property int selectionStyle;
@property(retain) UIColor * multiselectBackgroundColor;
@property(getter=isMultiselect) BOOL multiselect;
@property(retain) UIColor * selectionTintColor;


- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)selectionTintColor;
- (void)setMultiselectBackgroundColor:(id)arg1;
- (id)multiselectBackgroundColor;
- (int)selectionStyle;
- (BOOL)isMultiselect;
- (void)setMultiselect:(BOOL)arg1;
- (void)setSelectionTintColor:(id)arg1;
- (void)setSelectionStyle:(int)arg1;

@end
