/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSDate, NSString, NSDictionary;

@interface SSSoftwareUpdate : NSObject  {
    NSDictionary *_dictionary;
    NSDate *_installDate;
    int _updateState;
}

@property(readonly) NSDictionary * updateDictionary;
@property(readonly) NSString * bundleIdentifier;
@property(copy) NSDate * installDate;
@property(readonly) int parentalControlsRank;
@property(readonly) long long storeItemIdentifier;
@property int updateState;


- (int)parentalControlsRank;
- (id)updateDictionary;
- (void)setUpdateState:(int)arg1;
- (id)initWithUpdateDictionary:(id)arg1;
- (long long)storeItemIdentifier;
- (int)updateState;
- (void)setInstallDate:(id)arg1;
- (id)installDate;
- (void)dealloc;
- (id)bundleIdentifier;

@end
