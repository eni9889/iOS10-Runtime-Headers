/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFComposeRecipientOriginContext, NSString, NSArray;

@interface MFComposeRecipient : NSObject <NSCopying, MFDraggableItem> {
    void *_record;
    int _recordID;
    int _property;
    int _identifier;
    NSString *_address;
    NSString *_label;
    NSString *_countryCode;
    NSArray *_cachedCompleteMatches;
    NSArray *_cachedMatchedStrings;
    NSArray *_cachedSortedMembers;
    MFComposeRecipientOriginContext *_originContext;
}

@property(readonly) MFComposeRecipientOriginContext * originContext;
@property(getter=isRemovableFromSearchResults,readonly) BOOL removableFromSearchResults;
@property(retain) NSString * countryCode;

+ (id)mf_recipientWithGALResult:(id)arg1;
+ (id)recipientWithProperty:(int)arg1 address:(id)arg2;
+ (id)recipientWithRecord:(void*)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4;
+ (id)recipientWithRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (id)originContext;
- (id)preferredSendingAddress;
- (id)completelyMatchedAttributedStrings;
- (BOOL)wasCompleteMatch;
- (void)setOriginContext:(id)arg1;
- (id)childrenWithCompleteMatches;
- (id)sortedChildren;
- (BOOL)isRemovableFromSearchResults;
- (id)unlocalizedLabel;
- (id)normalizedAddress;
- (void)setRecord:(void*)arg1 recordID:(int)arg2 identifier:(int)arg3;
- (id)objectForDragType:(id)arg1;
- (id)supportedDragTypes;
- (id)_unformattedAddress;
- (id)placeholderName;
- (id)initWithRecord:(void*)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4 address:(id)arg5;
- (id)uncommentedAddress;
- (id)commentedAddress;
- (id)shortName;
- (int)recordID;
- (id)compositeName;
- (int)property;
- (id)countryCode;
- (void)setCountryCode:(id)arg1;
- (void*)record;
- (id)label;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setIdentifier:(int)arg1;
- (int)identifier;
- (id)displayString;
- (BOOL)isGroup;
- (id)address;
- (id)children;
- (id)accessibilityLabel;

@end