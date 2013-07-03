/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class NSMutableArray, NSString, NSMutableDictionary;

@interface AXReport : NSObject  {
    NSString *_baseURL;
    NSString *_route;
    NSString *_action;
    NSMutableDictionary *_simpleParameters;
    NSMutableArray *_fileParameters;
}

@property(retain) NSString * baseURL;
@property(retain) NSString * route;
@property(retain) NSString * action;
@property(retain) NSMutableDictionary * simpleParameters;
@property(retain) NSMutableArray * fileParameters;


- (id)renderPOSTBody;
- (void)addSimpleParameter:(id)arg1 forName:(id)arg2;
- (void)addFile:(id)arg1 parameterName:(id)arg2 contentType:(id)arg3 contentEncoding:(id)arg4 data:(id)arg5;
- (id)route;
- (id)simpleParameters;
- (id)fileParameters;
- (void)setFileParameters:(id)arg1;
- (void)setSimpleParameters:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (id)baseURL;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)setAction:(id)arg1;
- (id)action;

@end
