/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, SULinkControl, NSMutableArray;

@interface SUDownloadsGridFooterView : UIView  {
    SULinkControl *_linkControl;
    NSMutableArray *_nativeButtons;
    NSArray *_scriptButtons;
}

@property(retain) NSArray * scriptButtons;


- (id)_newNativeButton;
- (float)_maximumButtonHeight;
- (void)_reloadNativeButtons;
- (void)_linkControlAction:(id)arg1;
- (void)setScriptButtons:(id)arg1;
- (id)scriptButtons;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)sizeToFit;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end
