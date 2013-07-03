/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVVideoComposition, <AVVideoCompositing>, NSDictionary, AVAssetReaderVideoCompositionOutputInternal;

@interface AVAssetReaderVideoCompositionOutput : AVAssetReaderOutput  {
    AVAssetReaderVideoCompositionOutputInternal *_videoCompositionOutputInternal;
}

@property(readonly) NSArray * videoTracks;
@property(readonly) NSDictionary * videoSettings;
@property(copy) AVVideoComposition * videoComposition;
@property(readonly) <AVVideoCompositing> * customVideoCompositor;

+ (id)assetReaderVideoCompositionOutputWithVideoTracks:(id)arg1 videoSettings:(id)arg2;

- (void)_setVideoComposition:(id)arg1;
- (id)initWithVideoTracks:(id)arg1 videoSettings:(id)arg2;
- (id)videoTracks;
- (BOOL)_enableTrackExtractionReturningError:(id*)arg1;
- (BOOL)alwaysCopiesSampleData;
- (BOOL)_prepareForReadingReturningError:(id*)arg1;
- (id)customVideoCompositor;
- (void)setVideoComposition:(id)arg1;
- (void)_setVideoComposition:(id)arg1 customVideoCompositorSession:(id)arg2;
- (id)videoComposition;
- (id)_asset;
- (id)videoSettings;
- (id)mediaType;
- (id)init;
- (void)finalize;
- (void)dealloc;
- (id)description;

@end
