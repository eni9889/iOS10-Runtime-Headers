/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class UILabel;

@interface SBDeviceLockTitleWildcatKeypad : SBDeviceLockTitle  {
    BOOL _highlighted;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}


- (void)blinkSubtitle;
- (id)_initWithStyle:(int)arg1 interfaceOrientation:(int)arg2;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)dealloc;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)_backgroundImage;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isHighlighted;
- (void)layoutSubviews;

@end
