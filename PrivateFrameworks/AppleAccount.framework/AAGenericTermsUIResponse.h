/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSData, NSString, NSDictionary;

@interface AAGenericTermsUIResponse : AAResponse  {
    NSDictionary *_responseTermsDictionary;
    NSString *_responseAgreeURL;
    NSData *_responseData;
}

@property(readonly) NSData * responseData;
@property(readonly) NSString * agreeURL;
@property(readonly) NSDictionary * termsDictionary;


- (id)agreeURL;
- (id)termsDictionary;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)responseData;
- (void).cxx_destruct;

@end
