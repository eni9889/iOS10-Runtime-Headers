/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDChartType, CHDAxis, CHDSeries, CMState, CHDChart, EDResources;

@interface EMChartMapper : CMMapper  {
    CHDChart *mChart;
    CMState *mState;
    EDResources *mResources;
    CHDChartType *mMainType;
    CHDSeries *mMainSeries;
    CHDAxis *mBaseAxis;
    CHDAxis *mPrimaryAxis;
    CHDAxis *mSecondaryAxis;
    BOOL mIsHorizontal;
    BOOL mIsStacked;
    BOOL mIsPercentStacked;
    unsigned int mPieIndex;
    struct { 
        BOOL primaryCategoryHasDates; 
        BOOL secondaryCategoryHasDates; 
        BOOL primaryAxisHasDates; 
        BOOL secondaryAxisHasDates; 
    } mPlotInfos;
    BOOL mHasDateCategory;
    BOOL mHasPrimaryDateAxis;
    BOOL mHasSecondaryDateAxis;
}

+ (struct CGColor { }*)newColorWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;

- (id)copyPdfWithState:(id)arg1 withSize:(struct CGSize { float x1; float x2; })arg2;
- (id)initWithChart:(id)arg1 parent:(id)arg2;
- (void)_addStandardSeries:(id)arg1 toDescription:(id)arg2 withState:(id)arg3;
- (void)_addGraphicProperties:(id)arg1 toDescription:(id)arg2 withState:(id)arg3;
- (id)_baseDateForState:(id)arg1;
- (void)addSeries:(id)arg1 toDescription:(id)arg2 withState:(id)arg3;
- (void)_addUnitAxis:(id)arg1 series:(id)arg2 state:(id)arg3 toDescription:(id)arg4;
- (void)_addCategoryAxis:(id)arg1 series:(id)arg2 state:(id)arg3 toDescription:(id)arg4;
- (void)addLegendToDescription:(id)arg1 chartSize:(struct CGSize { float x1; float x2; })arg2 withState:(id)arg3;
- (void)addBackgroundToDescription:(id)arg1 withState:(id)arg2;
- (void)addTitleToDescription:(id)arg1 withState:(id)arg2;
- (id).cxx_construct;

@end
