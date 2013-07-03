/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVMoveTaskDelegate>, NSString;

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask  {
    NSString *_previousETag;
}

@property <CoreDAVMoveTaskDelegate> * delegate;
@property(retain) NSString * previousETag;


- (void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2;
- (void)setPreviousETag:(id)arg1;
- (id)additionalHeaderValues;
- (id)previousETag;
- (id)httpMethod;
- (void)dealloc;
- (id)description;

@end
