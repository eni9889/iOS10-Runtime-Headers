/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableSet;

@interface CoreDAVGrantItem : CoreDAVItem  {
    NSMutableSet *_privileges;
}

@property(retain) NSMutableSet * privileges;

+ (id)copyParseRules;

- (void)addPrivilege:(id)arg1;
- (void)setPrivileges:(id)arg1;
- (id)privileges;
- (void)write:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;

@end
