/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSData, NSString, NSArray;

@interface IMPerson : NSObject  {
    BOOL _registered;
    BOOL _beingTornDown;
    int _recordID;
}

@property(readonly) NSString * uniqueID;
@property(readonly) int recordID;
@property(readonly) BOOL isInAddressBook;
@property(readonly) NSArray * groups;
@property(readonly) NSString * name;
@property(readonly) NSString * fullName;
@property(readonly) NSString * displayName;
@property(readonly) NSString * shortName;
@property(copy) NSString * nickname;
@property(copy) NSString * firstName;
@property(copy) NSString * lastName;
@property(readonly) BOOL isCompany;
@property(readonly) NSString * companyName;
@property(copy) NSArray * emails;
@property(readonly) NSArray * allEmails;
@property NSArray * phoneNumbers;
@property(readonly) NSArray * mobileNumbers;
@property(retain) NSData * imageData;
@property(readonly) NSData * imageDataWithoutLoading;
@property(readonly) unsigned int status;
@property(readonly) void* _recordRef;
@property(readonly) int _recordID;
@property(readonly) BOOL _registered;
@property(readonly) BOOL _beingTornDown;

+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 orEmail:(id)arg3 orNumber:(id)arg4;
+ (id)existingABPersonForPerson:(id)arg1;
+ (id)existingABPersonWithFirstName:(id)arg1 lastName:(id)arg2;
+ (id)allPeople;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5 identifier:(int*)arg6;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 orEmail:(id)arg3;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5;
+ (id)existingABPeopleWithInstantMessageAddress:(id)arg1 onServices:(id)arg2 allowSubstringMatch:(BOOL)arg3;
+ (id)existingABPersonWithInstantMessageAddress:(id)arg1 onServices:(id)arg2 allowSubstringMatch:(BOOL)arg3;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5 countryCode:(id)arg6 identifier:(int*)arg7;

- (void)setNickname:(id)arg1;
- (BOOL)_registered;
- (int)_recordID;
- (void)_abPersonChanged:(id)arg1;
- (id)mobileNumbers;
- (void)setValues:(id)arg1 forIMProperty:(id)arg2;
- (BOOL)isInAddressBook;
- (id)allEmails;
- (id)emailHandlesForService:(id)arg1;
- (void*)_recordRef;
- (BOOL)containsHandle:(id)arg1 forServiceProperty:(id)arg2;
- (id)valuesForProperty:(id)arg1;
- (id)emailHandlesForService:(id)arg1 includeBaseEmail:(BOOL)arg2;
- (BOOL)isCompany;
- (id)allHandlesForProperty:(id)arg1;
- (id)imHandleRegistrarGUID;
- (BOOL)_beingTornDown;
- (void)setEmails:(id)arg1;
- (id)imageDataWithoutLoading;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (BOOL)isEqualToIMPerson:(id)arg1;
- (void)setValues:(id)arg1 forProperty:(id)arg2;
- (void)appendID:(id)arg1 toProperty:(id)arg2;
- (id)shortName;
- (id)initWithABRecordID:(int)arg1;
- (id)valuesForIMProperty:(id)arg1;
- (int)recordID;
- (void)setPhoneNumbers:(id)arg1;
- (id)phoneNumbers;
- (id)nickname;
- (id)emails;
- (void)save;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (id)displayName;
- (id)lastName;
- (id)firstName;
- (void)setImageData:(id)arg1;
- (id)fullName;
- (id)imageData;
- (id)groups;
- (id)uniqueID;
- (id)companyName;
- (unsigned int)status;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)name;
- (void)finalize;
- (void)dealloc;
- (oneway void)release;
- (id)description;

@end
