/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADDrawableProperties, <OADClient>, OADDrawable<OADDrawableContainer>;

@interface OADDrawable : NSObject  {
    BOOL mHidden;
    unsigned long mId;
    OADDrawableProperties *mDrawableProperties;
    <OADClient> *mClientData;
    OADDrawable<OADDrawableContainer> *mParent;
}


- (id)createWordClientDataWithTextType:(int)arg1;
- (id)createOrientedBoundsWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)ensureClientDataOfClass:(Class)arg1;
- (void)identify;
- (void)removeUnnecessaryOverrides;
- (void)setId:(unsigned long)arg1;
- (void)setClientData:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (id)initWithPropertiesClass:(Class)arg1;
- (unsigned long)id;
- (id)clientData;
- (id)drawableProperties;
- (void)setParent:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setDrawableProperties:(id)arg1;
- (BOOL)hidden;
- (void)dealloc;
- (id)parent;

@end
