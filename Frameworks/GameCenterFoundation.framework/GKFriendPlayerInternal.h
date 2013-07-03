/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSDate, NSString, GKGameInternal;

@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal  {
    NSString *_status;
    NSDate *_lastPlayedDate;
    GKGameInternal *_lastPlayedGame;
}

+ (id)secureCodedPropertyKeys;

- (void)setLastPlayedDate:(id)arg1;
- (void)setLastPlayedGame:(id)arg1;
- (BOOL)isFriend;
- (id)lastPlayedGame;
- (id)lastPlayedDate;
- (id)status;
- (void)setStatus:(id)arg1;
- (void)dealloc;

@end
