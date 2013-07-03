/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class ECMappingContext, EDWorksheet, EDWorkbook;

@interface EDFormulaHelper : NSObject <EFHelper> {
    EDWorkbook *mWorkbook;
    EDWorksheet *mWorksheet;
    int mRowNumber;
    int mColumnNumber;
    ECMappingContext *mMappingContext;
}


- (id)initWithWorkbook:(id)arg1 worksheet:(id)arg2 rowNumber:(int)arg3 columnNumber:(int)arg4;
- (unsigned int)resolveFile:(id)arg1;
- (unsigned int)createIndexWithType:(int)arg1 firstSheetIndex:(unsigned int)arg2 lastSheetIndex:(unsigned int)arg3;
- (unsigned int)resolveTableToSheetId:(id)arg1;
- (id)resolveTable:(id)arg1;
- (BOOL)isCurrentSheet:(id)arg1;
- (unsigned int)resolveSheet:(id)arg1;
- (int)rowNumber;
- (unsigned int)resolveTableColumn:(id)arg1 columnName:(id)arg2;
- (unsigned int)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2;
- (unsigned int)resolveName:(id)arg1;
- (id)workbook;
- (int)resolveFunctionName:(id)arg1;
- (void)dealloc;
- (int)columnNumber;

@end
