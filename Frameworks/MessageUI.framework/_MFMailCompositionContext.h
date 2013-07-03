/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSArray, NSString, MFMailMessage, MFGenericAttachmentStore, MFMessageViewingContext;

@interface _MFMailCompositionContext : NSObject  {
    NSString *_sendingAddress;
    NSString *_subject;
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    NSString *_messageBody;
    MFGenericAttachmentStore *_attachments;
    int _composeType;
    id _autosaveIdentifier;
    MFMailMessage *_originalMessage;
    id _originalContent;
    MFMessageViewingContext *_loadingContext;
    BOOL _loadRest;
    BOOL _includeAttachments;
    BOOL _showKeyboardImmediately;
    BOOL _showContentImmediately;
    BOOL _usingDefaultAccount;
    BOOL _prefersFirstLineSelection;
    NSString *_originatingBundleID;
    int _sourceAccountManagement;
}

@property BOOL usingDefaultAccount;
@property(copy) NSString * sendingAddress;
@property(copy) NSString * subject;
@property(copy) NSArray * toRecipients;
@property(copy) NSArray * ccRecipients;
@property(copy) NSArray * bccRecipients;
@property BOOL loadRest;
@property BOOL includeAttachments;
@property BOOL showKeyboardImmediately;
@property BOOL showContentImmediately;
@property BOOL prefersFirstLineSelection;
@property(retain) id originalContent;
@property(retain) MFMessageViewingContext * loadingContext;
@property(readonly) int composeType;
@property(readonly) id autosaveIdentifier;
@property(readonly) MFMailMessage * originalMessage;
@property(copy) NSString * originatingBundleID;
@property int sourceAccountManagement;
@property(readonly) MFGenericAttachmentStore * attachments;


- (void)setPrefersFirstLineSelection:(BOOL)arg1;
- (void)setShowContentImmediately:(BOOL)arg1;
- (void)setUsingDefaultAccount:(BOOL)arg1;
- (id)initOutboxRestoreOfMessage:(id)arg1;
- (id)initSendAgainDraftOfMessage:(id)arg1;
- (id)initDraftRestoreOfMessage:(id)arg1;
- (id)initForwardOfMessage:(id)arg1;
- (id)initReplyAllToMessage:(id)arg1;
- (id)initReplyToMessage:(id)arg1;
- (id)initRecoveredAutosavedMessageWithIdentifier:(id)arg1;
- (id)initWithComposeType:(int)arg1 originalMessage:(id)arg2;
- (id)initWithURL:(id)arg1 composeType:(int)arg2 originalMessage:(id)arg3;
- (id)initWithComposeType:(int)arg1;
- (void)setOriginatingBundleID:(id)arg1;
- (id)bccRecipients;
- (void)setSendingAddress:(id)arg1;
- (id)sendingAddress;
- (BOOL)usingDefaultAccount;
- (BOOL)prefersFirstLineSelection;
- (void)setShowKeyboardImmediately:(BOOL)arg1;
- (BOOL)includeAttachments;
- (void)setOriginalContent:(id)arg1;
- (id)originalContent;
- (void)setBccRecipients:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (BOOL)showKeyboardImmediately;
- (BOOL)loadRest;
- (id)ccRecipients;
- (id)toRecipients;
- (BOOL)showContentImmediately;
- (id)originatingBundleID;
- (void)setIncludeAttachments:(BOOL)arg1;
- (void)setLoadRest:(BOOL)arg1;
- (void)setLoadingContext:(id)arg1;
- (id)originalMessage;
- (id)loadingContext;
- (int)composeType;
- (int)sourceAccountManagement;
- (id)messageBody;
- (id)attachments;
- (void)setSubject:(id)arg1;
- (id)subject;
- (id)init;
- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2;
- (id)autosaveIdentifier;
- (void)setSourceAccountManagement:(int)arg1;

@end
