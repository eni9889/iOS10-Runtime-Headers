/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVAssetResourceLoaderDelegate>, AVAssetResourceLoaderInternal, NSObject<OS_dispatch_queue>;

@interface AVAssetResourceLoader : NSObject  {
    AVAssetResourceLoaderInternal *_resourceLoader;
}

@property(readonly) <AVAssetResourceLoaderDelegate> * delegate;
@property(readonly) NSObject<OS_dispatch_queue> * delegateQueue;


- (id)cachedContentInformationForURL:(id)arg1;
- (void)cacheContentInformation:(id)arg1 forURL:(id)arg2;
- (void)_noteFinishingOfLoadingRequest:(id)arg1;
- (void)_performDelegateCallbackSynchronouslyIfCurrentDelegateQueueIsQueue:(id)arg1 delegateCallbackBlock:(id)arg2;
- (id)stateQueue;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)_attemptDelegateHandlingOfRequestWithDictionary:(id)arg1 fallbackBlock:(id)arg2;
- (id)_weakReference;
- (void)setDelegate:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)asset;
- (id)initWithAsset:(id)arg1;

@end
