/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableArray;

@interface VKPShieldIndex : PBCodable  {
    NSMutableArray *_entries;
}

@property(retain) NSMutableArray * entries;


- (id)entriesAtIndex:(unsigned int)arg1;
- (void)clearEntries;
- (unsigned int)entriesCount;
- (void)addEntries:(id)arg1;
- (void)setEntries:(id)arg1;
- (id)artworkIdentifierForShieldType:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)entries;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end
