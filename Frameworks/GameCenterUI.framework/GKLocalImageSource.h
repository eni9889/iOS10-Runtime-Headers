/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSMapTable;

@interface GKLocalImageSource : GKImageSource  {
    NSMapTable *_keysForSizes;
}

@property(retain) NSMapTable * keysForSizes;


- (void)setKeysForSizes:(id)arg1;
- (id)keysForSizes;
- (id)imageForImageSize:(struct CGSize { float x1; float x2; })arg1;
- (id)keyForImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)dealloc;

@end
