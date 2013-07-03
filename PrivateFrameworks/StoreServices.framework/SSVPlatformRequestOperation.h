/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString, NSObject<OS_dispatch_queue>, SSVPlatformContext, NSMutableDictionary;

@interface SSVPlatformRequestOperation : NSOperation  {
    NSMutableDictionary *_additionalParameters;
    SSVPlatformContext *_context;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_itemIdentifiers;
    NSString *_imageProfile;
    NSString *_keyProfile;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _responseBlock;

}

@property(copy) NSArray * itemIdentifiers;
@property(copy) NSString * imageProfile;
@property(copy) NSString * keyProfile;
@property(copy) id responseBlock;


- (void)setImageProfile:(id)arg1;
- (id)imageProfile;
- (void)setResponseBlock:(id)arg1;
- (void)setItemIdentifiers:(id)arg1;
- (void)_makeLocalMescalRequest;
- (void)_makeLocalJSSignRequest;
- (id)responseBlock;
- (id)_lookupWithRequest:(id)arg1 error:(id*)arg2;
- (void)_enumerateQueryParametersUsingBlock:(id)arg1;
- (id)itemIdentifiers;
- (id)_callerValue;
- (void)_makeLookupRequest;
- (id)initWithPlatformContext:(id)arg1;
- (void)setKeyProfile:(id)arg1;
- (id)keyProfile;
- (id)valueForRequestParameter:(id)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (id)init;
- (void).cxx_destruct;
- (void)main;

@end
