/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSArray, NSString, NSData, NSDictionary, NSDate;

@interface GKTurnBasedExchangeInternal : GKInternalRepresentation  {
    NSString *_exchangeID;
    NSArray *_recipientIndexes;
    NSString *_statusString;
    NSDictionary *_localizableMessage;
    NSData *_data;
    NSDate *_sendDate;
    NSDate *_timeoutDate;
    NSDate *_completionDate;
    NSArray *_replies;
    unsigned char _senderIndex;
}

@property(retain) NSString * exchangeID;
@property unsigned char senderIndex;
@property(retain) NSArray * recipientIndexes;
@property(retain) NSString * statusString;
@property(retain) NSDictionary * localizableMessage;
@property(retain) NSData * data;
@property(retain) NSDate * sendDate;
@property(retain) NSDate * timeoutDate;
@property(retain) NSDate * completionDate;
@property(retain) NSArray * replies;

+ (id)secureCodedPropertyKeys;

- (void)setSendDate:(id)arg1;
- (void)setStatusString:(id)arg1;
- (void)setRecipientIndexes:(id)arg1;
- (void)setSenderIndex:(unsigned char)arg1;
- (void)setExchangeID:(id)arg1;
- (void)setTimeoutDate:(id)arg1;
- (id)sendDate;
- (id)statusString;
- (id)exchangeID;
- (void)setLocalizableMessage:(id)arg1;
- (id)localizableMessage;
- (void)setReplies:(id)arg1;
- (id)recipientIndexes;
- (unsigned char)senderIndex;
- (id)replies;
- (id)timeoutDate;
- (void)setCompletionDate:(id)arg1;
- (id)completionDate;
- (void)setData:(id)arg1;
- (id)data;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;

@end
