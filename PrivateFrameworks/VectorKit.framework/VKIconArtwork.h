/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKObjectPool, NSString, NSMutableArray, VGLIcon;

@interface VKIconArtwork : NSObject <VKObjectPoolObject> {
    VGLIcon *_icon;
    NSMutableArray *_completionHandlers;
    VKObjectPool *_pool;
    NSString *_poolKey;
}

@property(readonly) struct CGSize { float x1; float x2; } size;


- (void)getIcon:(id)arg1;
- (id)initWithImage:(struct CGImage { }*)arg1 contentScale:(float)arg2;
- (void)_cleanUpAfterDrawing;
- (id)_newIcon;
- (void)setPool:(id)arg1 withKey:(id)arg2;
- (id)icon;
- (struct CGSize { float x1; float x2; })size;
- (void)dealloc;

@end
