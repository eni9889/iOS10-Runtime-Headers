/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSMutableData;

@interface MFBase64Decoder : MFBaseFilterDataConsumer  {
    NSMutableData *_leftovers;
    unsigned int _decodedBits;
    unsigned long _validBytes;
    unsigned long _equalCount;
    const char *_table;
    BOOL _bound;
}

@property BOOL convertCommas;
@property BOOL isBound;
@property(readonly) unsigned long unconverted;

+ (BOOL)isValidBase64:(id)arg1;

- (BOOL)isBound;
- (unsigned long)_decodeBytes:(const char *)arg1 end:(const char *)arg2 into:(char *)arg3 length:(unsigned long)arg4 startingAt:(unsigned long)arg5 outEncodedOffset:(unsigned int*)arg6;
- (BOOL)convertCommas;
- (id)initWithConsumers:(id)arg1;
- (unsigned long)unconverted;
- (void)setIsBound:(BOOL)arg1;
- (void)setConvertCommas:(BOOL)arg1;
- (void)done;
- (void)dealloc;
- (int)appendData:(id)arg1;

@end
