/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIImageView, UIImage, UILabel, NSString;

@interface SULockoutView : UIView  {
    UIImageView *_backgroundImageView;
    UILabel *_bodyLabel;
    UIImageView *_glowImageView;
    UIImageView *_imageView;
    int _layoutPreset;
    UILabel *_titleLabel;
}

@property(retain) UIImage * backgroundImage;
@property(copy) NSString * body;
@property(retain) UIImage * image;
@property(retain) UIImage * glowImage;
@property int layoutPreset;
@property(copy) NSString * title;


- (id)glowImage;
- (id)_newLabel;
- (void)_layoutForSlowNetwork;
- (int)layoutPreset;
- (id)_bodyLabel;
- (void)setLayoutPreset:(int)arg1;
- (void)setGlowImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)image;
- (void)setImage:(id)arg1;
- (id)body;
- (void)setBody:(id)arg1;
- (void)dealloc;
- (void)setBackgroundImage:(id)arg1;
- (id)_titleLabel;
- (id)_imageView;
- (id)backgroundImage;
- (void)layoutSubviews;

@end
