/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@class NSURL, NSString;

@interface WFBlockPage : NSObject  {
    NSURL *pageTemplateURL;
    NSString *userVisibleURLString;
    NSString *formActionURLString;
    NSString *preferredLanguage;
}

@property(readonly) NSURL * pageTemplateURL;
@property(retain) NSString * userVisibleURLString;
@property(retain) NSString * formActionURLString;


- (void)setFormActionURLString:(id)arg1;
- (id)formActionURLString;
- (void)setUserVisibleURLString:(id)arg1;
- (id)userVisibleURLString;
- (id)pageTemplateURL;
- (id)initWithUsername:(id)arg1 overridesAllowded:(BOOL)arg2;
- (id)initNoOveridePageWithUsername:(id)arg1;
- (id)_css;
- (id)_blockpage;
- (id)_fileContentWithName:(id)arg1 extension:(id)arg2;
- (id)_initWithUsername:(id)arg1 fileName:(id)arg2;
- (id)page;
- (void)dealloc;

@end
