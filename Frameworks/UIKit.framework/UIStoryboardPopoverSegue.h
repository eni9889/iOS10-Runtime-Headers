/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, NSArray, UIPopoverController, UIBarButtonItem;

@interface UIStoryboardPopoverSegue : UIStoryboardSegue  {
    UIPopoverController *_popoverController;
    NSArray *_passthroughViews;
    unsigned int _permittedArrowDirections;
    UIView *_anchorView;
    UIBarButtonItem *_anchorBarButtonItem;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _anchorRect;
}

@property(readonly) UIPopoverController * popoverController;
@property(setter=_setPassthroughViews:,copy) NSArray * _passthroughViews;
@property(setter=_setPermittedArrowDirections:) unsigned int _permittedArrowDirections;
@property(setter=_setAnchorBarButtonItem:,retain) UIBarButtonItem * _anchorBarButtonItem;
@property(setter=_setAnchorView:,retain) UIView * _anchorView;
@property(setter=_setAnchorRect:) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _anchorRect;


- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_anchorRect;
- (id)_anchorView;
- (id)_anchorBarButtonItem;
- (unsigned int)_permittedArrowDirections;
- (void)_setAnchorRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setAnchorView:(id)arg1;
- (void)_setAnchorBarButtonItem:(id)arg1;
- (void)_setPermittedArrowDirections:(unsigned int)arg1;
- (void)_setPassthroughViews:(id)arg1;
- (void)perform;
- (id)popoverController;
- (id)_passthroughViews;

@end
