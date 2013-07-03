/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface IMTimingCollection : NSObject  {
    NSMutableDictionary *_timings;
    NSObject<OS_dispatch_queue> *_queue;
}


- (BOOL)hasKey:(id)arg1;
- (void)removeTimingForKey:(id)arg1;
- (double)totalTimeForKey:(id)arg1;
- (void)stopTimingForKey:(id)arg1;
- (void)startTimingForKey:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;

@end
