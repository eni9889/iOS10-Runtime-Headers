/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableArray;

@interface VKPIconPack : PBCodable  {
    NSMutableArray *_atlas;
    NSMutableArray *_icons;
    unsigned int _identifier;
}

@property unsigned int identifier;
@property(retain) NSMutableArray * atlas;
@property(retain) NSMutableArray * icons;


- (id)atlas;
- (id)iconsAtIndex:(unsigned int)arg1;
- (void)clearAtlas;
- (unsigned int)atlasCount;
- (void)addIcons:(id)arg1;
- (void)addAtlas:(id)arg1;
- (void)setAtlas:(id)arg1;
- (id)atlasAtIndex:(unsigned int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)clearIcons;
- (unsigned int)iconsCount;
- (void)copyTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (void)setIdentifier:(unsigned int)arg1;
- (unsigned int)identifier;
- (id)icons;
- (void)setIcons:(id)arg1;
- (id)dictionaryRepresentation;

@end
