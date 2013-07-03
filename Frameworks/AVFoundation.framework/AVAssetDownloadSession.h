/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSError, AVAssetDownloadSessionInternal, NSURL;

@interface AVAssetDownloadSession : NSObject  {
    AVAssetDownloadSessionInternal *_internal;
}

@property(readonly) int status;
@property(readonly) NSError * error;
@property(readonly) NSURL * URL;
@property(readonly) NSURL * destinationURL;
@property(readonly) int priority;
@property(readonly) unsigned long long fileSize;
@property(readonly) unsigned long long availableFileSize;
@property(readonly) unsigned long long downloadToken;

+ (id)assetDownloadSessionWithDownloadToken:(unsigned long long)arg1;
+ (id)assetDownloadSessionWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;

- (void)_primeCacheOnDispatchQueue;
- (id)_figPlaybackItemNotificationNames;
- (id)_figAssetNotificationNames;
- (void)_addFigPlaybackItemListeners;
- (void)_addFigAssetListeners;
- (unsigned long long)availableFileSize;
- (void)_transitionToTerminalStatus:(int)arg1 error:(id)arg2;
- (long)_readyForInspection;
- (long)_primeCache;
- (id)initWithDownloadToken:(unsigned long long)arg1;
- (id)initWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (void)_removeFigPlaybackItemListeners;
- (void)_removeFigAssetListeners;
- (BOOL)_setFigAsset:(struct OpaqueFigAsset { }*)arg1;
- (unsigned long long)downloadToken;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary { }*)arg1 key:(struct __CFString { }*)arg2;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (struct OpaqueFigAsset { }*)_figAsset;
- (id)_weakReference;
- (id)destinationURL;
- (int)status;
- (id)init;
- (void)finalize;
- (void)dealloc;
- (unsigned long long)fileSize;
- (id)URL;
- (id)error;
- (void)pause;
- (int)priority;
- (void)stop;
- (void)start;

@end
