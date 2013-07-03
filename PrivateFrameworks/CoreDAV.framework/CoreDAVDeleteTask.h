/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVTaskDelegate>, NSString;

@interface CoreDAVDeleteTask : CoreDAVActionBackedTask  {
    NSString *_previousETag;
}

@property <CoreDAVTaskDelegate> * delegate;
@property(retain) NSString * previousETag;


- (void)setPreviousETag:(id)arg1;
- (id)additionalHeaderValues;
- (id)previousETag;
- (id)requestBody;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (void)dealloc;
- (id)description;

@end
