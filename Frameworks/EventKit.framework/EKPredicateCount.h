/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSPredicate, EKEventStore;

@interface EKPredicateCount : NSObject  {
    NSPredicate *_predicate;
    EKEventStore *_store;
    BOOL _finished;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _callback;

    unsigned int _previous;
}

+ (id)countOfRemindersWithPredicate:(id)arg1 store:(id)arg2 callback:(id)arg3;

- (void)_receivedCount:(int)arg1;
- (id)initWithPredicate:(id)arg1 store:(id)arg2 callback:(id)arg3;
- (void)run;
- (void)dealloc;
- (void)terminate;

@end
