/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSString;

@interface CalDAVPostStreamTask : CoreDAVPostTask  {
    NSString *_previousScheduleTag;
    NSString *_filename;
}

@property(retain) NSString * previousScheduleTag;
@property(retain) NSString * filename;


- (id)utf8PercentEscapedFilename;
- (id)lossyAsciiFilename;
- (id)previousScheduleTag;
- (void)setPreviousScheduleTag:(id)arg1;
- (id)requestBodyStream;
- (id)additionalHeaderValues;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)requestBody;
- (id)responseData;
- (void)dealloc;
- (void)setFilename:(id)arg1;
- (id)filename;

@end
