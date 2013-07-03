/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKSessionGlobals : NSObject  {
    unsigned int *_activePIDList;
    unsigned long _activePIDListSize;
    unsigned long _activePIDListCount;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _lock;
}


- (BOOL)hasActivePID:(unsigned int)arg1;
- (void)registerPID:(unsigned int)arg1;
- (void)unregisterPID:(unsigned int)arg1;
- (id)init;
- (void)unlock;
- (void)lock;

@end
