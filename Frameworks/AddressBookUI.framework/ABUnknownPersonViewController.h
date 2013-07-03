/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIImage, UIFont, ABPersonTableViewSharingDelegate, <ABStyleProvider>, ABContactViewController, UIView, NSArray, <ABUnknownPersonViewControllerDelegate>, ABPersonTableViewDataSource, NSString, ABUIPerson, ABPersonTableViewActionsDelegate, ABPersonViewControllerHelper;

@interface ABUnknownPersonViewController : UIViewController <ABContactViewControllerDelegate, UIActionSheetDelegate> {
    void *_addressBook;
    void *_displayedPerson;
    BOOL _allowsActions;
    BOOL _allowsAddingToAddressBook;
    BOOL _allowsSendingTextMessage;
    BOOL _allowsConferencing;
    BOOL _allowsContactBlocking;
    BOOL _allowsOnlyPhoneActions;
    BOOL _allowsOnlyFaceTimeActions;
    BOOL _allowsSharing;
    <ABUnknownPersonViewControllerDelegate> *_unknownPersonViewDelegate;
    NSString *_alternateName;
    NSString *_message;
    ABPersonTableViewSharingDelegate *_sharingDelegate;
    UIView *_personHeaderView;
    <ABStyleProvider> *_styleProvider;
    ABPersonViewControllerHelper *_helper;
    ABPersonTableViewDataSource *_dataSource;
    ABPersonTableViewActionsDelegate *_actionsDelegate;
    ABUIPerson *_displayedUIPerson;
    NSArray *_displayedProperties;
    ABContactViewController *_contactViewController;
    int _style;
}

@property <ABUnknownPersonViewControllerDelegate> * unknownPersonViewDelegate;
@property void* addressBook;
@property void* displayedPerson;
@property(copy) NSString * alternateName;
@property(copy) NSString * message;
@property BOOL allowsActions;
@property BOOL allowsAddingToAddressBook;
@property(retain) UIFont * messageFont;
@property(copy) NSString * messageDetail;
@property(retain) UIFont * messageDetailFont;
@property(retain) UIView * customMessageView;
@property(retain) UIView * customHeaderView;
@property(retain) UIView * customFooterView;
@property BOOL allowsSendingTextMessage;
@property BOOL allowsConferencing;
@property BOOL allowsContactBlocking;
@property BOOL allowsOnlyPhoneActions;
@property BOOL allowsOnlyFaceTimeActions;
@property BOOL shareMessageBodyIsHTML;
@property(copy) NSString * shareMessageBody;
@property(copy) NSString * shareMessageSubject;
@property(copy) NSString * shareLocationURL;
@property(retain) UIImage * shareLocationSnapshotImage;
@property(copy) id willTweetLocationCallback;
@property(copy) id willWeiboLocationCallback;
@property(readonly) ABPersonTableViewSharingDelegate * sharingDelegate;
@property BOOL allowsSharing;
@property(readonly) BOOL canShareContact;
@property BOOL isLocation;
@property BOOL badgeEmailPropertiesForMailVIP;
@property(retain) UIView * personHeaderView;
@property BOOL shouldAlignPersonHeaderViewToImage;
@property BOOL savesNewContactOnSuspend;
@property(retain) <ABStyleProvider> * styleProvider;
@property(readonly) ABPersonViewControllerHelper * helper;
@property(readonly) ABPersonTableViewDataSource * dataSource;
@property(readonly) ABPersonTableViewActionsDelegate * actionsDelegate;
@property(retain) ABUIPerson * displayedUIPerson;
@property(copy) NSArray * displayedProperties;
@property(copy) NSString * attribution;
@property(retain) ABContactViewController * contactViewController;
@property int style;

+ (id)defaultLabelsForProperty:(int)arg1 person:(void*)arg2 addressBook:(void*)arg3;

- (void)presentPeoplePickerNavigationControllerForMergeToContact;
- (void)presentNewContactViewControllerForAddToContacts;
- (void)presentShareContactSheet;
- (void)presentAddToContactsSheet;
- (id)initWithVCardData:(id)arg1;
- (void)setIsLocation:(BOOL)arg1;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(int)arg4 ordering:(int)arg5;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(int)arg5 ordering:(int)arg6;
- (void)replaceActionWithTarget:(id)arg1 selector:(SEL)arg2 withTitle:(id)arg3 target:(id)arg4 selector:(SEL)arg5 location:(int)arg6 destructive:(BOOL)arg7;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 location:(int)arg3;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 location:(int)arg4 destructive:(BOOL)arg5;
- (void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)setAttribution:(id)arg1;
- (id)customFooterView;
- (void)setCustomFooterView:(id)arg1;
- (void)setCardContentProvider:(id)arg1;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(BOOL)arg3;
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
- (id)willWeiboLocationCallback;
- (id)willTweetLocationCallback;
- (id)shareLocationURL;
- (id)shareMessageSubject;
- (BOOL)isLocation;
- (id)unknownPersonViewDelegate;
- (void)setWillTweetLocationCallback:(id)arg1;
- (void)setBadgeEmailPropertiesForMailVIP:(BOOL)arg1;
- (BOOL)badgeEmailPropertiesForMailVIP;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(BOOL)arg4;
- (void)setShouldAlignPersonHeaderViewToImage:(BOOL)arg1;
- (BOOL)shouldAlignPersonHeaderViewToImage;
- (id)sharingDelegate;
- (void)setAllowsSendingTextMessage:(BOOL)arg1;
- (BOOL)allowsSendingTextMessage;
- (void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2;
- (void)setAlternateName:(id)arg1;
- (id)attribution;
- (id)customMessageView;
- (id)messageDetailFont;
- (id)messageFont;
- (id)messageDetail;
- (void)setPrimaryProperty:(int)arg1;
- (void)setCustomMessageView:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)reloadImageData;
- (void)setUnknownPersonViewDelegate:(id)arg1;
- (void)setDisplayedUIPerson:(id)arg1;
- (id)displayedUIPerson;
- (void)setContactViewController:(id)arg1;
- (id)contactViewController;
- (id)helper;
- (BOOL)savesNewContactOnSuspend;
- (void)loadContactViewController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;
- (void)setSavesNewContactOnSuspend:(BOOL)arg1;
- (void*)displayedPerson;
- (id)actionsDelegate;
- (id)newActionButton;
- (float)ab_heightToFitForViewInPopoverView;
- (void)setPersonHeaderView:(id)arg1;
- (void)setAllowsOnlyFaceTimeActions:(BOOL)arg1;
- (void)setAllowsOnlyPhoneActions:(BOOL)arg1;
- (void)setAllowsAddingToAddressBook:(BOOL)arg1;
- (void)setAllowsContactBlocking:(BOOL)arg1;
- (void)setAllowsSharing:(BOOL)arg1;
- (void)setAllowsConferencing:(BOOL)arg1;
- (BOOL)allowsConferencing;
- (BOOL)allowsOnlyFaceTimeActions;
- (BOOL)allowsOnlyPhoneActions;
- (BOOL)allowsAddingToAddressBook;
- (BOOL)allowsContactBlocking;
- (BOOL)allowsSharing;
- (BOOL)allowsActions;
- (BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (id)personHeaderView;
- (void)setCustomHeaderView:(id)arg1;
- (id)customHeaderView;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (int)abViewControllerType;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (id)displayedProperties;
- (void)setDisplayedProperties:(id)arg1;
- (void)setMessage:(id)arg1;
- (id)alternateName;
- (void*)addressBook;
- (void)setAddressBook:(void*)arg1;
- (void)setStyle:(int)arg1;
- (id)dataSource;
- (int)style;
- (id)message;
- (id)init;
- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)_mf_initWithRecentGroup:(id)arg1;
- (id)_mf_initWithEmailAddress:(id)arg1;

@end
