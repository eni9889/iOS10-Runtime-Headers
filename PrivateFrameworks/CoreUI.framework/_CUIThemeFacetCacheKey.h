/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface _CUIThemeFacetCacheKey : NSObject  {
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    } keyList[16];
    int themeIndex;
    unsigned long long hashPrecalc;
}


- (id)initWithKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 themeIndex:(int)arg2;
- (unsigned long long)hash64;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
