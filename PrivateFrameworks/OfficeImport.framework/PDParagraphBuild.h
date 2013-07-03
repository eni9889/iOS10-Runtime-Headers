/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface PDParagraphBuild : PDBuild  {
    NSMutableArray *mTimeNodeDataList;
    double mAutoAdvanceTime;
    BOOL mIsReversedParagraphOrder;
    int mBuildLevel;
    int mType;
}


- (int)buildLevel;
- (BOOL)isReversedParagraphOrder;
- (double)autoAdvanceTime;
- (id)timeNodeDataList;
- (id)addTimeNodeData;
- (id)timeNodeDataAtIndex:(unsigned int)arg1;
- (unsigned int)timeNodeDataListCount;
- (void)setBuildLevel:(int)arg1;
- (void)setIsReversedParagraphOrder:(BOOL)arg1;
- (void)setAutoAdvanceTime:(double)arg1;
- (void)setType:(int)arg1;
- (id)init;
- (void)dealloc;
- (int)type;

@end
