/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDSlide;

@interface PBSlideObjAndMasterPair : NSObject  {
    PDSlide *mSlide;
    int mMasterId;
}

+ (id)createPair:(id)arg1 masterId:(int)arg2;

- (int)masterId;
- (id)slide;
- (void)setSlide:(id)arg1 masterId:(int)arg2;
- (void)dealloc;

@end
