/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString, NSArray;

@interface SASetAssistantData : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * abSources;
@property(copy) NSString * anchor;
@property BOOL censorSpeech;
@property(copy) NSString * countryCode;
@property(copy) NSNumber * debugFlags;
@property(copy) NSArray * deviceCapabilities;
@property(copy) NSString * deviceVersion;
@property(copy) NSString * firstName;
@property BOOL handsFree;
@property(copy) NSString * lastName;
@property(copy) NSArray * meCards;
@property(copy) NSString * osVersion;
@property(copy) NSArray * parentalRestrictions;
@property(copy) NSString * region;
@property(copy) NSNumber * storefront;
@property(copy) NSString * temperatureUnit;
@property(copy) NSString * timeZoneId;
@property(copy) NSNumber * twentyFourHourTimeDisplay;
@property(copy) NSNumber * uiScale;
@property BOOL voiceOver;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)setAssistantDataWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setAssistantData;

- (void)setVoiceOver:(BOOL)arg1;
- (BOOL)voiceOver;
- (void)setUiScale:(id)arg1;
- (id)uiScale;
- (void)setTwentyFourHourTimeDisplay:(id)arg1;
- (id)twentyFourHourTimeDisplay;
- (void)setTemperatureUnit:(id)arg1;
- (id)temperatureUnit;
- (void)setStorefront:(id)arg1;
- (id)storefront;
- (void)setParentalRestrictions:(id)arg1;
- (id)parentalRestrictions;
- (void)setOsVersion:(id)arg1;
- (void)setMeCards:(id)arg1;
- (id)meCards;
- (void)setDeviceVersion:(id)arg1;
- (id)deviceVersion;
- (void)setDeviceCapabilities:(id)arg1;
- (id)deviceCapabilities;
- (void)setDebugFlags:(id)arg1;
- (id)debugFlags;
- (void)setAbSources:(id)arg1;
- (id)abSources;
- (void)setHandsFree:(BOOL)arg1;
- (BOOL)handsFree;
- (void)setCensorSpeech:(BOOL)arg1;
- (BOOL)censorSpeech;
- (void)setTimeZoneId:(id)arg1;
- (id)timeZoneId;
- (id)encodedClassName;
- (id)region;
- (void)setRegion:(id)arg1;
- (id)osVersion;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (id)lastName;
- (id)firstName;
- (id)countryCode;
- (void)setCountryCode:(id)arg1;
- (void)setAnchor:(id)arg1;
- (id)anchor;
- (id)groupIdentifier;

@end
