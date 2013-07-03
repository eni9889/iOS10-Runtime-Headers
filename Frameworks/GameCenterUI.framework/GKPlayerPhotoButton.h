/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKPlayer;

@interface GKPlayerPhotoButton : GKRoundButton <GKPlayerPhotoContainer> {
    GKPlayer *_player;
}

@property(retain) GKPlayer * player;


- (void)refreshPhoto;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPlayer:(id)arg1;
- (id)player;
- (void)dealloc;
- (void)setBackgroundImage:(id)arg1;

@end
