/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLResourceFactory, NSMapTable;

@interface VGLProgramFactory : NSObject  {
    VGLResourceFactory *_factory;
    NSMapTable *_programCache;
}

@property VGLResourceFactory * factory;


- (void)setFactory:(id)arg1;
- (id)factory;
- (id)initWithResourceFactory:(id)arg1;
- (id)programWithClass:(Class)arg1;

@end
