/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSURL;

@interface CalDAVModifyCalendarSharingLevelTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {
    int _action;
    NSURL *_url;
    int _state;
    NSURL *_publishedURL;
}

@property int action;
@property(retain) NSURL * publishedURL;
@property(retain) NSURL * url;
@property int state;


- (id)initWithSharingAction:(int)arg1 atCalendarURL:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4;
- (void)setPublishedURL:(id)arg1;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)publishedURL;
- (void)finishWithError:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)setState:(int)arg1;
- (int)state;
- (void)setUrl:(id)arg1;
- (void)setAction:(int)arg1;
- (int)action;
- (id)url;

@end
