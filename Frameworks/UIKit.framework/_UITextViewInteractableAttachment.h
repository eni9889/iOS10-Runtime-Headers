/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTextAttachment;

@interface _UITextViewInteractableAttachment : _UITextViewInteractableItem  {
    NSTextAttachment *_attachment;
}

@property(retain) NSTextAttachment * attachment;

+ (id)interactableLinkWithAttachment:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;

- (id)_image;
- (void)dealloc;
- (void)_saveToCameraRoll;
- (void)_copyImage;
- (id)actions;
- (id)localizedTitle;
- (id)defaultAction;
- (BOOL)allowInteraction;
- (id)attachment;
- (void)setAttachment:(id)arg1;

@end
