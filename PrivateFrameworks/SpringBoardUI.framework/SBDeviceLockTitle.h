/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class NSString;

@interface SBDeviceLockTitle : UIView  {
    int _style;
    int _interfaceOrientation;
}

@property int interfaceOrientation;
@property(getter=isHighlighted) BOOL highlighted;
@property(retain) NSString * title;
@property(retain) NSString * subtitle;

+ (id)newWithStyle:(int)arg1 interfaceOrientation:(int)arg2;

- (void)blinkSubtitle;
- (id)_initWithStyle:(int)arg1 interfaceOrientation:(int)arg2;
- (void)setTitle:(id)arg1;
- (id)title;
- (int)interfaceOrientation;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (void)setInterfaceOrientation:(int)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isHighlighted;

@end
