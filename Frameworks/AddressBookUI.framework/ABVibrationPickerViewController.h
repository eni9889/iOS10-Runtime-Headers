/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIBarButtonItem;

@interface ABVibrationPickerViewController : ABPickerViewController  {
    id _vibrationPickerViewController;
    BOOL _canEnterEditingMode;
    UIBarButtonItem *_saveButton;
}

@property(readonly) id vibrationPickerViewController;
@property(setter=_setSaveButton:,retain) UIBarButtonItem * _saveButton;


- (id)_saveButton;
- (void)_setSaveButton:(id)arg1;
- (void)_vibrationSaveButtonClicked:(id)arg1;
- (id)vibrationPickerViewController;
- (id)initWithAlertType:(int)arg1;
- (float)ab_heightToFitForViewInPopoverView;
- (void)setStyleProvider:(id)arg1;
- (void)dealloc;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)loadView;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;

@end
