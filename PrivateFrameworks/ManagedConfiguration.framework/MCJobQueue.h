/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <MCJobQueueObserver>, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>;

@interface MCJobQueue : NSObject  {
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    <MCJobQueueObserver> *_observer;
    NSObject<OS_dispatch_queue> *_jobQueue;
    NSObject<OS_dispatch_group> *_jobGroup;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _executionQueueAbortCompletionBlock;

}

@property(retain) NSObject<OS_dispatch_queue> * executionQueue;
@property(retain) NSObject<OS_dispatch_queue> * eventQueue;
@property <MCJobQueueObserver> * observer;
@property(retain) NSObject<OS_dispatch_queue> * jobQueue;
@property(retain) NSObject<OS_dispatch_group> * jobGroup;
@property(copy) id executionQueueAbortCompletionBlock;


- (id)observer;
- (void)setJobGroup:(id)arg1;
- (void)setJobQueue:(id)arg1;
- (void)setEventQueue:(id)arg1;
- (void)setExecutionQueue:(id)arg1;
- (void)abortEnqueuedJobsCompletionBlock:(id)arg1;
- (void)waitForEnqueuedJobsToCompleteCompletionBlock:(id)arg1;
- (void)jobDidFinish;
- (BOOL)hasJobsEnqueued;
- (void)enqueueJob:(id)arg1;
- (void)setExecutionQueueAbortCompletionBlock:(id)arg1;
- (id)executionQueueAbortCompletionBlock;
- (id)executionQueue;
- (id)jobQueue;
- (id)jobGroup;
- (id)eventQueue;
- (id)init;
- (void).cxx_destruct;
- (void)setObserver:(id)arg1;

@end
