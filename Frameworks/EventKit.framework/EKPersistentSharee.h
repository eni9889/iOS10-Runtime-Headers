/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString;

@interface EKPersistentSharee : EKPersistentObject <NSCopying> {
}

@property(readonly) NSString * UUID;
@property(copy) NSString * displayName;
@property(copy) NSString * emailAddress;
@property(copy) NSString * firstName;
@property(copy) NSString * lastName;
@property(copy) NSString * externalID;
@property int shareeStatus;
@property int shareeAccessLevel;

+ (id)shareeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)shareeWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3;
+ (id)relations;
+ (id)defaultPropertiesToLoad;

- (id)owner;
- (int)entityType;
- (void)setShareeAccessLevel:(int)arg1;
- (int)shareeAccessLevel;
- (void)setShareeStatus:(int)arg1;
- (int)shareeStatus;
- (id)externalID;
- (void)setExternalID:(id)arg1;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3;
- (void)setEmailAddress:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (id)emailAddress;
- (id)displayName;
- (id)lastName;
- (id)firstName;
- (void)setDisplayName:(id)arg1;
- (id)init;
- (void)setOwner:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)UUID;

@end
