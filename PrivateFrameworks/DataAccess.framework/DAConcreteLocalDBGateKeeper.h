/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAConcreteLocalDBGateKeeper : DALocalDBGateKeeper  {
}


- (void)_sendAllClearNotifications;
- (void)_registerWaiter:(id)arg1 forDataclassLocks:(int)arg2 preempt:(BOOL)arg3 completionHandler:(id)arg4;
- (void)_notifyWaitersForDataclasses:(id)arg1;
- (void)_setUnitTestHackRunLoopMode:(id)arg1;
- (void)_abortWaiterForWrappers:(id)arg1;
- (BOOL)_canWakenWaiter:(id)arg1;
- (void)setBookmarksLockHolder:(id)arg1;
- (void)setNotesLockHolder:(id)arg1;
- (void)setEventsLockHolder:(id)arg1;
- (void)setContactsLockHolder:(id)arg1;
- (void)relinquishLocksForWaiter:(id)arg1 dataclasses:(int)arg2 moreComing:(BOOL)arg3;
- (void)unregisterWaiterForDataclassLocks:(id)arg1;
- (void)registerPreemptiveWaiter:(id)arg1 forDataclassLocks:(int)arg2 completionHandler:(id)arg3;
- (void)registerWaiter:(id)arg1 forDataclassLocks:(int)arg2 completionHandler:(id)arg3;
- (void)claimedOwnershipOfDataclasses:(int)arg1;
- (id)stateString;
- (id)init;
- (void)dealloc;

@end
