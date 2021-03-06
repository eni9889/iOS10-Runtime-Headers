/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationAnalyticsLogger : NSObject {
    bool  _isShowcast;
    KNPlaybackSession * _session;
}

@property (nonatomic, readonly) bool isShowcast;
@property (nonatomic, readonly) bool shouldLogAnalytics;

+ (bool)logAnalyticsWithPlaybackSession:(id)arg1 isShowcast:(bool)arg2;

- (void)dealloc;
- (id)init;
- (id)initWithPlaybackSession:(id)arg1 isShowcast:(bool)arg2;
- (bool)isShowcast;
- (bool)logAnalytics;
- (void)p_logAnimationAnalyticsValue:(long long)arg1 forKey:(id)arg2 isDistribution:(bool)arg3 aslmsg:(struct __asl_object_s { }*)arg4;
- (bool)shouldLogAnalytics;

@end
