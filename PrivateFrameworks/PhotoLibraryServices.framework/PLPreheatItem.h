/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPreheatItem : NSObject  {
    int _useCount;
}


- (int)decrementUseCount;
- (int)incrementUseCount;
- (BOOL)addImageHandler:(id)arg1;
- (id)cachedImageIfAvailable;
- (id)cachedImage;
- (void)cancelPreheatRequest;
- (void)startPreheatRequest;

@end
