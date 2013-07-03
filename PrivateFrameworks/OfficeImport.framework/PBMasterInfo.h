/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDSlideMaster, NSMutableArray, NSDictionary;

@interface PBMasterInfo : NSObject  {
    PDSlideMaster *mSlideMaster;
    NSMutableArray *mTgtSlideLayoutArray;
    unsigned int mMainPbRef;
    unsigned int mTitlePbRef;
    NSDictionary *mLayoutMap;
    struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo {} *x1; struct PBReaderMasterStyleInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; } *mSrcTextStyling;
}


- (struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo {} *x1; struct PBReaderMasterStyleInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)sourceTextStyling;
- (id)slideLayoutForSlideHolder:(id)arg1;
- (void)cacheSlideLayouts;
- (id)allTargetLayoutTypes;
- (void)cacheTargetLayoutType:(int)arg1;
- (unsigned int)titlePbRef;
- (void)setTitlePbRef:(unsigned int)arg1;
- (unsigned int)mainPbRef;
- (void)setMainPbRef:(unsigned int)arg1;
- (void)setSlideMaster:(id)arg1;
- (id)slideMaster;
- (id)init;
- (void)dealloc;

@end
