/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, NSString, EKPersistentCalendar;

@interface EKPersistentInviteReplyNotification : EKPersistentObject  {
}

@property(readonly) EKPersistentCalendar * calendar;
@property(readonly) NSString * calendarName;
@property(readonly) NSString * shareeDisplayName;
@property(readonly) NSString * shareeAddress;
@property(readonly) NSString * shareeFirstName;
@property(readonly) NSString * shareeLastName;
@property(readonly) int status;
@property(readonly) NSDate * creationDate;
@property(readonly) BOOL alerted;

+ (id)relations;
+ (id)defaultPropertiesToLoad;

- (id)shareeLastName;
- (id)shareeFirstName;
- (id)shareeAddress;
- (id)shareeDisplayName;
- (id)calendarName;
- (BOOL)alerted;
- (id)creationDate;
- (int)status;
- (id)calendar;

@end
