/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@class UIImage, NSString, NSData, NSDictionary;

@interface SBSCardItem : NSObject <NSCopying, NSCoding> {
    BOOL _requiresPasscode;
    NSString *_identifier;
    NSData *_iconData;
    NSString *_title;
    NSString *_body;
    NSString *_bundleName;
    NSData *_attachmentData;
    NSDictionary *_userInfo;
    UIImage *_thumbnail;
}

@property(copy) NSString * identifier;
@property(copy) NSData * iconData;
@property(copy) NSString * title;
@property(copy) NSString * body;
@property BOOL requiresPasscode;
@property(copy) NSString * bundleName;
@property(copy) NSData * attachmentData;
@property(copy) NSDictionary * userInfo;
@property(copy) UIImage * thumbnail;


- (void)setTitle:(id)arg1;
- (id)title;
- (id)thumbnail;
- (id)sortDate;
- (id)initWithIdentifier:(id)arg1 iconData:(id)arg2 title:(id)arg3 body:(id)arg4 classification:(int)arg5 bundleName:(id)arg6 userInfo:(id)arg7;
- (id)attachmentData;
- (id)bundleName;
- (BOOL)requiresPasscode;
- (id)body;
- (id)iconData;
- (id)initWithIdentifier:(id)arg1 iconData:(id)arg2 title:(id)arg3 body:(id)arg4 requiresPasscode:(BOOL)arg5 bundleName:(id)arg6 userInfo:(id)arg7;
- (void)setAttachmentData:(id)arg1;
- (id)initWithIdentifier:(id)arg1 iconData:(id)arg2 title:(id)arg3 body:(id)arg4 requiresPasscode:(BOOL)arg5 bundleName:(id)arg6 attachmentData:(id)arg7 userInfo:(id)arg8;
- (void)setBundleName:(id)arg1;
- (void)setRequiresPasscode:(BOOL)arg1;
- (void)setBody:(id)arg1;
- (void)setIconData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)userInfo;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setThumbnail:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
