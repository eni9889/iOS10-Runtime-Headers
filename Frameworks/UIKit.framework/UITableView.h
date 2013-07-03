/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSIndexPath, UIGestureRecognizer, UITableViewIndex, UITableViewRowData, NSMutableArray, _UITableViewDeleteAnimationSupport, UIGobblerGestureRecognizer, NSTimer, _UITableViewReorderingSupport, <UITableViewDelegate>, UILongPressGestureRecognizer, NSMutableDictionary, UIRefreshControl, UITouch, UITableViewCountView, NSArray, UIImage, UIColor, UITableViewCell, UIView, <UITableViewDataSource>;

@interface UITableView : UIScrollView <UIGestureRecognizerDelegatePrivate, NSCoding> {
    <UITableViewDataSource> *_dataSource;
    UITableViewRowData *_rowData;
    float _rowHeight;
    float _sectionHeaderHeight;
    float _sectionFooterHeight;
    float _estimatedRowHeight;
    float _estimatedSectionHeaderHeight;
    float _estimatedSectionFooterHeight;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _visibleBounds;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _visibleRows;
    NSMutableArray *_visibleCells;
    NSIndexPath *_firstResponderIndexPath;
    UIView *_firstResponderView;
    int _firstResponderViewType;
    NSMutableDictionary *_reusableTableCells;
    NSMutableDictionary *_nibMap;
    NSMutableDictionary *_headerFooterNibMap;
    NSMutableDictionary *_nibExternalObjectsTables;
    UITableViewCell *_topSeparatorCell;
    UIView *_topSeparator;
    NSMutableArray *_extraSeparators;
    struct __CFDictionary { } *_visibleHeaderViews;
    struct __CFDictionary { } *_visibleFooterViews;
    NSMutableDictionary *_reusableHeaderFooterViews;
    NSMutableArray *_highlightedIndexPaths;
    NSMutableArray *_selectedIndexPaths;
    int _swipeToDeleteSection;
    int _swipeToDeleteRow;
    NSIndexPath *_pendingSelectionIndexPath;
    NSArray *_pendingDeselectionIndexPaths;
    UIView *_newContentView;
    _UITableViewDeleteAnimationSupport *_deleteAnimationSupport;
    _UITableViewReorderingSupport *_reorderingSupport;
    UIView *_backgroundView;
    UIView *_clearBlendingView;
    UITableViewIndex *_index;
    UIView *_tableHeaderBackgroundView;
    UIView *_tableHeaderView;
    UIView *_tableFooterView;
    UITableViewCountView *_countLabel;
    int _tableReloadingSuspendedCount;
    int _sectionIndexMinimumDisplayRowCount;
    int _updateAnimationCount;
    NSMutableArray *_insertItems;
    NSMutableArray *_deleteItems;
    NSMutableArray *_reloadItems;
    NSMutableArray *_moveItems;
    UIColor *_separatorColor;
    UIColor *_separatorTopShadowColor;
    UIColor *_separatorBottomShadowColor;
    UIColor *_checkmarkColor;
    UIColor *_sectionBorderColor;
    UIColor *_indexColor;
    UIColor *_indexBackgroundColor;
    UIColor *_indexTrackingBackgroundColor;
    NSArray *_defaultSectionIndexTitles;
    UIGestureRecognizer *_swipeGestureRecognizer;
    UIGobblerGestureRecognizer *_swipeToDeleteGobblerGestureRecognizer;
    UIGobblerGestureRecognizer *_gobblerGestureRecognizer;
    UITableViewCell *_swipeToDeleteCell;
    int _updateCount;
    NSIndexPath *_displayingCellContentStringIndexPath;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSTimer *_longPressAutoscrollTimer;
    int _longPressAutoscrollDirection;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _sectionContentInset;
    UITouch *_currentTouch;
    UIRefreshControl *_refreshControl;
    NSMutableDictionary *_cellClassDict;
    NSMutableDictionary *_headerFooterClassDict;
    float _topPadding;
    float _bottomPadding;
    float _marginWidth;
    id _updateCompletionHandler;
    UIImage *_multiSelectCheckmarkImage;
    UIImage *_multiSelectNotSelectedImage;
    struct { 
        unsigned int dataSourceNumberOfRowsInSection : 1; 
        unsigned int dataSourceCellForRow : 1; 
        unsigned int dataSourceNumberOfSectionsInTableView : 1; 
        unsigned int dataSourceTitleForHeaderInSection : 1; 
        unsigned int dataSourceTitleForFooterInSection : 1; 
        unsigned int dataSourceDetailTextForHeaderInSection : 1; 
        unsigned int dataSourceCommitEditingStyle : 1; 
        unsigned int dataSourceSectionIndexTitlesForTableView : 1; 
        unsigned int dataSourceSectionForSectionIndexTitle : 1; 
        unsigned int dataSourceCanEditRow : 1; 
        unsigned int dataSourceCanMoveRow : 1; 
        unsigned int dataSourceCanUpdateRow : 1; 
        unsigned int dataSourceShouldShowMenu : 1; 
        unsigned int dataSourceCanPerformAction : 1; 
        unsigned int dataSourcePerformAction : 1; 
        unsigned int dataSourceIndexPathForSectionIndexTitle : 1; 
        unsigned int delegateEditingStyleForRowAtIndexPath : 1; 
        unsigned int delegateTitleForDeleteConfirmationButtonForRowAtIndexPath : 1; 
        unsigned int delegateShouldIndentWhileEditing : 1; 
        unsigned int dataSourceMoveRow : 1; 
        unsigned int delegateCellForRow : 1; 
        unsigned int delegateWillDisplayCell : 1; 
        unsigned int delegateDidEndDisplayingCell : 1; 
        unsigned int delegateDidEndDisplayingSectionHeader : 1; 
        unsigned int delegateDidEndDisplayingSectionFooter : 1; 
        unsigned int delegateHeightForRow : 1; 
        unsigned int delegateHeightForSectionHeader : 1; 
        unsigned int delegateTitleWidthForSectionHeader : 1; 
        unsigned int delegateHeightForSectionFooter : 1; 
        unsigned int delegateTitleWidthForSectionFooter : 1; 
        unsigned int delegateEstimatedHeightForRow : 1; 
        unsigned int delegateEstimatedHeightForSectionHeader : 1; 
        unsigned int delegateEstimatedHeightForSectionFooter : 1; 
        unsigned int delegateViewForHeaderInSection : 1; 
        unsigned int delegateViewForFooterInSection : 1; 
        unsigned int delegateDisplayedItemCountForRowCount : 1; 
        unsigned int delegateDisplayStringForRowCount : 1; 
        unsigned int delegateAccessoryTypeForRow : 1; 
        unsigned int delegateAccessoryButtonTappedForRow : 1; 
        unsigned int delegateWillSelectRow : 1; 
        unsigned int delegateWillDeselectRow : 1; 
        unsigned int delegateDidSelectRow : 1; 
        unsigned int delegateDidDeselectRow : 1; 
        unsigned int delegateWillBeginEditing : 1; 
        unsigned int delegateDidEndEditing : 1; 
        unsigned int delegateWillMoveToRow : 1; 
        unsigned int delegateIndentationLevelForRow : 1; 
        unsigned int delegateWantsHeaderForSection : 1; 
        unsigned int delegateHeightForRowsInSection : 1; 
        unsigned int delegateMargin : 1; 
        unsigned int delegateHeaderTitleAlignment : 1; 
        unsigned int delegateFooterTitleAlignment : 1; 
        unsigned int delegateFrameForSectionIndexGivenProposedFrame : 1; 
        unsigned int delegateDidFinishReload : 1; 
        unsigned int delegateHeightForHeader : 1; 
        unsigned int delegateHeightForFooter : 1; 
        unsigned int delegateViewForHeader : 1; 
        unsigned int delegateViewForFooter : 1; 
        unsigned int delegateCalloutTargetRectForCell; 
        unsigned int delegateShouldShowMenu : 1; 
        unsigned int delegateCanPerformAction : 1; 
        unsigned int delegatePerformAction : 1; 
        unsigned int delegateWillBeginReordering : 1; 
        unsigned int delegateDidEndReordering : 1; 
        unsigned int delegateDidCancelReordering : 1; 
        unsigned int delegateWillDisplayHeaderViewForSection : 1; 
        unsigned int delegateWillDisplayFooterViewForSection : 1; 
        unsigned int delegateShouldHighlightRow : 1; 
        unsigned int delegateDidHighlightRow : 1; 
        unsigned int delegateDidUnhighlightRow : 1; 
        unsigned int delegateTitleForSwipeAccessory : 1; 
        unsigned int delegateSwipeAccessoryPushed : 1; 
        unsigned int style : 1; 
        unsigned int separatorStyle : 3; 
        unsigned int wasEditing : 1; 
        unsigned int isEditing : 1; 
        unsigned int scrollsToSelection : 1; 
        unsigned int reloadSkippedDuringSuspension : 1; 
        unsigned int updating : 1; 
        unsigned int displaySkippedDuringSuspension : 1; 
        unsigned int needsReload : 1; 
        unsigned int updatingVisibleCellsManually : 1; 
        unsigned int scheduledUpdateVisibleCells : 1; 
        unsigned int scheduledUpdateVisibleCellsFrames : 1; 
        unsigned int warnForForcedCellUpdateDisabled : 1; 
        unsigned int displayTopSeparator : 1; 
        unsigned int countStringInsignificantRowCount : 4; 
        unsigned int needToAdjustExtraSeparators : 1; 
        unsigned int overlapsSectionHeaderViews : 1; 
        unsigned int ignoreDragSwipe : 1; 
        unsigned int ignoreTouchSelect : 1; 
        unsigned int lastHighlightedRowActive : 1; 
        unsigned int reloading : 1; 
        unsigned int allowsSelection : 1; 
        unsigned int allowsSelectionDuringEditing : 1; 
        unsigned int allowsMultipleSelection : 1; 
        unsigned int allowsMultipleSelectionDuringEditing : 1; 
        unsigned int showsSelectionImmediatelyOnTouchBegin : 1; 
        unsigned int indexHidden : 1; 
        unsigned int indexHiddenForSearch : 1; 
        unsigned int defaultShowsHorizontalScrollIndicator : 1; 
        unsigned int defaultShowsVerticalScrollIndicator : 1; 
        unsigned int sectionIndexTitlesLoaded : 1; 
        unsigned int tableHeaderViewShouldAutoHide : 1; 
        unsigned int tableHeaderViewIsHidden : 1; 
        unsigned int tableHeaderViewWasHidden : 1; 
        unsigned int tableHeaderViewShouldPin : 1; 
        unsigned int hideScrollIndicators : 1; 
        unsigned int sendReloadFinished : 1; 
        unsigned int keepFirstResponderWhenInteractionDisabled : 1; 
        unsigned int keepFirstResponderVisibleOnBoundsChange : 1; 
        unsigned int dontDrawTopShadowInGroupedSections : 1; 
        unsigned int forceStaticHeadersAndFooters; 
        unsigned int displaysCellContentStringsOnTapAndHold : 1; 
        unsigned int displayingCellContentStringCallout : 1; 
        unsigned int longPressAutoscrollingActive : 1; 
        unsigned int adjustsRowHeightsForSectionLocation : 1; 
        unsigned int customSectionContentInsetSet : 1; 
        unsigned int inInit : 1; 
        unsigned int inSetBackgroundColor : 1; 
        unsigned int usingCustomBackgroundView : 1; 
        unsigned int rowDataIndexPathsAreValidForCurrentCells : 1; 
        unsigned int committingDelete : 1; 
        unsigned int editingForSwipeDelete : 1; 
        unsigned int ignorePinnedTableHeaderUpdates : 1; 
        unsigned int navigationGestureWasEnabledBeforeSwipeToDelete : 1; 
        unsigned int didDisableNavigationGesture : 1; 
    } _tableFlags;
}

@property(readonly) int style;
@property <UITableViewDataSource> * dataSource;
@property <UITableViewDelegate> * delegate;
@property float rowHeight;
@property float sectionHeaderHeight;
@property float sectionFooterHeight;
@property float estimatedRowHeight;
@property float estimatedSectionHeaderHeight;
@property float estimatedSectionFooterHeight;
@property(retain) UIView * backgroundView;
@property(getter=isEditing) BOOL editing;
@property BOOL allowsSelection;
@property BOOL allowsSelectionDuringEditing;
@property BOOL allowsMultipleSelection;
@property BOOL allowsMultipleSelectionDuringEditing;
@property int sectionIndexMinimumDisplayRowCount;
@property(retain) UIColor * sectionIndexColor;
@property(retain) UIColor * sectionIndexBackgroundColor;
@property(retain) UIColor * sectionIndexTrackingBackgroundColor;
@property int separatorStyle;
@property(retain) UIColor * separatorColor;
@property(retain) UIView * tableHeaderView;
@property(retain) UIView * tableFooterView;
@property(getter=_sectionContentInset,setter=_setSectionContentInset:) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } sectionContentInset;
@property(retain) UITouch * currentTouch;

+ (void)_initializeForIdiom:(int)arg1;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;
+ (void)_accessibilityPerformValidations:(id)arg1;

- (void)moveSection:(int)arg1 toSection:(int)arg2;
- (id)_createPreparedCellForRowAtIndexPath:(id)arg1;
- (void)setCountString:(id)arg1;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2;
- (void)reloadSections:(id)arg1 withRowAnimation:(int)arg2;
- (void)deleteSections:(id)arg1 withRowAnimation:(int)arg2;
- (void)insertSections:(id)arg1 withRowAnimation:(int)arg2;
- (BOOL)isEditing;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_stopAutoscrollTimer;
- (void)setDataSource:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)dataSource;
- (int)style;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)setSectionIndexMinimumDisplayRowCount:(int)arg1;
- (int)sectionIndexMinimumDisplayRowCount;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_sectionContentInset;
- (BOOL)ignorePinnedTableHeaderUpdates;
- (void)_setIgnorePinnedTableHeaderUpdates:(BOOL)arg1;
- (BOOL)_hasHeaderFooterBelowCell:(id)arg1;
- (void)_setSwipeToDeleteCell:(id)arg1;
- (id)_swipeToDeleteCell;
- (void)_swipeAccessoryButtonPushedInCell:(id)arg1;
- (id)_titleForSwipeAccessoryButton;
- (id)_titleForDeleteConfirmationButton;
- (id)_multiSelectNotSelectedImage;
- (id)_multiSelectCheckmarkImage;
- (BOOL)_estimatesRowHeights;
- (void)_setKeepsFirstResponderVisibleOnBoundsChange:(BOOL)arg1;
- (BOOL)_keepsFirstResponderVisibleOnBoundsChange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_calloutTargetRectForCell:(id)arg1;
- (float)_backgroundInset;
- (float)_heightForSeparator;
- (void)_performAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
- (BOOL)_canPerformAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
- (BOOL)_shouldShowMenuForCell:(id)arg1;
- (BOOL)_isTableHeaderViewHidden;
- (id)_rowData;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_indexRect;
- (BOOL)_isShowingIndex;
- (void)animateDeletionOfRowWithCell:(id)arg1;
- (void)_finishedRemovingRemovalButtonForTableCell:(id)arg1;
- (void)_didInsertRowForTableCell:(id)arg1;
- (void)_removeWasCanceledForCell:(id)arg1;
- (id)titleForDeleteConfirmationButton:(id)arg1;
- (BOOL)_isCellReorderable:(id)arg1;
- (void)_drawExtraSeparator:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_tableFooterHeightDidChangeToHeight:(float)arg1;
- (void)_tableHeaderHeightDidChangeToHeight:(float)arg1;
- (int)_globalReorderingRow;
- (id)_reorderingCell;
- (BOOL)_isEditingWithNoSwipedCell;
- (BOOL)_isEditingRowAtIndexPath:(id)arg1;
- (BOOL)_wasEditingRowAtIndexPath:(id)arg1;
- (BOOL)_wasEditing;
- (id)_visibleCellForGlobalRow:(int)arg1;
- (void)_endReorderAnimations;
- (void)_beginReorderAnimationForCell:(id)arg1;
- (void)_beginReorderingForCell:(id)arg1;
- (void)_deselectAllNonMultiSelectRowsAnimated:(BOOL)arg1;
- (BOOL)_delegateImplementsViewForFooterInSection;
- (BOOL)_delegateImplementsViewForHeaderInSection;
- (BOOL)_dataSourceImplementsDetailTextForHeaderInSection;
- (BOOL)_dataSourceImplementsTitleForFooterInSection;
- (BOOL)_dataSourceImplementsTitleForHeaderInSection;
- (BOOL)_delegateImplementsAlignmentForFooterInSection;
- (BOOL)_delegateImplementsTitleWidthForFooterInSection;
- (BOOL)_delegateImplementsHeightForFooterInSection;
- (BOOL)_delegateImplementsAlignmentForHeaderInSection;
- (BOOL)_delegateImplementsTitleWidthForHeaderInSection;
- (BOOL)_delegateImplementsHeightForHeaderInSection;
- (BOOL)_delegateWantsCustomFooterForSection:(int)arg1;
- (BOOL)_delegateImplementsMarginForTableView;
- (BOOL)_delegateImplementsHeightForRowsInSection;
- (BOOL)_dataSourceImplementsCanUpdateRowAtIndexPath;
- (BOOL)_delegateImplementsHeightForRowAtIndexPath;
- (BOOL)_dataSourceImplementsNumberOfSectionsInTableView;
- (void)_endRefreshingAnimated:(BOOL)arg1;
- (void)_beginRefreshing;
- (id)_refreshControl;
- (void)_moveWithEvent:(id)arg1;
- (void)_selectRowsAtIndexPaths:(id)arg1 animated:(BOOL)arg2 scrollPosition:(int)arg3 notifyDelegate:(BOOL)arg4;
- (BOOL)_delegateImplementsEstimatedHeightForSectionFooter;
- (BOOL)_delegateImplementsEstimatedHeightForSectionHeader;
- (BOOL)_delegateImplementsEstimatedHeightForRowAtIndexPath;
- (float)_marginWidth;
- (void)_setMarginWidth:(float)arg1;
- (void)_setPinsTableHeaderView:(BOOL)arg1;
- (void)_setSectionContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)_adjustsRowHeightsForSectionLocation;
- (void)_setAdjustsRowHeightsForSectionLocation:(BOOL)arg1;
- (float)_contentWidthForCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)_setExternalObjectTable:(id)arg1 forNibLoadingOfCellWithReuseIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forHeaderFooterViewReuseIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forCellReuseIdentifier:(id)arg2;
- (void)registerNib:(id)arg1 forHeaderFooterViewReuseIdentifier:(id)arg2;
- (void)registerNib:(id)arg1 forCellReuseIdentifier:(id)arg2;
- (void)setEditing:(BOOL)arg1;
- (void)_endSwipeToDeleteGesture:(BOOL)arg1;
- (id)dequeueReusableCellWithIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (void)setTableFooterView:(id)arg1;
- (void)setTableHeaderView:(id)arg1;
- (id)backgroundView;
- (float)_bottomPadding;
- (void)_setBottomPadding:(float)arg1;
- (float)_topPadding;
- (void)_setTopPadding:(float)arg1;
- (BOOL)usesVariableMargins;
- (void)setUsesVariableMargins:(BOOL)arg1;
- (void)setSeparatorBottomShadowColor:(id)arg1;
- (void)setSeparatorTopShadowColor:(id)arg1;
- (unsigned int)maximumNumberOfSectionIndexTitlesWithoutTruncation;
- (BOOL)showsSelectionImmediatelyOnTouchBegin;
- (void)setShowsSelectionImmediatelyOnTouchBegin:(BOOL)arg1;
- (id)_indexPathsForHighlightedRows;
- (void)setAllowsSelectionDuringEditing:(BOOL)arg1;
- (void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2;
- (void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2;
- (void)_reloadSectionHeaderFooters:(id)arg1 withRowAnimation:(int)arg2;
- (void)_performBatchUpdates:(id)arg1 completion:(id)arg2;
- (void)scrollToNearestSelectedRowAtScrollPosition:(int)arg1 animated:(BOOL)arg2;
- (id)footerViewForSection:(int)arg1;
- (id)headerViewForSection:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rectForTableFooterView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rectForTableHeaderView;
- (void)setOverlapsSectionHeaderViews:(BOOL)arg1;
- (BOOL)overlapsSectionHeaderViews;
- (BOOL)tableHeaderViewShouldAutoHide;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })indexFrame;
- (BOOL)isIndexHidden;
- (void)setIndexHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setIndexHiddenForSearch:(BOOL)arg1;
- (void)reloadSectionIndexTitles;
- (float)sectionFooterHeight;
- (float)sectionHeaderHeight;
- (void)setSectionIndexBackgroundColor:(id)arg1;
- (id)sectionIndexBackgroundColor;
- (float)estimatedSectionFooterHeight;
- (void)setEstimatedSectionFooterHeight:(float)arg1;
- (float)estimatedSectionHeaderHeight;
- (void)setEstimatedSectionHeaderHeight:(float)arg1;
- (float)estimatedRowHeight;
- (void)setEstimatedRowHeight:(float)arg1;
- (void)_setHeaderAndFooterViewsFloat:(BOOL)arg1;
- (void)_setSectionIndexTrackingBackgroundColor:(id)arg1;
- (id)_sectionIndexTrackingBackgroundColor;
- (void)_setSectionIndexColor:(id)arg1;
- (id)_sectionIndexColor;
- (void)_scrollToTopHidingTableHeaderIfNecessary:(BOOL)arg1;
- (void)setDeleteConfirmationIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)_validateSectionHeadersAndFooters;
- (void)_validateCells;
- (void)_bringCellToFront:(id)arg1;
- (void)_setDrawsTopShadowInGroupedSections:(BOOL)arg1;
- (void)_setHeightForTableHeaderViewHiding:(float)arg1;
- (id)multiselectCheckmarkColor;
- (void)setMultiselectCheckmarkColor:(id)arg1;
- (id)_tableHeaderBackgroundView;
- (id)tableHeaderBackgroundColor;
- (void)setTableHeaderBackgroundColor:(id)arg1;
- (void)setCountStringInsignificantRowCount:(unsigned int)arg1;
- (float)_animationDuration;
- (void)_setDisplaysCellContentStringsOnTapAndHold:(BOOL)arg1;
- (BOOL)_displaysCellContentStringsOnTapAndHold;
- (BOOL)_pathIsHidden:(id)arg1;
- (BOOL)_indexPathIsValid:(id)arg1;
- (id)indexPathsForSelectedRows;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleBoundsIncludingRowsOnly;
- (id)indexPathsForVisibleRows;
- (void)_autoscrollForLongPress:(id)arg1;
- (void)_beginDisplayingCellContentStringCallout;
- (BOOL)_displayingCellContentStringCallout;
- (BOOL)longPressGestureWithinAutoscrollZone;
- (void)_performCellContentStringCalloutCleanupHidingMenu:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForHeaderInSection:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForFooterInSection:(int)arg1;
- (void)_installSwipeToDeleteGobbler;
- (id)_titleForSwipeAccessoryButtonForRowAtIndexPath:(id)arg1;
- (int)separatorStyle;
- (int)_sectionForFooterView:(id)arg1;
- (int)_sectionForHeaderView:(id)arg1;
- (id)_cellAfterIndexPath:(id)arg1;
- (id)_targetIndexPathAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_autoscrollForReordering:(id)arg1;
- (BOOL)_isLastRowForIndexPath:(id)arg1;
- (id)_titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1;
- (BOOL)_headerAndFooterViewsFloat;
- (id)_createPreparedCellForGlobalRow:(int)arg1 withIndexPath:(id)arg2;
- (int)_accessoryTypeForCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)_sectionHeaderView:(BOOL)arg1 withFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 forSection:(int)arg3 floating:(BOOL)arg4 reuseViewIfPossible:(BOOL)arg5;
- (id)_newSectionViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSection:(int)arg2 isHeader:(BOOL)arg3;
- (id)_popReusableHeaderView:(BOOL)arg1;
- (id)dequeueReusableHeaderFooterViewWithIdentifier:(id)arg1;
- (void)_reorderPositionChangedForCell:(id)arg1 withScrollFactorPercentage:(float)arg2;
- (void)_finishedAnimatingCellReorder:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_setTopSeparatorCell:(id)arg1;
- (void)_endReorderingForCell:(id)arg1 wasCancelled:(BOOL)arg2 animated:(BOOL)arg3;
- (id)_reorderingIndexPath;
- (void)_tableCellAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)adjustIndexPaths:(id)arg1 forMoveOfIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)_endCellReorderAnimation:(BOOL)arg1;
- (void)_reorderPositionChangedForCell:(id)arg1;
- (BOOL)_delegateWantsFooterTitleForSection:(int)arg1;
- (BOOL)_estimatesSectionFooterHeights;
- (BOOL)_delegateWantsHeaderTitleForSection:(int)arg1;
- (BOOL)_estimatesSectionHeaderHeights;
- (int)highlightedGlobalRow;
- (int)maximumGlobalRowIndex;
- (id)sectionBorderColor;
- (BOOL)_drawsTopShadowInGroupedSections;
- (void)_accessoryButtonAction:(id)arg1;
- (void)_registerThing:(id)arg1 asNib:(BOOL)arg2 forViewType:(int)arg3 withReuseIdentifer:(id)arg4;
- (void)_updateTableViewGestureRecognizersForEditing;
- (void)_rectChangedWithNewSize:(struct CGSize { float x1; float x2; })arg1 oldSize:(struct CGSize { float x1; float x2; })arg2;
- (void)_scrollFirstResponderCellToVisible:(BOOL)arg1;
- (id)tableFooterView;
- (id)tableHeaderView;
- (id)indexPathForCell:(id)arg1;
- (id)_tableViewCellForContentView:(id)arg1;
- (void)_userSelectRowAtPendingSelectionIndexPath:(id)arg1;
- (void)_selectAllSelectedRows;
- (void)_updateTableHeaderViewForAutoHideWithVelocity:(float)arg1 targetOffset:(struct CGPoint { float x1; float x2; }*)arg2;
- (BOOL)allowsMultipleSelectionDuringEditing;
- (BOOL)_canSelectRowContainingHitView:(id)arg1;
- (void)setCurrentTouch:(id)arg1;
- (id)currentTouch;
- (void)_resetDragSwipeAndTouchSelectFlags;
- (BOOL)_wantsSwipes;
- (void)_handleSwipeDeleteGobbler:(id)arg1;
- (void)_endSwipeToDeleteRowDidDelete:(BOOL)arg1;
- (BOOL)highlightRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(int)arg3;
- (BOOL)_swipeCellAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_hasSwipeToDeleteRow;
- (id)_indexPathForSwipeRowAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_configureCellForDisplay:(id)arg1 forIndexPath:(id)arg2;
- (id)_dequeueReusableViewOfType:(int)arg1 withIdentifier:(id)arg2;
- (id)_classMapForType:(int)arg1;
- (id)_nibMapForType:(int)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)_setBackgroundColor:(id)arg1 animated:(BOOL)arg2;
- (void)_backgroundColorAnimationDidStop;
- (id)separatorBottomShadowColor;
- (id)separatorTopShadowColor;
- (void)_selectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(int)arg3 notifyDelegate:(BOOL)arg4;
- (void)_deselectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)unhighlightRowAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)_deselectAllNonMultiSelectRowsAnimated:(BOOL)arg1 notifyDelegate:(BOOL)arg2;
- (void)_reloadDataIfNeeded;
- (void)deselectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)selectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(int)arg3;
- (BOOL)allowsSelectionDuringEditing;
- (BOOL)allowsSelection;
- (BOOL)_shouldHighlightInsteadOfSelectRowAtIndexPath:(id)arg1;
- (BOOL)_isRowMultiSelect:(id)arg1;
- (void)setAllowsMultipleSelectionDuringEditing:(BOOL)arg1;
- (void)_updateRowsAtIndexPaths:(id)arg1 updateAction:(int)arg2 withRowAnimation:(int)arg3;
- (void)_updateSections:(id)arg1 updateAction:(int)arg2 withRowAnimation:(int)arg3 headerFooterOnly:(BOOL)arg4;
- (void)_performBatchUpdates:(id)arg1 withContext:(id)arg2 completion:(id)arg3;
- (void)endUpdatesWithContext:(id)arg1;
- (void)_endCellAnimationsWithContext:(id)arg1;
- (void)_setupCellAnimations;
- (id)indexPathForSelectedRow;
- (struct CGPoint { float x1; float x2; })_contentOffsetForScrollingToRowAtIndexPath:(id)arg1 atScrollPosition:(int)arg2;
- (id)_visibleFooterViewForSection:(int)arg1;
- (id)_visibleHeaderViewForSection:(int)arg1;
- (void)_updateVisibleCellsImmediatelyIfNecessary;
- (id)indexPathsForRowsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSection:(int)arg1;
- (void)noteNumberOfRowsChanged;
- (void)_cancelCellReorder:(BOOL)arg1;
- (void)setTableHeaderViewShouldAutoHide:(BOOL)arg1;
- (BOOL)_pinsTableHeaderView;
- (void)_setRowCount:(unsigned int)arg1;
- (void)_stopLongPressAutoscrollTimer;
- (void)_setRefreshControl:(id)arg1;
- (void)_configureBackgroundView;
- (id)_defaultSeparatorColor;
- (void)setSectionFooterHeight:(float)arg1;
- (void)setAllowsSelection:(BOOL)arg1;
- (id)_defaultBackgroundView;
- (void)_setupTableViewCommon;
- (void)_languageChanged;
- (void)setSectionHeaderHeight:(float)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setSectionIndexTrackingBackgroundColor:(id)arg1;
- (id)sectionIndexTrackingBackgroundColor;
- (void)setSectionIndexColor:(id)arg1;
- (id)sectionIndexColor;
- (void)_scrollToTopHidingTableHeader:(BOOL)arg1;
- (void)_endDisplayingCellContentStringCallout;
- (void)_sendWillBeginEditingForIndexPath:(id)arg1;
- (BOOL)_canEditRowAtIndexPath:(id)arg1;
- (id)_visibleCells;
- (void)_sendDidEndEditingForIndexPath:(id)arg1;
- (void)_cleanupStateFromDeleteConfirmation;
- (id)deleteConfirmationIndexPath;
- (void)scrollToRowAtIndexPath:(id)arg1 atScrollPosition:(int)arg2 animated:(BOOL)arg3;
- (id)indexPathForRowAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_endAnimatingCells;
- (void)_updateBackgroundView;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setupCell:(id)arg1 forEditing:(BOOL)arg2 canEdit:(BOOL)arg3 editingStyle:(int)arg4 shouldIndentWhileEditing:(BOOL)arg5 showsReorderControl:(BOOL)arg6 accessoryType:(int)arg7 animated:(BOOL)arg8;
- (BOOL)_canMoveRowAtIndexPath:(id)arg1;
- (BOOL)_shouldIndentWhileEditingForRowAtIndexPath:(id)arg1;
- (int)_editingStyleForRowAtIndexPath:(id)arg1;
- (void)_setupCell:(id)arg1 forEditing:(BOOL)arg2 atIndexPath:(id)arg3 animated:(BOOL)arg4;
- (void)_updateAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_beginAnimatingCells;
- (void)_updateCellContentStringCallout:(id)arg1;
- (int)globalRowForRowAtIndexPath:(id)arg1;
- (void)_reuseTableViewSubview:(id)arg1 viewType:(int)arg2;
- (id)_cellReuseMapForType:(int)arg1;
- (void)_setupSectionView:(id)arg1 isHeader:(BOOL)arg2 forSection:(int)arg3;
- (float)_spacingForExtraSeparators;
- (BOOL)_shouldDisplayExtraSeparatorsAtOffset:(float*)arg1;
- (void)_setNeedsVisibleCellsUpdate:(BOOL)arg1 withFrames:(BOOL)arg2;
- (void)setSeparatorStyle:(int)arg1;
- (void)_updateIndex;
- (void)_updateVisibleHeadersAndFootersNow:(BOOL)arg1;
- (void)_updateTableHeadersAndFootersNow:(BOOL)arg1;
- (BOOL)_shouldDisplayTopSeparator;
- (id)_createPreparedCellForGlobalRow:(int)arg1;
- (void)_reuseTableViewCell:(id)arg1 withIndexPath:(id)arg2;
- (id)_reorderingSupport;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_visibleGlobalRowsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_updatePinnedTableHeader;
- (id)_sectionFooterViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSection:(int)arg2 floating:(BOOL)arg3 reuseViewIfPossible:(BOOL)arg4;
- (BOOL)allowsFooterViewsToFloat;
- (id)_sectionHeaderViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSection:(int)arg2 floating:(BOOL)arg3 reuseViewIfPossible:(BOOL)arg4;
- (BOOL)allowsHeaderViewsToFloat;
- (BOOL)_delegateWantsFooterForSection:(int)arg1;
- (BOOL)_delegateWantsHeaderForSection:(int)arg1;
- (void)_reuseHeaderFooterView:(id)arg1 isHeader:(BOOL)arg2 forSection:(int)arg3;
- (id)_tableFooterView:(BOOL)arg1;
- (id)_tableHeaderView:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleBounds;
- (BOOL)_usesNewHeaderFooterBehavior;
- (BOOL)_shouldUnionVisibleBounds;
- (void)_resumeReloads;
- (void)_adjustExtraSeparators;
- (void)_numberOfRowsDidChange;
- (void)_updateWithItems:(id)arg1 updateSupport:(id)arg2;
- (id)_arrayForUpdateAction:(int)arg1;
- (void)_suspendReloads;
- (void)_updateVisibleCellsNow:(BOOL)arg1;
- (void)_updateVisibleViewsRightMarginForShowingIndex:(BOOL)arg1;
- (void)_updateIndexTitles:(id)arg1;
- (void)_addIndexToAppropriateContainer;
- (void)_sectionIndexChanged:(id)arg1;
- (void)_updateIndexFrameSuppressingChangeNotification:(BOOL)arg1;
- (void)_updateBackgroundViewFrame;
- (void)_updateIndexFrame;
- (void)_adjustCountLabel;
- (void)_adjustTableHeaderAndFooterViews;
- (void)_updateShowScrollIndicatorsFlag;
- (float)heightForTableHeaderViewHiding;
- (float)heightForAutohidingTableHeaderView;
- (void)_ensureRowDataIsLoaded;
- (void)setSectionBorderColor:(id)arg1;
- (id)separatorColor;
- (void)_updateContentSize;
- (void)_adjustReusableTableCells;
- (void)_scheduleAdjustExtraSeparators;
- (id)indexPathForRowAtGlobalRow:(int)arg1;
- (void)_updateRowData;
- (void)_installTableViewGestureRecognizers;
- (void)_removeTableViewGestureRecognizers;
- (id)_swipeGestureRecognizer;
- (void)longPress:(id)arg1;
- (void)_handleSwipeDelete:(id)arg1;
- (int)numberOfSections;
- (unsigned int)_countStringRowCount;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (id)_scrollTestExtraResults;
- (void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(BOOL)arg2 lastAdjustment:(float*)arg3;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (void)_addContentSubview:(id)arg1 atBack:(BOOL)arg2;
- (float)_shadowHeightOffset;
- (float)_offsetForRubberBandOffset:(float)arg1 maxOffset:(float)arg2 minOffset:(float)arg3 range:(float)arg4;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_contentInset;
- (struct CGSize { float x1; float x2; })_contentSize;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;
- (void)flashScrollIndicators;
- (void)setShowsHorizontalScrollIndicator:(BOOL)arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)_beginTrackingWithEvent:(id)arg1;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1;
- (void)_scrollViewWillEndDraggingWithVelocity:(struct CGPoint { float x1; float x2; })arg1 targetContentOffset:(struct CGPoint { float x1; float x2; }*)arg2;
- (float)_rubberBandOffsetForOffset:(float)arg1 maxOffset:(float)arg2 minOffset:(float)arg3 range:(float)arg4 outside:(BOOL*)arg5;
- (void)_setUsesStaticScrollBar:(BOOL)arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (id)_scriptingInfo;
- (void)_setIsAncestorOfFirstResponder:(BOOL)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)resizeSubviewsWithOldSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_shouldResignFirstResponderWithInteractionDisabled;
- (BOOL)cancelTouchTracking;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint { float x1; float x2; })arg1 resultHandler:(id)arg2;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)allowsMultipleSelection;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_visibleGlobalRows;
- (void)endUpdates;
- (void)beginUpdates;
- (float)rowHeight;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (id)cellForRowAtIndexPath:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForRowAtIndexPath:(id)arg1;
- (int)numberOfRowsInSection:(int)arg1;
- (void)layoutSubviews;
- (void)setShowsVerticalScrollIndicator:(BOOL)arg1;
- (void)setRowHeight:(float)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (void)reloadData;
- (void)didMoveToWindow;
- (id)visibleCells;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_handleDeviceOrientationChange:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityElementsHidden;
- (BOOL)shouldGroupAccessibilityChildren;
- (id)description;
- (int)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)_setAccessibilitySearchTableViewVisible;
- (void)_setAccessibilitySearchTableViewHidden;
- (void)_accessibilityClearChildren;
- (BOOL)_accessibilitySearchControllerDimmingViewVisible;
- (BOOL)_accessibilitySearchTableViewVisible;
- (id)_accessibilitySearchResultsTableView;
- (id)_accessibilityFooterElement;
- (BOOL)_axSearchForSearchResultsView:(id)arg1;
- (void)setReusableCellsEnabled:(BOOL)arg1;
- (id)_axAttemptStoryboard:(id)arg1 viewType:(int)arg2;
- (id)_axAttemptCreationOfViewType:(int)arg1 identifier:(id)arg2;
- (void)_accessibilityInitializeInternalData;
- (void)_axPostLayoutChange;
- (id)accessibilityTableViewSectionElementAtSection:(int)arg1 isHeader:(BOOL)arg2;
- (id)_accessibilityFuzzyHitTest:(struct CGPoint { float x1; float x2; }*)arg1 withEvent:(id)arg2;
- (id)_accessibilityInternalData;
- (id)_accessibilityTableViewCellElementForIndexPath:(id)arg1;
- (void)accessibilityFindMockParentForTableViewCell:(id)arg1;
- (id)accessibilityCellForRowAtIndexPath:(id)arg1;
- (void)_setAccessibilitySearchControllerDimmingViewVisible;
- (void)_setAccessibilitySearchControllerDimmingViewHidden;
- (id)accessibilityTableViewCellAccessibilityElementForTableViewCell:(id)arg1;
- (id)_accessibilityUIScrollViewScrollStatus;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilitySupplementaryHeaderViews;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)_accessibilityScrollStatus;
- (BOOL)accessibilityScrollLeftPageSupported;
- (BOOL)accessibilityScrollRightPageSupported;
- (id)accessibilityTableViewCellElementAtGlobalRow:(int)arg1;
- (id)accessibilityElementForRow:(int)arg1 andColumn:(int)arg2;
- (id)_accessibilitySubviews;
- (id)_accessibilityUserTestingVisibleCells;
- (id)_accessibilityUserTestingVisibleSections;
- (BOOL)_accessibilityIsScannerElement;
- (id)_accessibilityHeaderElement;
- (id)_accessibilityScannerGroupElements;
- (BOOL)_accessibilityIsScannerGroup;
- (void)ab_scrollToRowAtIndexPathRespectingCaretOfActiveTextView:(id)arg1 atScrollPosition:(int)arg2 animated:(BOOL)arg3;
- (void)ab_internalScrollToRowAtIndexPathRespectingCaretOfActiveTextView:(id)arg1 atScrollPosition:(int)arg2 animated:(BOOL)arg3;
- (void)ab_delayedScrollRespectingCaretOfActiveTextViewToCell:(id)arg1 atIndexPath:(id)arg2 atScrollPosition:(int)arg3 animated:(BOOL)arg4;
- (BOOL)_axIsDynamicTypeTable;

@end
