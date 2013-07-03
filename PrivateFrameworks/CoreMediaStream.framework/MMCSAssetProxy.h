/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class MMCSEngine, <MMCSAsset>;

@interface MMCSAssetProxy : NSObject  {
    MMCSEngine *_engine;
    <MMCSAsset> *_asset;
    int _FD;
}

@property MMCSEngine * engine;
@property(retain) <MMCSAsset> * asset;
@property int FD;


- (void)setFD:(int)arg1;
- (int)FD;
- (void)discardFileDescriptor;
- (void)closeFileDescriptor;
- (int)openNewFileDescriptor;
- (void)setEngine:(id)arg1;
- (id)engine;
- (void)dealloc;
- (void).cxx_destruct;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)initWithAsset:(id)arg1;

@end
