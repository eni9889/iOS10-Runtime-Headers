/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDateComponents, EKObjectID, EKAlarm, NSDate, NSURL;

@interface EKReminder : EKCalendarItem  {
    BOOL hadRecurrences;
}

@property(copy) NSDateComponents * startDateComponents;
@property(copy) NSDateComponents * dueDateComponents;
@property(getter=isCompleted) BOOL completed;
@property(copy) NSDate * completionDate;
@property int priority;
@property unsigned int displayOrder;
@property(readonly) NSDate * dueDate;
@property(copy) NSURL * action;
@property(readonly) EKObjectID * parentID;
@property(readonly) EKAlarm * bestDisplayAlarm;
@property BOOL hadRecurrences;

+ (id)reminderWithEventStore:(id)arg1;
+ (void)_removeSnoozedAlarmsFromReminder:(id)arg1 usingDueDate:(id)arg2;

- (void)setHadRecurrences:(BOOL)arg1;
- (BOOL)hadRecurrences;
- (id)bestDisplayAlarm;
- (void)clearParentID;
- (void)setDueDateComponents:(id)arg1;
- (id)parentID;
- (void)setCompletionDate:(id)arg1;
- (id)completionDate;
- (void)setStartDateComponents:(id)arg1;
- (id)startDateComponents;
- (id)reminderIdentifier;
- (id)dueDateComponents;
- (id)dueDate;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (void)_sendModifiedNote;
- (id)externalURI;
- (void)setDisplayOrder:(unsigned int)arg1;
- (unsigned int)displayOrder;
- (id)_persistentReminder;
- (void)setCompleted:(BOOL)arg1;
- (BOOL)commit:(id*)arg1;
- (id)initWithPersistentObject:(id)arg1;
- (BOOL)validate:(id*)arg1;
- (BOOL)isCompleted;
- (void)setTimeZone:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)setPriority:(int)arg1;
- (int)priority;

@end
