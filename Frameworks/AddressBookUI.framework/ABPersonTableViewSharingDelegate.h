/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIImage, ABStyleProvider, ABPersonViewControllerHelper, ABActionSheetDelegate, NSString;

@interface ABPersonTableViewSharingDelegate : NSObject  {
    ABActionSheetDelegate *_actionSheetDelegate;
    BOOL _shareMessageBodyIsHTML;
    ABStyleProvider *_styleProvider;
    ABPersonViewControllerHelper *_helper;
    NSString *_shareMessageBody;
    NSString *_shareMessageSubject;
    NSString *_shareLocationURL;
    UIImage *_shareLocationSnapshotImage;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _willTweetLocationCallback;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _willWeiboLocationCallback;

}

@property(retain) ABStyleProvider * styleProvider;
@property ABPersonViewControllerHelper * helper;
@property(readonly) BOOL canShareContact;
@property(readonly) BOOL canSendMMS;
@property(readonly) BOOL canSendMail;
@property(readonly) BOOL canTweet;
@property(readonly) BOOL canWeibo;
@property BOOL shareMessageBodyIsHTML;
@property(copy) NSString * shareMessageBody;
@property(copy) NSString * shareMessageSubject;
@property(copy) NSString * shareLocationURL;
@property(retain) UIImage * shareLocationSnapshotImage;
@property(copy) id willTweetLocationCallback;
@property(copy) id willWeiboLocationCallback;

+ (id)_fakePersonForMergedPeople:(id)arg1;

- (void)setWillWeiboLocationCallback:(id)arg1;
- (void)setShareLocationSnapshotImage:(id)arg1;
- (id)shareLocationSnapshotImage;
- (void)setShareLocationURL:(id)arg1;
- (void)setShareMessageSubject:(id)arg1;
- (void)setShareMessageBody:(id)arg1;
- (id)shareMessageBody;
- (void)setShareMessageBodyIsHTML:(BOOL)arg1;
- (BOOL)shareMessageBodyIsHTML;
- (BOOL)canShareContact;
- (void)shareContact:(id)arg1;
- (void)shareContactFromButtonItem:(id)arg1;
- (BOOL)canWeibo;
- (BOOL)canTweet;
- (BOOL)canSendMMS;
- (id)vCardFileName;
- (BOOL)loadChatKitAndReturnBundle:(id*)arg1;
- (void)shareContactFromButtonItem:(id)arg1 sender:(id)arg2;
- (void)shareActionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)shareLocationOnWeibo:(id)arg1;
- (void)shareLocationOnTwitter:(id)arg1;
- (void)shareContactByTextMessage:(id)arg1;
- (void)shareContactByEmail:(id)arg1;
- (id)willWeiboLocationCallback;
- (id)willTweetLocationCallback;
- (id)shareLocationURL;
- (id)shareMessageSubject;
- (void)getVCardData:(id*)arg1 exportMode:(int)arg2 fileName:(id*)arg3;
- (BOOL)loadMessageUIAndReturnBundle:(id*)arg1;
- (void)setWillTweetLocationCallback:(id)arg1;
- (void)setHelper:(id)arg1;
- (id)helper;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (id)init;
- (void)dealloc;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (BOOL)canSendMail;

@end
