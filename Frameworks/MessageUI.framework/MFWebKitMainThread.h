/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFLock;

@interface MFWebKitMainThread : NSObject  {
    struct __CFDictionary { } *_visibleDict;
    MFLock *_visibleDictLock;
}

+ (id)sharedInstance;

- (int)dictValueForMimeType:(id)arg1;
- (void)_mainThreadPopulateDictForMimeType:(id)arg1;
- (id)init;
- (void)dealloc;

@end
