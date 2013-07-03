/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, NSString, NSData, ABUIPerson;

@interface ABUIPerson : NSObject <NSCopying> {
    void *_record;
    void *_addressBook;
    void *_source;
    NSArray *_linkedPeople;
}

@property(readonly) int recordID;
@property(readonly) unsigned int recordType;
@property(readonly) void* record;
@property(readonly) void* source;
@property(readonly) void* addressBook;
@property(readonly) BOOL recordWasDeleted;
@property(readonly) BOOL hasValidRecordID;
@property(readonly) BOOL isMeCard;
@property(readonly) BOOL hasLinkedPeople;
@property(readonly) unsigned int linkedPeopleCount;
@property(readonly) NSArray * linkedPeople;
@property(readonly) BOOL isReadonly;
@property(readonly) BOOL areAllLinkedPeopleReadonly;
@property(readonly) BOOL isRemote;
@property(readonly) void* policy;
@property(readonly) int kind;
@property(readonly) NSString * name;
@property(readonly) NSString * phoneticName;
@property(readonly) NSData * photoThumbnail;
@property(readonly) ABUIPerson * preferredPersonForName;
@property(readonly) NSString * preferredName;
@property(readonly) ABUIPerson * preferredPersonForPhoto;
@property(readonly) NSData * preferredPhotoThumbnail;
@property(readonly) BOOL hasPhoto;
@property(readonly) BOOL hasPreferredPhoto;
@property(readonly) NSString * primarySourceName;
@property(readonly) NSString * secondarySourceName;
@property(readonly) BOOL isFromFacebook;

+ (id)personInAddressBook:(void*)arg1;
+ (id)personWithABRecordID:(int)arg1 fromAddressBook:(void*)arg2;
+ (id)personInSource:(void*)arg1;
+ (id)personWithABPerson:(void*)arg1;
+ (void)setAccountStore:(id)arg1;
+ (id)person;

- (int)recordID;
- (BOOL)hasPreferredPhoto;
- (void)setAsPreferredPersonForPhoto;
- (void)mergeProperties:(id)arg1 fromRecord:(void*)arg2;
- (BOOL)_updatePersonKindFromNamePreserveOrganizationKind:(BOOL)arg1;
- (unsigned int)linkedPeopleCount;
- (id)initWithABRecordID:(int)arg1 fromAddressBook:(void*)arg2;
- (id)initWithABPerson:(void*)arg1;
- (unsigned int)recordType;
- (id)reloadFromDB;
- (BOOL)recordWasDeleted;
- (void)setAsPreferredPersonForName;
- (id)preferredName;
- (BOOL)hasLinkedPeople;
- (BOOL)isRemote;
- (BOOL)updatePersonKindFromName;
- (void)mergeValuesFromRecord:(void*)arg1;
- (BOOL)linkToPerson:(id)arg1;
- (void)setNamePropertiesFromPerson:(id)arg1;
- (BOOL)areAllLinkedPeopleReadonly;
- (id)policiesForAllLinkedPeople;
- (BOOL)hasPhoto;
- (BOOL)isFromFacebook;
- (id)preferredPersonForPhoto;
- (BOOL)updateNewPersonKindFromName;
- (BOOL)addToGroup:(void*)arg1;
- (BOOL)addToAddressBook:(void*)arg1;
- (id)nameIgnoringOrganization:(BOOL)arg1;
- (void)removePropertyValue:(int)arg1;
- (id)preferredPersonForName;
- (id)linkedPeople;
- (BOOL)isMeCard;
- (BOOL)allowsCustomLabelsForProperty:(int)arg1;
- (void*)policy;
- (void*)copyPropertyValue:(int)arg1;
- (id)secondarySourceName;
- (id)primarySourceName;
- (BOOL)isReadonly;
- (id)preferredPhotoThumbnail;
- (id)photoThumbnail;
- (BOOL)hasValidRecordID;
- (id)phoneticName;
- (void*)source;
- (void*)addressBook;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)name;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)kind;
- (void*)record;
- (void)setValue:(void*)arg1 forProperty:(int)arg2;
- (id)valueForProperty:(int)arg1;

@end
