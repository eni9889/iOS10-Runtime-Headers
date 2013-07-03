/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSString, NSData, NSNumber;

@interface SSPlayInfoRequestContext : NSObject <SSXPCCoding, NSCopying> {
    NSNumber *_accountIdentifier;
    NSNumber *_contentIdentifier;
    NSString *_playerGUID;
    NSData *_sic;
    NSArray *_sinfs;
}

@property(copy) NSString * playerGUID;
@property(copy) NSData * SICData;
@property(copy) NSArray * sinfs;
@property(copy) NSNumber * accountIdentifier;
@property(copy) NSNumber * contentIdentifier;


- (id)sinfs;
- (id)contentIdentifier;
- (void)setSICData:(id)arg1;
- (void)setPlayerGUID:(id)arg1;
- (id)playerGUID;
- (void)setContentIdentifier:(id)arg1;
- (id)SICData;
- (void)setSinfs:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (id)accountIdentifier;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
