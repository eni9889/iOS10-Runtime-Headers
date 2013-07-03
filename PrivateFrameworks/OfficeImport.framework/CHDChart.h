/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDSheet, CHDDefaultTextProperties, NSMutableArray, CHDTitle, EDWorkbook, CHDPlotArea, CHDLegend, OADGraphicProperties, CHDView3D;

@interface CHDChart : OADGraphic <OADDrawableContainer> {
    EDSheet *mSheet;
    int mStyleId;
    boolmAutoTitleDeleted;
    boolmPlotVisibleCellsOnly;
    boolmMSGraph;
    boolmDirectionChanged;
    int mDisplayBlankCellsAs;
    CHDPlotArea *mPlotArea;
    CHDView3D *mView3D;
    CHDTitle *mTitle;
    CHDLegend *mLegend;
    EDWorkbook *mExternalData;
    OADGraphicProperties *mChartAreaGraphicProperties;
    OADGraphicProperties *mBackWallGraphicProperties;
    OADGraphicProperties *mSideWallGraphicProperties;
    OADGraphicProperties *mFloorGraphicProperties;
    CHDDefaultTextProperties *mDefaultTextProperties;
    int mChartDirection;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mLogicalBounds;
    NSMutableArray *mDrawables;
}

+ (id)binaryEffects:(BOOL)arg1;

- (void)setDirectionChanged:(bool)arg1;
- (bool)isDirectionChanged;
- (bool)isMSGraph;
- (bool)isPie;
- (bool)is3D;
- (id)defaultFontWithResources:(id)arg1;
- (id)defaultContentFormat;
- (id)defaultSeriesTitleFont;
- (id)defaultDataLabelFont;
- (void)setDefaultTextProperties:(id)arg1;
- (id)floorGraphicProperties;
- (id)sideWallGraphicProperties;
- (id)backWallGraphicProperties;
- (id)view3D;
- (int)displayBlankAs;
- (bool)isPlotVisibleCellsOnly;
- (bool)isAutoTitleDeleted;
- (int)styleId;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (unsigned int)categoryCount;
- (unsigned int)seriesCount;
- (id)defaultTextFont;
- (id)defaultThemeFont;
- (void)setParentTextListStyle:(id)arg1;
- (id)processors;
- (int)defaultLabelPosition;
- (unsigned int)defaultFontIndex;
- (void)setSheet:(id)arg1;
- (void)setView3D:(id)arg1;
- (void)setLegend:(id)arg1;
- (id)defaultTextProperties;
- (void)setAutoTitleDeleted:(bool)arg1;
- (void)setPlotArea:(id)arg1;
- (void)setDisplayBlankAs:(int)arg1;
- (void)setPlotVisibleCellsOnly:(bool)arg1;
- (void)setChartAreaGraphicProperties:(id)arg1;
- (void)setMSGraph:(bool)arg1;
- (void)setLogicalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setStyleId:(int)arg1;
- (void)setFloorGraphicProperties:(id)arg1;
- (void)setBackWallGraphicProperties:(id)arg1;
- (void)setSideWallGraphicProperties:(id)arg1;
- (id)legend;
- (id)chartAreaGraphicProperties;
- (id)plotArea;
- (id)mainType;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })logicalBounds;
- (id)styleMatrix;
- (id)workbook;
- (id)childAtIndex:(unsigned int)arg1;
- (void)addChild:(id)arg1;
- (bool)isBinary;
- (void)setExternalData:(id)arg1;
- (id)externalData;
- (void)addChildren:(id)arg1;
- (unsigned int)childCount;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)sheet;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (int)direction;
- (void)setDirection:(int)arg1;
- (id)children;

@end
