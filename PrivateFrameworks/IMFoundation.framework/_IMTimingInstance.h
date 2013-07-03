/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface _IMTimingInstance : NSObject  {
    double _startTiming;
    double _stopTiming;
    double _totalTime;
    BOOL _isRunning;
}

@property double totalTime;
@property BOOL isRunning;

+ (id)createTimingInstanceWithStartTime:(float)arg1;

- (void)setIsRunning:(BOOL)arg1;
- (void)setTotalTime:(double)arg1;
- (double)totalTime;
- (void)stopUsingTime:(double)arg1;
- (void)startUsingTime:(double)arg1;
- (id)init;
- (id)description;
- (BOOL)isRunning;

@end
