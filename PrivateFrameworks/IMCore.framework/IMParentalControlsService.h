/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSSet, NSString;

@interface IMParentalControlsService : NSObject  {
    BOOL _disableService;
    BOOL _forceWhiteList;
    NSSet *_whitelist;
    NSString *_name;
}

@property BOOL disableService;
@property BOOL forceWhiteList;
@property(retain) NSSet * whitelist;
@property(retain) NSString * name;


- (void)setForceWhiteList:(BOOL)arg1;
- (BOOL)forceWhiteList;
- (void)setDisableService:(BOOL)arg1;
- (BOOL)disableService;
- (id)whitelist;
- (id)name;
- (void)dealloc;
- (void)setWhitelist:(id)arg1;
- (void)setName:(id)arg1;

@end
