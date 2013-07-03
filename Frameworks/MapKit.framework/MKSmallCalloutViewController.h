/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIView, NSString, MKCalloutBackgroundView, MKSmallCalloutView;

@interface MKSmallCalloutViewController : UIViewController <CalloutViewControllerProtocol> {
    MKSmallCalloutView *_smallCalloutView;
}

@property(retain) MKCalloutBackgroundView * calloutBackgroundView;
@property(copy) NSString * calloutTitle;
@property(copy) NSString * calloutSubtitle;
@property(retain) UIView * leftView;
@property(retain) UIView * rightView;
@property(retain) UIView * detailView;

+ (struct CGSize { float x1; float x2; })defaultSize;

- (void)setDetailView:(id)arg1;
- (BOOL)canDisplayCompleteTitleWhenExpanded;
- (void)setCalloutBackgroundView:(id)arg1;
- (id)calloutBackgroundView;
- (id)detailView;
- (void)setCalloutSubtitle:(id)arg1 animated:(BOOL)arg2;
- (void)beginMapsTransitionMovingSideways;
- (id)_smallCalloutView;
- (void)setDetailView:(id)arg1 animated:(BOOL)arg2;
- (void)setCalloutSubtitle:(id)arg1;
- (id)calloutSubtitle;
- (id)calloutTitle;
- (void)setCalloutTitle:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)rightView;
- (id)leftView;
- (void)setRightView:(id)arg1;
- (void)setLeftView:(id)arg1;
- (void)setRightView:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftView:(id)arg1 animated:(BOOL)arg2;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (void)viewWillAppear:(BOOL)arg1;

@end
