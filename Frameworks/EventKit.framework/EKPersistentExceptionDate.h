/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, EKPersistentCalendarItem;

@interface EKPersistentExceptionDate : EKPersistentObject  {
    NSDate *_date;
}

@property(readonly) NSDate * date;
@property(retain) EKPersistentCalendarItem * owner;

+ (id)exceptionDateWithDate:(id)arg1;
+ (id)relations;

- (id)initWithExceptionDate:(id)arg1;
- (id)owner;
- (int)entityType;
- (void)setOwner:(id)arg1;
- (id)date;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
