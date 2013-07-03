/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIFont;

@interface UITextRenderingAttributes : NSObject <NSCopying> {
    UIFont *_font;
    float _minimumFontSize;
    float _actualFontSize;
    float _lineSpacing;
    int _lineBreakMode;
    int _baselineAdjustment;
    float _trackingAdjustment;
    float _minimumTrackingAdjustment;
    float _actualTrackingAdjustment;
    int _alignment;
    BOOL _includeEmoji;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _truncationRect;
    BOOL _drawUnderline;
}


- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
