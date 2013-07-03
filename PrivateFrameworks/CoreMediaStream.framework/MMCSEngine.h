/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSObject<OS_dispatch_queue>, NSThread, NSMutableArray, NSTimer, <MMCSEngineDelegate>, NSString, NSDictionary, NSMutableDictionary, NSURL;

@interface MMCSEngine : NSObject  {
    NSURL *_workPathURL;
    NSString *_appIDHeader;
    NSString *_dataClass;
    NSDictionary *_options;
    struct __MMCSEngine { } *_engine;
    struct { 
        int version; 
        void *context; 
        int (*getFileDescriptorAndContentTypeFromItemCallback)(); 
        int (*getItemProgressCallback)(); 
        int (*getItemDoneCallback)(); 
        int (*putItemProgressCallback)(); 
        int (*putItemDoneCallback)(); 
        int (*requestCompletedCallback)(); 
    } _engineClientContext;
    NSMutableDictionary *_itemIDToAssetProxyMap;
    NSObject<OS_dispatch_queue> *_itemIDToAssetProxyMapQueue;
    NSMutableArray *_requestorContexts;
    NSObject<OS_dispatch_queue> *_reqestorContextQueue;
    NSMutableDictionary *_autoItemIDDictionary;
    NSURL *_autoItemIDPersistenceURL;
    NSObject<OS_dispatch_queue> *_autoItemIDDictionaryQueue;
    BOOL _autoGenerateItemID;
    BOOL _isMetricsGatheringEnabled;
    BOOL _isDone;
    <MMCSEngineDelegate> *_delegate;
    NSThread *_workThread;
    NSTimer *_threadKeepAliveTimer;
}

@property <MMCSEngineDelegate> * delegate;
@property(readonly) BOOL hasOutstandingActivity;
@property BOOL autoGenerateItemID;
@property BOOL isMetricsGatheringEnabled;
@property(retain) NSThread * workThread;
@property(retain) NSTimer * threadKeepAliveTimer;
@property BOOL isDone;

+ (id)logStringForGetItemState:(int)arg1;
+ (id)logStringForPutItemState:(int)arg1;

- (void)shutDownCompletionBlock:(id)arg1;
- (void)setWorkThread:(id)arg1;
- (id)workThread;
- (void)setAutoGenerateItemID:(BOOL)arg1;
- (BOOL)autoGenerateItemID;
- (void)putAssets:(id)arg1 requestURL:(id)arg2 DSID:(id)arg3 options:(id)arg4;
- (void)getAssets:(id)arg1 requestURL:(id)arg2 DSID:(id)arg3 options:(id)arg4;
- (void)unregisterAsset:(id)arg1;
- (void)registerAssets:(id)arg1 forDownloadCompletionBlock:(id)arg2;
- (void)reregisterAssetForDownload:(id)arg1;
- (void)reregisterAssetForUpload:(id)arg1;
- (void)registerAssetForUpload:(id)arg1 completionBlock:(id)arg2;
- (void)cancelOperationsWithContext:(id)arg1;
- (void)_requestCompletedRequestorContext:(id)arg1;
- (void)_putItemDoneItemID:(unsigned long long)arg1 requestorContext:(id)arg2 putReceipt:(id)arg3 error:(id)arg4;
- (void)_putItemProgressItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 requestorContext:(id)arg4 error:(id)arg5;
- (void)_getItemDoneItemID:(unsigned long long)arg1 path:(id)arg2 requestorContext:(id)arg3 error:(id)arg4;
- (void)_getItemProgressItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 requestorContext:(id)arg4 error:(id)arg5;
- (BOOL)_getFileDescriptorAndContentTypeFromItemID:(unsigned long long)arg1 outFD:(int*)arg2 outItemType:(id*)arg3 outError:(id*)arg4;
- (void)setIsMetricsGatheringEnabled:(BOOL)arg1;
- (id)initWithWorkPath:(id)arg1 appIDHeader:(id)arg2 dataClass:(id)arg3 options:(id)arg4;
- (void)_initItemIDPersistence;
- (void)_registerRequestorContext:(id)arg1;
- (void)_removeAssetProxyForItemID:(unsigned long long)arg1;
- (void)_registerAssetProxy:(id)arg1;
- (unsigned long long)_nextItemID;
- (void)setThreadKeepAliveTimer:(id)arg1;
- (id)threadKeepAliveTimer;
- (void)_removeRequestorContext:(id)arg1;
- (BOOL)isMetricsGatheringEnabled;
- (id)_assetProxyWithItemID:(unsigned long long)arg1;
- (void)performBlockOnWorkThread:(id)arg1;
- (void)setIsDone:(BOOL)arg1;
- (void)_doNothingTimerHandler:(id)arg1;
- (void)performBlockOnWorkThread:(id)arg1 waitUntilDone:(BOOL)arg2;
- (id)initWithWorkPath:(id)arg1 appIDHeader:(id)arg2 dataClass:(id)arg3 options:(id)arg4 modes:(id)arg5;
- (void)threadMain:(id)arg1;
- (void)_logLevel:(int)arg1 message:(id)arg2;
- (void)unregisterAssets:(id)arg1;
- (BOOL)hasOutstandingActivity;
- (void)cancelAllOperations;
- (void)performBlock:(id)arg1;
- (BOOL)isActive;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (BOOL)isDone;

@end
