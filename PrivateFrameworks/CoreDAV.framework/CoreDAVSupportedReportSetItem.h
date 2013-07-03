/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableSet;

@interface CoreDAVSupportedReportSetItem : CoreDAVItem  {
    NSMutableSet *_supportedReports;
}

@property(retain) NSMutableSet * supportedReports;

+ (id)copyParseRules;

- (void)setSupportedReports:(id)arg1;
- (void)addSupportedReport:(id)arg1;
- (BOOL)supportsReportWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)supportedReports;
- (id)init;
- (void)dealloc;
- (id)description;

@end
