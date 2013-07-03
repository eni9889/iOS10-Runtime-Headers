/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVItemWithNoChildren;

@interface CalDAVResourceTypeItem : CoreDAVResourceTypeItem  {
    CoreDAVItemWithNoChildren *_calendar;
    CoreDAVItemWithNoChildren *_scheduleInbox;
    CoreDAVItemWithNoChildren *_scheduleOutbox;
    CoreDAVItemWithNoChildren *_notification;
    CoreDAVItemWithNoChildren *_subscribed;
    CoreDAVItemWithNoChildren *_sharedOwner;
}

@property(retain) CoreDAVItemWithNoChildren * calendar;
@property(retain) CoreDAVItemWithNoChildren * scheduleInbox;
@property(retain) CoreDAVItemWithNoChildren * scheduleOutbox;
@property(retain) CoreDAVItemWithNoChildren * notification;
@property(retain) CoreDAVItemWithNoChildren * subscribed;
@property(retain) CoreDAVItemWithNoChildren * sharedOwner;


- (void)setSharedOwner:(id)arg1;
- (void)setScheduleOutbox:(id)arg1;
- (void)setScheduleInbox:(id)arg1;
- (id)sharedOwner;
- (id)subscribed;
- (id)scheduleOutbox;
- (id)scheduleInbox;
- (id)copyParseRules;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)setSubscribed:(id)arg1;
- (void)setNotification:(id)arg1;
- (id)notification;
- (void)write:(id)arg1;
- (id)calendar;
- (void)setCalendar:(id)arg1;
- (void)dealloc;
- (id)description;

@end
