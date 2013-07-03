/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSTimeZone, NSString, NSSet, ICSDuration, NSURL;

@interface CalDAVContainer : CoreDAVContainer  {
    NSString *_calendarDescription;
    NSString *_ctag;
    NSString *_calendarColor;
    NSString *_calendarOrder;
    NSSet *_supportedCalendarComponentSet;
    BOOL _subscribedStripAlarms;
    BOOL _subscribedStripTodos;
    BOOL _subscribedStripAttachments;
    ICSDuration *_subscribedRefreshRate;
    NSURL *_publishURL;
    NSURL *_prePublishURL;
    BOOL _isScheduleTransparent;
    NSTimeZone *_timeZone;
    BOOL _canBePublished;
    BOOL _canBeShared;
    NSURL *_source;
    NSSet *_freeBusySet;
    NSURL *_scheduleDefaultCalendarURL;
    NSString *_defaultTimedAlarms;
    NSString *_defaultAllDayAlarms;
    NSSet *_sharees;
    NSString *_supportedCalendarComponentSets;
    NSString *_locationCode;
    NSString *_languageCode;
    BOOL _autoprovisioned;
}

@property(readonly) BOOL isCalendar;
@property(readonly) BOOL isSubscribed;
@property(readonly) BOOL isScheduleInbox;
@property(readonly) BOOL isScheduleOutbox;
@property(readonly) BOOL isNotification;
@property(readonly) BOOL isSharedOwner;
@property(readonly) BOOL isShared;
@property(readonly) BOOL isEventContainer;
@property(readonly) BOOL isTaskContainer;
@property(readonly) BOOL isJournalContainer;
@property(readonly) BOOL isPollContainer;
@property(readonly) BOOL supportsFreebusy;
@property(retain) NSString * calendarDescription;
@property(retain) NSString * ctag;
@property(retain) NSString * calendarColor;
@property(retain) NSString * calendarOrder;
@property(retain) NSString * defaultTimedAlarms;
@property(retain) NSString * defaultAllDayAlarms;
@property(retain) NSSet * supportedCalendarComponentSet;
@property BOOL subscribedStripAlarms;
@property BOOL subscribedStripTodos;
@property BOOL subscribedStripAttachments;
@property(retain) ICSDuration * subscribedRefreshRate;
@property(retain) NSURL * publishURL;
@property(retain) NSURL * prePublishURL;
@property BOOL isScheduleTransparent;
@property(retain) NSTimeZone * timeZone;
@property BOOL canBePublished;
@property BOOL canBeShared;
@property(retain) NSURL * source;
@property(retain) NSSet * freeBusySet;
@property(retain) NSURL * scheduleDefaultCalendarURL;
@property(retain) NSSet * sharees;
@property(retain) NSString * supportedCalendarComponentSets;
@property(retain) NSString * locationCode;
@property(retain) NSString * languageCode;
@property BOOL autoprovisioned;

+ (id)copyPropertyMappingsForParser;

- (BOOL)isPollContainer;
- (BOOL)isJournalContainer;
- (BOOL)_isComponentSupportedForString:(id)arg1;
- (id)supportedCalendarComponentSet;
- (void)setAutoprovisioned:(BOOL)arg1;
- (BOOL)canBeShared;
- (void)_setTimeZoneFromProperties:(id)arg1 onCalendar:(id)arg2;
- (void)setIsScheduleTransparent:(BOOL)arg1;
- (void)setSubscribedStripTodos:(BOOL)arg1;
- (void)setSubscribedStripAttachments:(BOOL)arg1;
- (void)setSubscribedStripAlarms:(BOOL)arg1;
- (BOOL)autoprovisioned;
- (id)locationCode;
- (id)supportedCalendarComponentSets;
- (id)defaultAllDayAlarms;
- (id)defaultTimedAlarms;
- (id)scheduleDefaultCalendarURL;
- (id)freeBusySet;
- (id)prePublishURL;
- (id)publishURL;
- (id)subscribedRefreshRate;
- (BOOL)subscribedStripAttachments;
- (BOOL)subscribedStripTodos;
- (BOOL)subscribedStripAlarms;
- (id)calendarOrder;
- (id)calendarColor;
- (BOOL)canBePublished;
- (BOOL)isScheduleTransparent;
- (BOOL)supportsFreebusy;
- (BOOL)isSharedOwner;
- (BOOL)isTaskContainer;
- (BOOL)isEventContainer;
- (BOOL)isNotification;
- (BOOL)isScheduleOutbox;
- (BOOL)isScheduleInbox;
- (BOOL)isCalendar;
- (void)setLocationCode:(id)arg1;
- (void)setSupportedCalendarComponentSets:(id)arg1;
- (void)setSharees:(id)arg1;
- (void)setDefaultAllDayAlarms:(id)arg1;
- (void)setDefaultTimedAlarms:(id)arg1;
- (void)setScheduleDefaultCalendarURL:(id)arg1;
- (void)setFreeBusySet:(id)arg1;
- (void)setPrePublishURL:(id)arg1;
- (void)setPublishURL:(id)arg1;
- (void)setSubscribedRefreshRate:(id)arg1;
- (void)setSupportedCalendarComponentSet:(id)arg1;
- (void)setCalendarOrder:(id)arg1;
- (void)setCalendarColor:(id)arg1;
- (void)setCalendarDescription:(id)arg1;
- (id)calendarDescription;
- (void)applyParsedProperties:(id)arg1;
- (void)setCtag:(id)arg1;
- (id)ctag;
- (BOOL)isShared;
- (id)sharees;
- (void)setCanBePublished:(BOOL)arg1;
- (void)setCanBeShared:(BOOL)arg1;
- (BOOL)isSubscribed;
- (void)setLanguageCode:(id)arg1;
- (id)source;
- (void)setSource:(id)arg1;
- (id)timeZone;
- (void)setTimeZone:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)languageCode;

@end
