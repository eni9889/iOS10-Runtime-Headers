/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class MSASServerSideModel, MSTimerGate, NSObject<OS_dispatch_queue>;

@interface MSASGroupedQueue : NSObject  {
    BOOL _isShuttingDown;
    BOOL _isAssertingBusyAssertion;
    MSASServerSideModel *_model;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_memberQueue;
    int _maxGroupedCallbackEventBatchCount;
    MSTimerGate *_idleTimerGate;
    MSTimerGate *_stalenessTimerGate;
    double _maxGroupedCallbackEventIdleInterval;
    double _maxGroupedCallbackEventStaleness;
}

@property MSASServerSideModel * model;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;
@property(retain) NSObject<OS_dispatch_queue> * memberQueue;
@property int maxGroupedCallbackEventBatchCount;
@property double maxGroupedCallbackEventIdleInterval;
@property double maxGroupedCallbackEventStaleness;
@property(readonly) BOOL isAssertingBusyAssertion;
@property BOOL isShuttingDown;
@property(retain) MSTimerGate * idleTimerGate;
@property(retain) MSTimerGate * stalenessTimerGate;


- (BOOL)isAssertingBusyAssertion;
- (void)workQueueRestartIdleTimer;
- (void)workQueueRestartStalenessTimer;
- (void)setStalenessTimerGate:(id)arg1;
- (id)stalenessTimerGate;
- (void)setIdleTimerGate:(id)arg1;
- (id)idleTimerGate;
- (void)workQueueClearStalenessTimer;
- (void)workQueueClearIdleTimer;
- (void)memberQueueSetIsAssertingBusyAssertion:(BOOL)arg1;
- (BOOL)memberQueueIsAssertingBusyAssertion;
- (void)workQueueDeassertBusyAssertion;
- (void)workQueueAssertBusyAssertion;
- (void)deassertBusyAssertion;
- (void)assertBusyAssertion;
- (void)workQueueDidEnqueueSubsequentItem;
- (void)workQueueDidEnqueueFirstItem;
- (void)workQueueFlushQueue;
- (void)setIsShuttingDown:(BOOL)arg1;
- (void)flushQueueCompletionBlock:(id)arg1;
- (BOOL)hasEnqueuedItems;
- (void)shutDownFlush:(BOOL)arg1 completionBlock:(id)arg2;
- (void)setMaxGroupedCallbackEventStaleness:(double)arg1;
- (double)maxGroupedCallbackEventStaleness;
- (void)setMaxGroupedCallbackEventIdleInterval:(double)arg1;
- (double)maxGroupedCallbackEventIdleInterval;
- (void)setMaxGroupedCallbackEventBatchCount:(int)arg1;
- (int)maxGroupedCallbackEventBatchCount;
- (void)setModel:(id)arg1;
- (BOOL)isShuttingDown;
- (void)setMemberQueue:(id)arg1;
- (id)memberQueue;
- (id)model;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
