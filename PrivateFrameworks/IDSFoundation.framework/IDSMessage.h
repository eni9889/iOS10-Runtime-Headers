/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSNumber, NSDictionary;

@interface IDSMessage : IDSBaseMessage <NSCopying> {
    NSNumber *_wantsDeliveryStatus;
    NSDictionary *_deliveryStatusContext;
    NSNumber *_version;
}

@property(copy) NSNumber * wantsDeliveryStatus;
@property(copy) NSDictionary * deliveryStatusContext;
@property(copy) NSNumber * version;


- (id)messageBody;
- (BOOL)wantsAPSRetries;
- (void)setDeliveryStatusContext:(id)arg1;
- (id)deliveryStatusContext;
- (void)setWantsDeliveryStatus:(id)arg1;
- (id)wantsDeliveryStatus;
- (id)userAgentHeaderString;
- (BOOL)wantsUserAgentInHeaders;
- (BOOL)wantsHTTPHeaders;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
