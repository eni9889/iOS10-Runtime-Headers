/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKScore, GKPlayer;

@interface GKLeaderboardItem : NSObject  {
    GKPlayer *_player;
    GKScore *_score;
    unsigned int _totalScores;
}

@property(retain) GKPlayer * player;
@property(retain) GKScore * score;
@property unsigned int totalScores;


- (void)setTotalScores:(unsigned int)arg1;
- (unsigned int)totalScores;
- (id)_gkViewDebuggingChildKeys;
- (void)setScore:(id)arg1;
- (void)setPlayer:(id)arg1;
- (id)player;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)score;

@end
