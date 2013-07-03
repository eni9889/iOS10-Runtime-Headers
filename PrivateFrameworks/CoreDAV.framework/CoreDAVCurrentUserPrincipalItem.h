/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVItemWithNoChildren, CoreDAVHrefItem;

@interface CoreDAVCurrentUserPrincipalItem : CoreDAVItem  {
    CoreDAVHrefItem *_href;
    CoreDAVItemWithNoChildren *_unauthenticated;
}

@property(retain) CoreDAVHrefItem * href;
@property(retain) CoreDAVItemWithNoChildren * unauthenticated;

+ (id)copyParseRules;

- (void)setUnauthenticated:(id)arg1;
- (id)unauthenticated;
- (void)setHref:(id)arg1;
- (id)href;
- (id)init;
- (void)dealloc;
- (id)description;

@end
