/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSString;

@interface GKLeaderboardScoreRequest : NSObject <NSSecureCoding> {
    NSString *_playerID;
    NSString *_gameBundleID;
    NSString *_identifier;
    NSString *_groupIdentifier;
    BOOL _friendsOnly;
    int _timeScope;
}

@property(copy) NSString * playerID;
@property(copy) NSString * gameBundleID;
@property(copy) NSString * identifier;
@property(copy) NSString * groupIdentifier;
@property BOOL friendsOnly;
@property int timeScope;

+ (id)requestForRankRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
+ (id)requestForPlayerIDs:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void)setPlayerID:(id)arg1;
- (id)playerID;
- (BOOL)friendsOnly;
- (id)gameBundleID;
- (void)setFriendsOnly:(BOOL)arg1;
- (void)setTimeScope:(int)arg1;
- (void)setGameBundleID:(id)arg1;
- (int)timeScope;
- (void)dealloc;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setGroupIdentifier:(id)arg1;
- (id)groupIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
