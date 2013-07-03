/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADCachedDrawableStyle : NSObject  {
    int mFillCategory;
    unsigned int mFillIndex;
    unsigned int mStrokeIndex;
    unsigned int mShadowIndex;
    unsigned char mReflectionOpacity;
    unsigned int mTextStyleIndex;
}

@property(readonly) int fillCategory;
@property(readonly) unsigned int fillIndex;
@property(readonly) unsigned int strokeIndex;
@property(readonly) unsigned int shadowIndex;
@property(readonly) unsigned char reflectionOpacity;
@property(readonly) unsigned int textStyleIndex;


- (unsigned int)textStyleIndex;
- (unsigned char)reflectionOpacity;
- (unsigned int)shadowIndex;
- (unsigned int)strokeIndex;
- (int)fillCategory;
- (id)initWithFillCategory:(int)arg1 mFillIndex:(unsigned int)arg2 strokeIndex:(unsigned int)arg3 shadowIndex:(unsigned int)arg4 reflectionOpacity:(unsigned char)arg5 textStyleIndex:(unsigned int)arg6;
- (unsigned int)fillIndex;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;

@end
