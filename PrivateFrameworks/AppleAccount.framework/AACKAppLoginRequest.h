/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSString, NSDictionary;

@interface AACKAppLoginRequest : AARequest  {
    NSDictionary *_accountParameters;
    NSString *_personId;
    NSString *_token;
}

+ (Class)responseClass;

- (id)initWithParameters:(id)arg1 personId:(id)arg2 token:(id)arg3;
- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;

@end
