/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPLegacyBottomGrabberLockBar, NSObject<TPLegacyIncomingCallOptionsViewDelegate>, UITableView, NSMutableArray, UIView, TPLegacyBottomBar, TPLegacyBottomBar<TPLegacyBottomGrabberBar>, NSArray;

@interface TPLegacyIncomingCallOptionsView : UIView <UITableViewDelegate, UITableViewDataSource> {
    TPLegacyBottomGrabberLockBar *_lockBar;
    TPLegacyBottomBar<TPLegacyBottomGrabberBar> *_grabberBar;
    TPLegacyBottomBar<TPLegacyBottomGrabberBar> *_displayedGrabberBar;
    UITableView *_optionsView;
    UIView *_footerView;
    UIView *_headerView;
    NSMutableArray *_buttons;
    BOOL _usesLockBar;
    int _viewType;
    BOOL _optionsShown;
    BOOL _scrolling;
    NSArray *_lockBarGrabberGestureRecognizers;
    NSArray *_doubleButtonBarGrabberGestureRecognizers;
    struct CGPoint { 
        float x; 
        float y; 
    } _gestureInitialTouchPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } _gestureLastTouchPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } _gestureVelocity;
    float _maxImageWidth;
    float _maxImageHeight;
    float _buttonContentInset;
    NSObject<TPLegacyIncomingCallOptionsViewDelegate> *_incomingOptionsDelegate;
}

@property(readonly) TPLegacyBottomBar * lockBar;
@property NSObject<TPLegacyIncomingCallOptionsViewDelegate> * incomingOptionsDelegate;
@property BOOL usesLockBar;
@property BOOL optionsShown;
@property(readonly) BOOL hasGrabberImage;


- (BOOL)usesLockBar;
- (void)scrollViewDidEndScrollingWithShownPixels:(float)arg1;
- (void)scrollViewDidBeginScrolling;
- (void)scrollViewDidShowPixels:(float)arg1;
- (id)displayedGrabberBar;
- (void)setUsesLockBar:(BOOL)arg1;
- (void)setLockBarLabel:(id)arg1;
- (BOOL)hasGrabberImage;
- (id)initForIncomingFaceTimeWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)optionsHeight;
- (BOOL)optionsShown;
- (id)incomingOptionsDelegate;
- (id)_initForType:(int)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)recommendedBackgroundColor;
- (void)_singleButtonClicked;
- (void)_accept;
- (void)_decline;
- (void)setGrabberImage:(id)arg1;
- (void)lockBarUnlocked:(id)arg1;
- (id)initForIncomingCallWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setWellAlpha:(float)arg1;
- (id)initForIncomingCallWaitingWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)lockBar;
- (void)setOptionsShown:(BOOL)arg1;
- (void)setIncomingOptionsDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)scrolling;
- (void)dealloc;
- (float)barHeight;
- (void)_buttonClicked:(id)arg1;
- (void)tap:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)layoutSubviews;
- (void)reloadData;
- (void)start;

@end
