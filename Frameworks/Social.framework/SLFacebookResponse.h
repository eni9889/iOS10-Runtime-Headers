/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class NSDictionary, NSData, NSHTTPURLResponse;

@interface SLFacebookResponse : NSObject <NSCoding> {
    NSData *_responseData;
    NSHTTPURLResponse *_urlResponse;
    id _untypedResponseParameters;
    int _httpErrorCode;
}

@property(readonly) NSDictionary * responseParameters;
@property(readonly) int APIresponseErrorCode;
@property(readonly) int httpErrorCode;
@property(readonly) NSHTTPURLResponse * urlResponse;


- (BOOL)isBatchResponse;
- (id)checkpointURL;
- (BOOL)hasMissingTokenOrAppID;
- (int)APIresponseErrorCode;
- (int)httpStatusCode;
- (id)urlResponse;
- (BOOL)hasHTTPStatusOK;
- (id)initWithResponseData:(id)arg1 urlResponse:(id)arg2;
- (id)untypedResponseParameters;
- (int)httpErrorCode;
- (BOOL)hasBadTokenError;
- (id)responseParameters;
- (BOOL)hasError;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
