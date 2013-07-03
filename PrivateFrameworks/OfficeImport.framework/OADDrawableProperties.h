/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADOrientedBounds, OADHyperlink;

@interface OADDrawableProperties : OADProperties  {
    OADOrientedBounds *mOrientedBounds;
    OADHyperlink *mClickHyperlink;
    OADHyperlink *mHoverHyperlink;
    unsigned int mHasAspectRatioLocked : 1;
    unsigned int mAspectRatioLocked : 1;
    unsigned int mHasWrdInline : 1;
    unsigned int mWrdInline : 1;
}


- (BOOL)hasHoverHyperlink;
- (BOOL)hasClickHyperlink;
- (void)removeUnnecessaryOverrides;
- (void)setHoverHyperlink:(id)arg1;
- (id)hoverHyperlink;
- (id)initWithDefaults;
- (BOOL)isWrdInline;
- (BOOL)hasWrdInline;
- (BOOL)isAspectRatioLocked;
- (BOOL)hasAspectRatioLocked;
- (void)setWrdInline:(BOOL)arg1;
- (void)setAspectRatioLocked:(BOOL)arg1;
- (void)setClickHyperlink:(id)arg1;
- (BOOL)hasOrientedBounds;
- (void)setOrientedBounds:(id)arg1;
- (id)orientedBounds;
- (id)clickHyperlink;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;

@end
