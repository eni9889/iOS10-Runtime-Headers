/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSDispatchData : NSData  {
}

+ (BOOL)supportsSecureCoding;

- (unsigned int)length;
- (unsigned int)hash;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (const void*)bytes;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfData:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (const void*)_bytesIfCompact;
- (void)getBytes:(void*)arg1;
- (BOOL)_allowsDirectEncoding;
- (void)enumerateByteRangesUsingBlock:(id)arg1;
- (void)getBytes:(void*)arg1 length:(unsigned int)arg2;
- (BOOL)isEqualToData:(id)arg1;
- (BOOL)_isDispatchData;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)subdataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

@end
