/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINibStringIDTable : NSObject  {
    struct UIStringIDTableBucket {} **table;
    struct UIStringIDTableBucket { id x1; unsigned int x2; struct UIStringIDTableBucket {} *x3; } *buckets;
    unsigned int hashMask;
    unsigned int count;
}


- (int)count;
- (void)dealloc;
- (id)initWithKeysTransferingOwnership:(id*)arg1 count:(unsigned int)arg2;
- (BOOL)lookupKey:(id)arg1 identifier:(int*)arg2;

@end
