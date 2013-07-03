/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, EKPersistentSource, NSSet, NSURL;

@interface EKPersistentCalendar : EKPersistentObject  {
}

@property(retain) EKPersistentSource * source;
@property(readonly) NSString * UUID;
@property(copy) NSString * title;
@property(copy) NSString * externalID;
@property(copy) NSString * externalModificationTag;
@property int displayOrder;
@property(copy) NSString * colorString;
@property(getter=isColorDisplayOnly) BOOL colorDisplayOnly;
@property unsigned int allowedEntityTypes;
@property BOOL allowsContentModifications;
@property BOOL prohibitsScheduling;
@property(getter=isSubscribed) BOOL subscribed;
@property(getter=isHidden) BOOL hidden;
@property(getter=isImmutable) BOOL immutable;
@property(getter=isSharingInvitation) BOOL sharingInvitation;
@property BOOL canBePublished;
@property BOOL canBeShared;
@property BOOL schedulingProhibited;
@property BOOL isFacebookBirthdayCalendar;
@property(readonly) BOOL isDefaultCalendarForSource;
@property int sharingStatus;
@property unsigned int invitationStatus;
@property(copy) NSString * sharedOwnerName;
@property(copy) NSURL * sharedOwnerAddress;
@property int sharingInvitationResponse;
@property(copy) NSSet * sharees;
@property(copy) NSString * publishedURL;
@property(getter=isPublished) BOOL published;
@property(copy) NSString * selfIdentityDisplayName;
@property(copy) NSString * selfIdentityEmail;
@property(copy) NSURL * selfIdentityAddress;
@property(copy) NSString * selfIdentityFirstName;
@property(copy) NSString * selfIdentityLastName;
@property(copy) NSString * ownerIdentityDisplayName;
@property(copy) NSString * ownerIdentityEmail;
@property(copy) NSURL * ownerIdentityAddress;
@property(copy) NSString * ownerIdentityFirstName;
@property(copy) NSString * ownerIdentityLastName;

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (id)calendar;

- (void)setPublished:(BOOL)arg1;
- (void)setIsPublished:(BOOL)arg1;
- (int)sharingStatus;
- (void)setSharingStatus:(int)arg1;
- (BOOL)isPublished;
- (void)setPublishedURL:(id)arg1;
- (BOOL)canBeShared;
- (BOOL)canBePublished;
- (void)setSharees:(id)arg1;
- (void)setSubscribed:(BOOL)arg1;
- (void)setIsFacebookBirthdayCalendar:(BOOL)arg1;
- (void)setSchedulingProhibited:(BOOL)arg1;
- (void)setSharingInvitation:(BOOL)arg1;
- (void)setImmutable:(BOOL)arg1;
- (void)setProhibitsScheduling:(BOOL)arg1;
- (void)setAllowsContentModifications:(BOOL)arg1;
- (void)setUUID:(id)arg1;
- (void)setColorDisplayOnly:(BOOL)arg1;
- (BOOL)isColorDisplayOnly;
- (void)setOwnerIdentityLastName:(id)arg1;
- (void)setOwnerIdentityFirstName:(id)arg1;
- (void)setOwnerIdentityAddress:(id)arg1;
- (id)ownerIdentityAddress;
- (void)setOwnerIdentityEmail:(id)arg1;
- (id)ownerIdentityEmail;
- (void)setOwnerIdentityDisplayName:(id)arg1;
- (id)ownerIdentityDisplayName;
- (void)setSelfIdentityLastName:(id)arg1;
- (void)setSelfIdentityFirstName:(id)arg1;
- (void)setSelfIdentityAddress:(id)arg1;
- (id)selfIdentityAddress;
- (void)setSelfIdentityEmail:(id)arg1;
- (id)selfIdentityEmail;
- (void)setSelfIdentityDisplayName:(id)arg1;
- (id)selfIdentityDisplayName;
- (void)removeSharee:(id)arg1;
- (void)addSharee:(id)arg1;
- (id)sharees;
- (void)setExternalModificationTag:(id)arg1;
- (id)externalModificationTag;
- (BOOL)isFacebookBirthdayCalendar;
- (BOOL)schedulingProhibited;
- (id)publishedURL;
- (void)setSharedOwnerAddress:(id)arg1;
- (id)sharedOwnerName;
- (void)setSharedOwnerName:(id)arg1;
- (int)sharingInvitationResponse;
- (void)setSharingInvitationResponse:(int)arg1;
- (void)setInvitationStatus:(unsigned int)arg1;
- (unsigned int)invitationStatus;
- (BOOL)isSharingInvitation;
- (BOOL)prohibitsScheduling;
- (BOOL)isDefaultCalendarForSource;
- (void)setDisplayOrder:(int)arg1;
- (int)displayOrder;
- (void)setColorString:(id)arg1;
- (BOOL)isImmutable;
- (id)ownerIdentityLastName;
- (id)ownerIdentityFirstName;
- (id)selfIdentityLastName;
- (id)selfIdentityFirstName;
- (void)setCanBePublished:(BOOL)arg1;
- (void)setCanBeShared:(BOOL)arg1;
- (id)sharedOwnerAddress;
- (BOOL)isSubscribed;
- (id)colorString;
- (void)setAllowedEntityTypes:(unsigned int)arg1;
- (BOOL)allowsContentModifications;
- (unsigned int)allowedEntityTypes;
- (int)entityType;
- (id)externalID;
- (void)setExternalID:(id)arg1;
- (BOOL)validate:(id*)arg1;
- (id)source;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setSource:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isHidden;
- (id)init;
- (id)description;
- (id)UUID;

@end
