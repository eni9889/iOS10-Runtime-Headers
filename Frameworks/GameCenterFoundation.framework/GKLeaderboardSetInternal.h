/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSString, NSDictionary;

@interface GKLeaderboardSetInternal : GKInternalRepresentation  {
    NSString *_identifier;
    NSString *_groupIdentifier;
    NSString *_title;
    NSDictionary *_leaderboardIdentifiers;
    NSDictionary *_icons;
}

@property(retain) NSString * setIdentifier;
@property(retain) NSString * identifier;
@property(retain) NSString * groupIdentifier;
@property(retain) NSString * title;
@property(retain) NSDictionary * leaderboardIdentifiers;
@property(retain) NSDictionary * icons;

+ (id)secureCodedPropertyKeys;

- (void)setSetIdentifier:(id)arg1;
- (id)setIdentifier;
- (void)setLeaderboardIdentifiers:(id)arg1;
- (id)leaderboardIdentifiers;
- (void)setTitle:(id)arg1;
- (id)title;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)icons;
- (void)setIcons:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (id)groupIdentifier;

@end
