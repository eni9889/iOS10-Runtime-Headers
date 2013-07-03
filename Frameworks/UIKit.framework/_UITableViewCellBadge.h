/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface _UITableViewCellBadge : UIView  {
    BOOL _isSelected;
    NSString *_text;
    struct CGSize { 
        float width; 
        float height; 
    } _textSize;
}

@property(copy) NSString * text;
@property(getter=isSelected) BOOL selected;


- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)text;
- (void)setIsSelected:(BOOL)arg1;
- (void)_sizeToFit;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isHighlighted;
- (BOOL)isSelected;
- (void)setText:(id)arg1;

@end
