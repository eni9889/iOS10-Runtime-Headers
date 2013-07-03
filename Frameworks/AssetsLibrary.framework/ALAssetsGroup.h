/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class ALAssetsGroupPrivate;

@interface ALAssetsGroup : NSObject  {
    id _internal;
}

@property(getter=isEditable,readonly) BOOL editable;
@property(retain) ALAssetsGroupPrivate * internal;


- (BOOL)addAsset:(id)arg1;
- (void)enumerateAssetsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (void)enumerateAssetsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (void)enumerateAssetsUsingBlock:(id)arg1;
- (id)initWithPhotoAlbum:(struct NSObject { Class x1; }*)arg1 library:(id)arg2 type:(unsigned int)arg3;
- (void)_enumerateAssetsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (void)setAssetsFilter:(id)arg1;
- (int)numberOfAssets;
- (id)_typeAsString;
- (struct CGImage { }*)posterImage;
- (void)setInternal:(id)arg1;
- (id)internal;
- (BOOL)isEditable;
- (BOOL)isValid;
- (void)dealloc;
- (id)description;
- (id)_uuid;
- (id)valueForProperty:(id)arg1;

@end
