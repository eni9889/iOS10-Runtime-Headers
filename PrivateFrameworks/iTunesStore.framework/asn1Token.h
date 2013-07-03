/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface asn1Token : NSObject  {
    unsigned char mClass;
    unsigned int mIdentifier;
    unsigned int mLength;
    const char *mContent;
}

@property(readonly) unsigned char tokenClass;
@property(readonly) unsigned int identifier;
@property(readonly) unsigned int length;
@property(readonly) const char * content;

+ (id)readTokenFromBuffer:(const char *)arg1 opaque:(BOOL)arg2;
+ (id)readOpaqueTokenFromBuffer:(const char *)arg1;
+ (id)readTokenFromBuffer:(const char *)arg1;

- (id)_initWithID:(unsigned int)arg1 class:(unsigned char)arg2 length:(unsigned int)arg3 content:(const char *)arg4 opaque:(BOOL)arg5;
- (unsigned char)tokenClass;
- (const char *)content;
- (unsigned int)length;
- (id)description;
- (unsigned int)identifier;

@end
