/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class CRRecentContact;

@interface MFRecentComposeRecipient : MFComposeRecipient  {
    CRRecentContact *_recent;
}


- (id)initWithRecentContact:(id)arg1;
- (id)recentContact;
- (id)preferredSendingAddress;
- (BOOL)isRemovableFromSearchResults;
- (id)placeholderName;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)isGroup;

@end
