/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIImagePickerController, NSArray, <ABPersonImageDataDelegate>, UIPopoverController, NSDictionary, CAKeyframeAnimation;

@interface ABImagePickerController : ABContentController <UIModalViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate, ABMultipleSourceImagePickerDelegate> {
    BOOL _hasExistingPhoto;
    BOOL _allowsEditingExistingPhoto;
    BOOL _canChoosePhoto;
    BOOL _canChooseFromMultiplePhotos;
    BOOL _confirmingDelete;
    BOOL _applyImageChangesToAllPeople;
    UIImagePickerController *_imagePicker;
    NSArray *_people;
    NSArray *_writablePeople;
    NSDictionary *_animationContextDictionary;
    CAKeyframeAnimation *_bounceAnimation;
    UIPopoverController *_popoverPresenter;
    BOOL _editingImage;
    <ABPersonImageDataDelegate> *_imageDataDelegate;
}

@property <ABPersonImageDataDelegate> * imageDataDelegate;

+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (id)imageDataDelegate;
- (BOOL)hasMultipleActions;
- (void)setImageDataDelegate:(id)arg1;
- (void)multipleSourcePickerDidSelectPhotoPicker:(id)arg1;
- (void)multipleSourcePicker:(id)arg1 didSelectPerson:(id)arg2;
- (void)deletePhotoNoConfirm;
- (void)editPhoto;
- (void)delayedPerform:(SEL)arg1 withObject:(id)arg2;
- (void)usePhotoFromPerson:(id)arg1;
- (void)chooseExisting;
- (void)choosePhoto;
- (void)delayedPerform:(SEL)arg1;
- (void)deletePhoto:(BOOL)arg1;
- (void)cancelPicker;
- (id)ab_windowContentViewForView:(id)arg1;
- (void)animationDidStopAfterDelay:(id)arg1;
- (id)_createImagePickerForEditingImageData:(id)arg1 shouldSaveFullSize:(BOOL)arg2 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)doEditPhoto;
- (void)_showActionSheet:(id)arg1 previousOwner:(id)arg2;
- (id)buttonTitlesAndIndicesForPickingPreferredPhoto;
- (id)_removePreviousSheet;
- (void)addButtonForSource:(BOOL)arg1 suffix:(int)arg2 name:(id)arg3 indexInAllPeople:(int)arg4 toArray:(id)arg5;
- (id)_formatStringForSource:(void*)arg1 withSuffix:(BOOL)arg2 useAbbreviatedStrings:(BOOL)arg3;
- (void)_showImagePickerWithPriorConfirmation:(BOOL)arg1;
- (BOOL)_hasMultipleWritablePeople;
- (id)popoverPresenterForViewController:(id)arg1;
- (void)releaseImagePicker;
- (void)_tearDownImagePickerController;
- (BOOL)canTakePhoto;
- (void)back:(BOOL)arg1 save:(BOOL)arg2;
- (id)initWithContentControllerDelegate:(id)arg1 addressBook:(void*)arg2;
- (id)_createImagePicker;
- (void)takePhoto;
- (void)reload;
- (id)contentView;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (void)resume;
- (void)suspend;
- (void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)orderOut:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;

@end
