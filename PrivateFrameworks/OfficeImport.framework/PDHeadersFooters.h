/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface PDHeadersFooters : NSObject  {
    BOOL mHasDateTime;
    BOOL mHasNowDateTime;
    BOOL mHasUserDateTime;
    BOOL mHasSlideNumber;
    BOOL mHasHeader;
    BOOL mHasFooter;
    int mDateTimeFormat;
    NSString *mUserDateTime;
    NSString *mHeader;
    NSString *mFooter;
}


- (void)setFooter:(id)arg1;
- (id)footer;
- (void)setHeader:(id)arg1;
- (void)setUserDateTime:(id)arg1;
- (id)userDateTime;
- (void)setHasFooter:(BOOL)arg1;
- (BOOL)hasFooter;
- (void)setHasHeader:(BOOL)arg1;
- (BOOL)hasHeader;
- (void)setHasSlideNumber:(BOOL)arg1;
- (BOOL)hasSlideNumber;
- (void)setHasUserDateTime:(BOOL)arg1;
- (BOOL)hasUserDateTime;
- (void)setHasNowDateTime:(BOOL)arg1;
- (BOOL)hasNowDateTime;
- (void)setHasDateTime:(BOOL)arg1;
- (BOOL)hasDateTime;
- (void)dealloc;
- (id)header;

@end
