/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class CLLocation, NSString;

@interface EKStructuredLocation : EKObject <NSCopying> {
}

@property(retain) NSString * title;
@property(retain) CLLocation * geoLocation;
@property double radius;
@property(copy) NSString * addressBookEntityID;
@property(readonly) BOOL isStructured;

+ (id)locationWithTitle:(id)arg1;

- (void)setGeoLocation:(id)arg1;
- (id)_persistentLocation;
- (void)setAddressBookEntityID:(id)arg1;
- (id)addressBookEntityID;
- (id)geoLocation;
- (BOOL)isStructured;
- (void)updatePersistentObject;
- (void)setRadius:(double)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (double)radius;
- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
