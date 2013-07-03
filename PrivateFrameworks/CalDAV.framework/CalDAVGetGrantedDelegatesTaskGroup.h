/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVGetGrantedDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup  {
    int _state;
    BOOL _fetchPrincipalDetails;
}

@property BOOL fetchPrincipalDetails;
@property int state;


- (void)_fetchOnlyHrefs;
- (void)_expandPropertiesWithAllowWrite:(BOOL)arg1;
- (BOOL)fetchPrincipalDetails;
- (id)_urlAppendingSegmentWithAllowWrite:(BOOL)arg1;
- (void)setFetchPrincipalDetails:(BOOL)arg1;
- (void)_getChildProperties;
- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)setState:(int)arg1;
- (int)state;

@end
