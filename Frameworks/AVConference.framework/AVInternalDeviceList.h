/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray;

@interface AVInternalDeviceList : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id changeListener;

    NSMutableArray *deviceList;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } listLock;
}

@property(copy) id changeListener;

+ (id)defaultDeviceOfType:(unsigned long)arg1;
+ (id)newDeviceList;

- (id)changeListener;
- (void)setChangeListener:(id)arg1;
- (id)deviceList;
- (id)init;
- (void)dealloc;
- (void)cleanup;

@end
