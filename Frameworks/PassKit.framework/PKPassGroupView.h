/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class UIPanGestureRecognizer, PKGroup, PKPassView, UILongPressGestureRecognizer, UIPageControl, PKReusablePassViewQueue, UIView, <PKPassGroupViewDelegate>, _UIInterpolatingMotionEffect, UIScrollView, NSMutableDictionary;

@interface PKPassGroupView : UIView <WLCardViewDelegate, PKGroupDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate> {
    NSMutableDictionary *_passViewsByUniqueID;
    PKReusablePassViewQueue *_passViewQueue;
    int _presentationState;
    UIScrollView *_horizontalScrollView;
    UIPageControl *_pageControl;
    unsigned int _displayIndex;
    UIView *_dimmerView;
    float _dimmerValue;
    BOOL _showPageControl;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    BOOL _canPan;
    _UIInterpolatingMotionEffect *_horizontalMotionEffect;
    _UIInterpolatingMotionEffect *_verticalMotionEffect;
    PKGroup *_group;
    <PKPassGroupViewDelegate> *_delegate;
    float _verticalMotionRelativeValue;
    float _horizontalMotionRelativeValue;
}

@property(retain) PKGroup * group;
@property(readonly) PKPassView * frontmostPassView;
@property PKReusablePassViewQueue * passViewQueue;
@property int presentationState;
@property(readonly) unsigned int displayIndex;
@property(readonly) UIPageControl * pageControl;
@property float verticalMotionRelativeValue;
@property float horizontalMotionRelativeValue;
@property(readonly) <PKPassGroupViewDelegate> * delegate;


- (void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(unsigned int)arg3;
- (void)group:(id)arg1 didMovePassFromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned int)arg3;
- (void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(unsigned int)arg3;
- (float)horizontalMotionRelativeValue;
- (float)verticalMotionRelativeValue;
- (id)passViewQueue;
- (void)flipPassViewForPass:(id)arg1 animated:(BOOL)arg2 fromLeft:(BOOL)arg3;
- (void)_tilePagesEagerly:(BOOL)arg1;
- (void)_updatePageControl;
- (void)_loadNeededViews;
- (void)_evictUnusedViews;
- (id)_loadCardViewForUniqueID:(id)arg1;
- (id)_uniqueIDsOfVisibleCards;
- (unsigned int)displayIndex;
- (id)_stackIndexesFromVisibleIndexes:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_fanningFrameForCardView:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_setupPageControl;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_pagingFrameForCardView:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setShowPageControlWithAnimation:(BOOL)arg1 duration:(double)arg2 delay:(double)arg3;
- (void)_showFrontmostPassOnly:(BOOL)arg1;
- (void)_enumerateCardViewsByStackOrderWithBlock:(id)arg1;
- (int)_defaultContentModeForIndex:(unsigned int)arg1;
- (void)_setupViewsForFanningWithAnimation:(BOOL)arg1 resizeCards:(BOOL)arg2;
- (void)_setupViewsForPileWithAnimation:(BOOL)arg1 resizeCards:(BOOL)arg2;
- (void)_setupViewsForStackingWithAnimation:(BOOL)arg1 scrolling:(BOOL)arg2 resizeCards:(BOOL)arg3;
- (void)_setupViewsForPagingWithAnimation:(BOOL)arg1 resizeCards:(BOOL)arg2;
- (void)_pageControlChanged:(id)arg1;
- (void)_removePanAndLongPressGestureRecognizers;
- (void)_addPanAndLongPressGestureRecognizers;
- (id)_loadCardViewForIndex:(unsigned int)arg1 contentMode:(int)arg2;
- (void)setPassViewQueue:(id)arg1;
- (void)setVerticalMotionEnabled:(BOOL)arg1;
- (void)setHorizontalMotionEnabled:(BOOL)arg1;
- (void)setVerticalMotionRelativeValue:(float)arg1;
- (void)setHorizontalMotionRelativeValue:(float)arg1;
- (void)setPresentationState:(int)arg1 animated:(BOOL)arg2 resizePasses:(BOOL)arg3;
- (void)applyDefaultModeForPassesWithDuration:(double)arg1;
- (id)initWithGroup:(id)arg1 delegate:(id)arg2 contentMode:(int)arg3;
- (id)frontmostPassView;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeOfVisibleIndexes;
- (void)presentPassWithUniqueID:(id)arg1;
- (void)setPresentationState:(int)arg1 animated:(BOOL)arg2;
- (void)passViewTapped:(id)arg1;
- (void)passViewDidFlip:(id)arg1 animated:(BOOL)arg2;
- (BOOL)passViewShouldFlip:(id)arg1;
- (void)passView:(id)arg1 flipButtonPressedForPass:(id)arg2;
- (BOOL)passView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
- (void)passView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
- (BOOL)passViewBackGrowsCentered:(id)arg1;
- (void)presentDiff:(id)arg1 completion:(id)arg2;
- (void)setDimmer:(float)arg1 animated:(BOOL)arg2;
- (void)_handleLongPress:(id)arg1;
- (id)groupID;
- (void)removeFromSuperview;
- (void)setPresentationState:(int)arg1;
- (int)presentationState;
- (void)setGroup:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)_handlePanGesture:(id)arg1;
- (id)pageControl;
- (id)group;
- (struct CGSize { float x1; float x2; })_contentSize;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end
