/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMetadataItem, NSArray, NSString, NSData, NSDictionary;

@interface AVAssetInspector : AVFigObjectInspector <NSCopying> {
}

@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property(readonly) float preferredRate;
@property(readonly) float preferredVolume;
@property(readonly) float preferredSoundCheckVolumeNormalization;
@property(readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } preferredTransform;
@property(readonly) struct CGSize { float x1; float x2; } naturalSize;
@property(readonly) int naturalTimeScale;
@property(readonly) BOOL providesPreciseDurationAndTiming;
@property(readonly) long trackCount;
@property(readonly) NSArray * trackIDs;
@property(readonly) NSArray * alternateTrackGroups;
@property(readonly) NSDictionary * trackReferences;
@property(readonly) NSArray * mediaSelectionGroups;
@property(readonly) AVMetadataItem * creationDate;
@property(readonly) NSString * lyrics;
@property(readonly) NSArray * commonMetadata;
@property(readonly) NSArray * availableMetadataFormats;
@property(getter=isExportable,readonly) BOOL exportable;
@property(getter=isReadable,readonly) BOOL readable;
@property(getter=isComposable,readonly) BOOL composable;
@property(readonly) NSData * SHA1Digest;


- (id)SHA1Digest;
- (long)trackCount;
- (BOOL)isComposable;
- (BOOL)isReadable;
- (BOOL)isExportable;
- (BOOL)hasProtectedContent;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)lyrics;
- (id)trackReferences;
- (id)mediaSelectionGroups;
- (id)trackIDs;
- (id)alternateTrackGroups;
- (BOOL)providesPreciseDurationAndTiming;
- (int)naturalTimeScale;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (float)preferredSoundCheckVolumeNormalization;
- (float)preferredVolume;
- (float)preferredRate;
- (id)creationDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { float x1; float x2; })naturalSize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;

@end
