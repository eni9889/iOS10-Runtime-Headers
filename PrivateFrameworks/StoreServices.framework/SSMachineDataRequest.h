/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSData, NSString;

@interface SSMachineDataRequest : SSRequest <SSXPCCoding> {
    NSNumber *_accountID;
    NSData *_actionData;
    NSString *_actionName;
}

@property(copy) NSNumber * accountIdentifier;
@property(copy) NSData * actionData;
@property(copy) NSString * actionName;


- (id)actionName;
- (void)setActionData:(id)arg1;
- (id)actionData;
- (void)startWithCompletionBlock:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (id)accountIdentifier;
- (void)setActionName:(id)arg1;
- (void)dealloc;
- (id)initWithURLResponse:(id)arg1;

@end
