/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFData : NSMutableData  {
    unsigned char _cfinfo[4];
    long _length;
    long _capacity;
    struct __CFAllocator { } *_bytesDeallocator;
    char *_bytes;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (unsigned int)length;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)setLength:(unsigned int)arg1;
- (void*)mutableBytes;
- (const void*)bytes;
- (void)finalize;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
