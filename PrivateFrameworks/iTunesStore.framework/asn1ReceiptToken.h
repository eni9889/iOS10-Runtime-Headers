/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class asn1Token, NSString;

@interface asn1ReceiptToken : NSObject  {
    unsigned int mType;
    unsigned int mTypeVersion;
    asn1Token *mContentToken;
}

@property(readonly) unsigned int type;
@property(readonly) unsigned int typeVersion;
@property(readonly) asn1Token * contentToken;
@property(readonly) NSString * stringValue;
@property(readonly) unsigned long long integerValue;

+ (id)readFromBuffer:(const char *)arg1;

- (unsigned int)typeVersion;
- (id)_initWithType:(unsigned int)arg1 typeVersion:(unsigned int)arg2 contentToken:(id)arg3;
- (id)contentToken;
- (id)stringValue;
- (void)dealloc;
- (id)description;
- (unsigned int)type;
- (unsigned long long)integerValue;

@end
