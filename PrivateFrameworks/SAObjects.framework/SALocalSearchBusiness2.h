/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SALocation, NSArray, NSString, NSDictionary, SALocalSearchOperationHours, NSURL;

@interface SALocalSearchBusiness2 : SADomainObject <SAAceSerializable> {
}

@property(retain) SALocation * address;
@property(copy) NSURL * businessUrl;
@property(copy) NSArray * categories;
@property(copy) NSString * description;
@property(copy) NSString * extSessionGuid;
@property(copy) NSDictionary * identifierMap;
@property(copy) NSString * name;
@property(copy) NSArray * offerLists;
@property(retain) SALocalSearchOperationHours * operationHours;
@property(copy) NSString * phoneNumber;
@property(copy) NSArray * photoList;
@property(copy) NSArray * reviewList;

+ (id)business2WithDictionary:(id)arg1 context:(id)arg2;
+ (id)business2;

- (void)setReviewList:(id)arg1;
- (void)setPhotoList:(id)arg1;
- (id)photoList;
- (void)setOperationHours:(id)arg1;
- (id)operationHours;
- (void)setOfferLists:(id)arg1;
- (id)offerLists;
- (void)setIdentifierMap:(id)arg1;
- (id)identifierMap;
- (id)reviewList;
- (void)setExtSessionGuid:(id)arg1;
- (id)extSessionGuid;
- (void)setBusinessUrl:(id)arg1;
- (id)businessUrl;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setCategories:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (id)name;
- (id)description;
- (id)categories;
- (id)phoneNumber;
- (id)groupIdentifier;
- (void)setName:(id)arg1;
- (id)address;

@end
