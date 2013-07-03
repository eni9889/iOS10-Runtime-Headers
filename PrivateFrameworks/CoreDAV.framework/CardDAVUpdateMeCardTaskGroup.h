/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSURL;

@interface CardDAVUpdateMeCardTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {
    NSURL *_homeURL;
    NSURL *_cardURL;
}

@property(readonly) NSURL * cardURL;
@property(readonly) NSURL * homeURL;


- (id)cardURL;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 homeURL:(id)arg3 cardURL:(id)arg4;
- (id)_newPropPatchTask;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)startTaskGroup;
- (id)homeURL;
- (void)dealloc;
- (id)description;

@end
