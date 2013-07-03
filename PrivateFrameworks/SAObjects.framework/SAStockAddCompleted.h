/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAStockObject, NSArray, NSString, NSURL;

@interface SAStockAddCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(retain) SAStockObject * aceStock;
@property(copy) NSURL * identifier;
@property(copy) NSArray * results;
@property(copy) NSArray * stockReferences;
@property(copy) NSArray * stocks;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)addCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)addCompleted;

- (void)setAceStock:(id)arg1;
- (id)aceStock;
- (void)setStocks:(id)arg1;
- (id)stocks;
- (void)setStockReferences:(id)arg1;
- (id)stockReferences;
- (id)encodedClassName;
- (id)results;
- (void)setResults:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)groupIdentifier;

@end
