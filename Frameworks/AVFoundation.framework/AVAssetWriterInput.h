/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInputHelper, AVAssetWriterInputInternal, AVOutputSettings, AVWeakReference, NSDictionary, NSString, NSArray;

@interface AVAssetWriterInput : NSObject  {
    AVAssetWriterInputInternal *_internal;
}

@property(readonly) NSString * mediaType;
@property(readonly) NSDictionary * outputSettings;
@property(readonly) struct opaqueCMFormatDescription { }* sourceFormatHint;
@property(copy) NSArray * metadata;
@property(getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData;
@property BOOL expectsMediaDataInRealTime;
@property(getter=_outputSettingsObject,readonly) AVOutputSettings * outputSettingsObject;
@property(getter=_weakReferenceToAssetWriter,setter=_setWeakReferenceToAssetWriter:,retain) AVWeakReference * weakReferenceToAssetWriter;
@property(getter=_trackID,readonly) int trackID;
@property(getter=_alternateGroupID,setter=_setAlternateGroupID:) short alternateGroupID;
@property(getter=_trackReferences,readonly) NSDictionary * trackReferences;
@property(getter=_helper,setter=_setHelper:,retain) AVAssetWriterInputHelper * helper;
@property(getter=_status,readonly) int status;
@property(getter=_sourcePixelBufferAttributes,setter=_setSourcePixelBufferAttributes:,copy) NSDictionary * sourcePixelBufferAttributes;
@property(getter=_pixelBufferPool,readonly) struct __CVPixelBufferPool { }* pixelBufferPool;
@property(getter=_isAttachedToPixelBufferAdaptor,setter=_setAttachedToPixelBufferAdaptor:) BOOL attachedToPixelBufferAdaptor;
@property(readonly) int numberOfAppendFailures;

+ (id)keyPathsForValuesAffectingReadyForMoreMediaData;
+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription { }*)arg3;
+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2;
+ (id)keyPathsForValuesAffectingStatus;
+ (void)initialize;

- (BOOL)_appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_setAttachedToPixelBufferAdaptor:(BOOL)arg1;
- (BOOL)_isAttachedToPixelBufferAdaptor;
- (void)_setSourcePixelBufferAttributes:(id)arg1;
- (struct __CVPixelBufferPool { }*)_pixelBufferPool;
- (void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)arg1;
- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (BOOL)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (void)markAsFinished;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id)arg2;
- (BOOL)isReadyForMoreMediaData;
- (void)_setHelper:(id)arg1;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription { }*)arg3;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2;
- (int)numberOfAppendFailures;
- (id)_sourcePixelBufferAttributes;
- (void)setExpectsMediaDataInRealTime:(BOOL)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (int)mediaTimeScale;
- (BOOL)marksOutputTrackAsEnabled;
- (id)_weakReferenceToAssetWriter;
- (void)_transitionToTerminalStatus:(int)arg1;
- (BOOL)_prepareToFinishWritingReturningError:(id*)arg1;
- (void)_prepareToEndSession;
- (int)_trackID;
- (BOOL)_prepareForWritingWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 mediaFileType:(id)arg2 error:(id*)arg3;
- (BOOL)expectsMediaDataInRealTime;
- (short)_alternateGroupID;
- (void)_setAlternateGroupID:(short)arg1;
- (void)setMarksOutputTrackAsEnabled:(BOOL)arg1;
- (void)_setWeakReferenceToAssetWriter:(id)arg1;
- (struct opaqueCMFormatDescription { }*)sourceFormatHint;
- (id)_outputSettingsObject;
- (id)_helper;
- (void)setPreferredVolume:(float)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (int)_status;
- (id)_trackReferences;
- (id)extendedLanguageTag;
- (float)preferredVolume;
- (id)mediaType;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)setLayer:(int)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (int)layer;
- (id)init;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)outputSettings;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)languageCode;

@end
