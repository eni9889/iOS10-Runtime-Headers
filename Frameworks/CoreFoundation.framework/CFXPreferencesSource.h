/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFXPreferencesSource : NSObject  {
    struct __CFDictionary { } *_dict;
    long _generationCount;
    BOOL _disabled;
}


- (id)init;
- (void)setDisabled:(BOOL)arg1;
- (long)generationCount;
- (struct __CFDictionary { }*)copyDictionary;
- (struct __CFArray { }*)copyKeyList;
- (unsigned char)synchronize;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void*)getValueForKey:(struct __CFString { }*)arg1;
- (void)finalize;
- (void)dealloc;

@end
