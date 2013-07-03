/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class ICSDuration, ICSUserAddress, ICSStructuredLocation, NSString, ICSDate, NSURL, NSArray;

@interface ICSTodo : ICSComponent  {
}

@property(retain) NSArray * attach;
@property(retain) NSArray * attendee;
@property int classification;
@property(retain) ICSDate * completed;
@property int percentComplete;
@property(retain) ICSDate * created;
@property(retain) NSString * description;
@property(retain) ICSDate * dtstamp;
@property(retain) ICSDate * dtstart;
@property(retain) ICSDate * due;
@property(retain) ICSDuration * duration;
@property(retain) NSArray * exdate;
@property(retain) NSArray * exrule;
@property(retain) ICSDate * last_modified;
@property(retain) NSString * location;
@property(retain) ICSUserAddress * organizer;
@property unsigned int priority;
@property(retain) NSArray * rdate;
@property(retain) ICSDate * recurrence_id;
@property(retain) NSArray * rrule;
@property unsigned int sequence;
@property int status;
@property(retain) NSString * summary;
@property(retain) NSString * uid;
@property(retain) NSURL * url;
@property(retain) NSString * x_apple_ews_changekey;
@property(retain) NSString * x_apple_ews_itemid;
@property BOOL x_apple_ews_needsserverconfirmation;
@property(retain) NSString * x_apple_ews_permission;
@property unsigned int x_apple_sort_order;
@property(retain) ICSStructuredLocation * x_apple_structured_location;
@property(retain) NSArray * conferences;
@property(retain) NSArray * x_apple_activity;

+ (id)name;

- (void)setX_apple_sort_order:(unsigned int)arg1;
- (void)setPercentComplete:(int)arg1;
- (void)setDue:(id)arg1;
- (void)setX_apple_activity:(id)arg1;
- (unsigned int)x_apple_sort_order;
- (id)x_apple_activity;
- (void)setCompleted:(id)arg1;
- (id)due;
- (id)completed;
- (void)fixComponent;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (BOOL)validate:(id*)arg1;
- (int)percentComplete;

@end
