/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SACalendar, NSNumber, SALocation;

@interface SATransportationRequest : SADomainObject  {
}

@property(retain) SACalendar * arrivalDate;
@property(retain) SALocation * arrivalLocation;
@property(copy) NSNumber * cost;
@property(copy) NSString * currency;
@property(retain) SACalendar * departureDate;
@property(retain) SALocation * departureLocation;
@property(copy) NSString * medium;
@property(copy) NSNumber * passengerCount;
@property(copy) NSString * serviceLevel;
@property(copy) NSString * serviceName;

+ (id)requestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)request;

- (void)setArrivalDate:(id)arg1;
- (void)setDepartureDate:(id)arg1;
- (void)setServiceLevel:(id)arg1;
- (id)serviceLevel;
- (void)setPassengerCount:(id)arg1;
- (id)passengerCount;
- (void)setMedium:(id)arg1;
- (id)medium;
- (void)setDepartureLocation:(id)arg1;
- (id)departureLocation;
- (void)setCost:(id)arg1;
- (id)cost;
- (void)setArrivalLocation:(id)arg1;
- (id)arrivalLocation;
- (void)setCurrency:(id)arg1;
- (id)currency;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)arrivalDate;
- (id)departureDate;
- (void)setServiceName:(id)arg1;
- (id)serviceName;
- (id)groupIdentifier;

@end
