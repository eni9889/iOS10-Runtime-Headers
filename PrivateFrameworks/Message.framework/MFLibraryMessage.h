/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableSet, NSString, MFLock, NSMutableDictionary;

@interface MFLibraryMessage : MFMailMessage  {
    unsigned int _libraryID;
    NSString *_remoteID;
    unsigned long _uid;
    unsigned long long _uniqueRemoteId;
    unsigned int _size;
    unsigned int _mailboxID;
    unsigned int _originalMailboxID;
    NSString *_messageID;
    NSMutableDictionary *_metadata;
    NSMutableSet *_metadataChangedKeys;
    MFLock *_metadataLock;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _deallocationHandler;

}

@property(copy) id deallocationHandler;

+ (id)messageWithLibraryID:(unsigned int)arg1;

- (id)deallocationHandler;
- (id)attachmentStorageLocation;
- (BOOL)isLibraryMessage;
- (void)setRemoteID:(const char *)arg1 flags:(unsigned long long)arg2 size:(unsigned int)arg3 mailboxID:(unsigned int)arg4 originalMailboxID:(unsigned int)arg5;
- (void)markAsForwarded;
- (void)markAsReplied;
- (void)markAsNotFlagged;
- (void)markAsFlagged;
- (void)markAsNotViewed;
- (void)markAsViewed;
- (void)setMutableInfoFromMessage:(id)arg1;
- (int)compareByUidWithMessage:(id)arg1;
- (id)mailboxName;
- (void)setHasTemporaryUid:(BOOL)arg1;
- (void)setIsPartial:(BOOL)arg1;
- (BOOL)isPartial;
- (void)setUniqueRemoteId:(unsigned long long)arg1;
- (unsigned long long)uniqueRemoteId;
- (id)originalMailboxURL;
- (void)setOriginalMailboxID:(unsigned int)arg1;
- (void)setLibraryID:(unsigned int)arg1;
- (void)_initializeMetadata;
- (void)setMailboxID:(unsigned int)arg1;
- (id)copyMessageInfo;
- (id)mailbox;
- (unsigned int)originalMailboxID;
- (void)setDeallocationHandler:(id)arg1;
- (id)remoteID;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (BOOL)hasTemporaryUid;
- (void)setRemoteID:(id)arg1;
- (void)_updateUID;
- (id)initWithLibraryID:(unsigned int)arg1;
- (unsigned int)mailboxID;
- (unsigned int)libraryID;
- (void)setPreferredEncoding:(unsigned long)arg1;
- (void)setMessageFlags:(unsigned long long)arg1;
- (id)preferredEmailAddressToReplyWith;
- (id)_attachmentStorageLocation;
- (id)dataPathForMimePart:(id)arg1;
- (id)dataConsumerForMimePart:(id)arg1;
- (void)setMessageData:(id)arg1 isPartial:(BOOL)arg2;
- (BOOL)isMessageContentsLocallyAvailable;
- (id)messageStore;
- (id)metadataValueForKey:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)library;
- (BOOL)canBeDeleted;
- (void)setMessageSize:(unsigned int)arg1;
- (unsigned int)messageSize;
- (id)persistentID;
- (void)setUid:(unsigned long)arg1;
- (id)messageID;
- (id)account;
- (void)setSummary:(id)arg1;
- (void)commit;
- (void)setFlags:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)path;
- (unsigned long)uid;

@end
