/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, AVWeakReference;

@interface AVFigPlaybackItemNotificationLegibleOutputDataSource : NSObject <AVLegibleOutputDataSource> {
    AVWeakReference *_weakReferenceToSelf;
    struct OpaqueFigPlaybackItem { } *_figPlaybackItem;
    NSString *_figLegibleOutputsDictionaryKey;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _dataProviderBlock;

}


- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 atItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 withLegibleOutputsDictionaryKey:(id)arg5;
- (void)_collectUncollectables_onlyToBeCalledFromDeallocOrFinalize;
- (void)_unregisterFromNotifications;
- (void)_registerForNotifications;
- (void)setDataProviderBlock:(id)arg1;
- (id)initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 figLegibleOutputsDictionaryKey:(id)arg2;
- (id)init;
- (void)finalize;
- (void)dealloc;

@end
