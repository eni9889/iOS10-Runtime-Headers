/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class ECColumnWidthConvertor, EDWorksheet, CMStyle;

@interface EMWorksheetMapper : EMSheetMapper  {
    EDWorksheet *edWorksheet;
    CMStyle *mStyle;
    int mMaxPopulatedColumn;
    int mMaxPopulatedRow;
    double *mColumnGrid;
    double *mRowGrid;
    int mWidth;
    int mHeight;
    ECColumnWidthConvertor *mColumnWidthConvertor;
}


- (void)mapTableStyleAt:(id)arg1 withState:(id)arg2;
- (void)mapGridAt:(id)arg1;
- (void)mapColumnInfosAt:(id)arg1 withState:(id)arg2;
- (struct CGSize { float x1; float x2; })preprocessDrawableSizeWithState:(id)arg1;
- (void)mapDrawablesAt:(id)arg1 withState:(id)arg2;
- (void)mapTableAt:(id)arg1 withState:(id)arg2;
- (void)_initWithState:(id)arg1;
- (double)xlColumnWidthToPoints:(double)arg1;
- (void)setRowGrid;
- (void)countRowsAndColumnsWithState:(id)arg1;
- (id)initWithEDWorksheet:(id)arg1 parent:(id)arg2;
- (struct CGSize { float x1; float x2; })preprocessSizeWithState:(id)arg1;
- (double)defaultColumnWidth;
- (int)maxRowNumber;
- (double*)columnGrid;
- (double*)rowGrid;
- (id)columnWidthConvertor;
- (int)preprocessHeightWithState:(id)arg1;
- (int)preprocessWidthWithState:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (double)defaultRowHeight;
- (int)height;
- (int)width;
- (BOOL)isVisible;
- (void)dealloc;
- (int)columnCount;

@end
