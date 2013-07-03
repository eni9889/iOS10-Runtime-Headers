/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKLabel, UIButton, GKMultiplayerParticipant;

@interface GKMultiplayerCollectionViewCell : UICollectionViewCell  {
    GKMultiplayerParticipant *_participant;
    UIButton *_addButton;
    UIButton *_removeButton;
    GKLabel *_nameLabel;
    GKLabel *_statusLabel;
}

@property(copy) GKMultiplayerParticipant * participant;
@property BOOL removable;
@property(retain) UIButton * addButton;
@property(retain) UIButton * removeButton;
@property(retain) GKLabel * nameLabel;
@property(retain) GKLabel * statusLabel;

+ (id)reuseIdentifier;

- (id)addButton;
- (void)setNameLabel:(id)arg1;
- (void)setStatusLabel:(id)arg1;
- (id)nameLabel;
- (void)setRemoveButton:(id)arg1;
- (id)removeButton;
- (void)setAddButton:(id)arg1;
- (BOOL)removable;
- (void)participantChanged;
- (void)removePressed;
- (void)addPressed;
- (void)setRemovable:(BOOL)arg1;
- (id)participant;
- (void)setParticipant:(id)arg1;
- (id)statusLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)description;
- (void)prepareForReuse;

@end
