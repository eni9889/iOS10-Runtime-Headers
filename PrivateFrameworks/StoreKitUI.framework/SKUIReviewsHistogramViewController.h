/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIReviewList, SKUIReviewsHistogramView, NSString, UIControl, SKUIClientContext, NSArray;

@interface SKUIReviewsHistogramViewController : UIViewController  {
    SKUIClientContext *_clientContext;
    SKUIReviewsHistogramView *_histogramView;
    SKUIReviewList *_reviewList;
}

@property(retain) SKUIClientContext * clientContext;
@property(retain) SKUIReviewList * reviewList;
@property(copy) NSString * versionString;
@property(readonly) UIControl * segmentedControl;
@property(copy) NSArray * segmentedControlTitles;
@property int selectedSegmentIndex;
@property(readonly) UIControl * starRatingControl;
@property int personalStarRating;
@property(readonly) UIControl * appSupportButton;
@property(readonly) UIControl * writeAReviewButton;


- (void)_reloadHistogram;
- (id)_histogramView;
- (id)segmentedControlTitles;
- (void)setPersonalStarRating:(int)arg1;
- (void)setSegmentedControlTitles:(id)arg1;
- (void)setReviewList:(id)arg1;
- (int)personalStarRating;
- (id)writeAReviewButton;
- (id)starRatingControl;
- (id)appSupportButton;
- (id)reviewList;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (void)setVersionString:(id)arg1;
- (id)versionString;
- (void).cxx_destruct;
- (id)segmentedControl;
- (int)selectedSegmentIndex;
- (void)setSelectedSegmentIndex:(int)arg1;
- (void)loadView;

@end
