/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, WDTableProperties;

@interface WDTable : WDBlock  {
    WDTableProperties *mProperties;
    NSMutableArray *mRows;
}


- (void)clearRows;
- (id)newCellIterator;
- (id)cellIterator;
- (id)newRowIterator;
- (id)rowIterator;
- (void)clearProperties;
- (id)newRunIterator;
- (id)runIterator;
- (id)rowAt:(unsigned int)arg1;
- (int)blockType;
- (unsigned int)rowCount;
- (id)initWithText:(id)arg1;
- (void)dealloc;
- (id)addRow;
- (int)nestingLevel;
- (id)properties;

@end
