/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UILongDefinitionViewDelegate>, UIView, UITextView, _UIDefinitionValue;

@interface _UILongDefinitionView : UIView  {
    UIView *_headerView;
    UITextView *_definitionView;
    _UIDefinitionValue *_definitionValue;
    <_UILongDefinitionViewDelegate> *_delegate;
}

@property(readonly) _UIDefinitionValue * definitionValue;
@property <_UILongDefinitionViewDelegate> * delegate;


- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 definitionValue:(id)arg2;
- (void)_backButtonPressed:(id)arg1;
- (id)definitionValue;

@end
