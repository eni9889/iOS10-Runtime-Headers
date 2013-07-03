/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIFont, NSString, UITextViewPrintFormatter, UITextView, UIColor, NSAttributedString;

@interface UISimpleTextPrintFormatter : UIPrintFormatter  {
    UITextView *_textView;
    UITextViewPrintFormatter *_textViewPrintFormatter;
}

@property(copy) NSString * text;
@property(copy) NSAttributedString * attributedText;
@property(retain) UIFont * font;
@property(retain) UIColor * color;
@property int textAlignment;


- (id)text;
- (id)initWithText:(id)arg1;
- (id)font;
- (id)color;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAttributedText:(id)arg1;
- (id)_textViewPrintFormatter;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forPageAtIndex:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForPageAtIndex:(int)arg1;
- (void)removeFromPrintPageRenderer;
- (int)_recalcPageCount;
- (void)setColor:(id)arg1;
- (id)attributedText;
- (int)textAlignment;
- (void)setTextAlignment:(int)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)setAttributedText:(id)arg1;

@end
