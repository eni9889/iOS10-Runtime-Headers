/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class <GKMatchmakerViewControllerDelegate>, GKMatchRequest, NSMutableArray, GKHostedMatchmakerViewController, GKMatch, NSString, GKInvite, GKRemoteMatchmakerViewController;

@interface GKMatchmakerViewController : UINavigationController <GKMatchDelegate> {
    BOOL _hosted;
    <GKMatchmakerViewControllerDelegate> *_matchmakerDelegateWeak;
    GKMatchRequest *_matchRequest;
    GKHostedMatchmakerViewController *_hostedViewController;
    GKRemoteMatchmakerViewController *_remoteViewController;
    GKInvite *_acceptedInvite;
    GKMatch *_match;
    NSMutableArray *_hostedPlayerIDs;
}

@property <GKMatchmakerViewControllerDelegate> * matchmakerDelegate;
@property(retain) GKMatchRequest * matchRequest;
@property(getter=isHosted) BOOL hosted;
@property(copy) NSString * defaultInvitationMessage;
@property(retain) GKHostedMatchmakerViewController * hostedViewController;
@property(retain) GKRemoteMatchmakerViewController * remoteViewController;
@property(retain) GKInvite * acceptedInvite;
@property(retain) GKMatch * match;
@property(retain) NSMutableArray * hostedPlayerIDs;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (void)sendData:(id)arg1;
- (void)setHostedPlayerIDs:(id)arg1;
- (id)hostedPlayerIDs;
- (void)match:(id)arg1 connectionWithPlayerFailed:(id)arg2 withError:(id)arg3;
- (void)startMatchingWithRequest:(id)arg1;
- (void)setHostedPlayerReady:(id)arg1;
- (void)addPlayersToMatch:(id)arg1;
- (id)initWithInvite:(id)arg1;
- (void)setMatchmakerDelegate:(id)arg1;
- (void)cancelInviteToPlayer:(id)arg1;
- (void)invitedPlayer:(id)arg1 responded:(int)arg2;
- (void)finishWithPlayers;
- (void)finishWithMatch;
- (id)matchmakerDelegate;
- (void)setHostedPlayer:(id)arg1 connected:(BOOL)arg2;
- (void)createMatchForAcceptedInvite;
- (void)inviterCancelledNotification:(id)arg1;
- (void)setupNotifications;
- (void)setBrowsingForNearbyPlayers:(BOOL)arg1;
- (void)setMatchRequest:(id)arg1;
- (id)remoteViewController;
- (void)setHostedViewController:(id)arg1;
- (id)hostedViewController;
- (void)authenticationChanged:(id)arg1;
- (void)_setupChildViewController;
- (id)acceptedInvite;
- (void)setHosted:(BOOL)arg1;
- (void)setDefaultInvitationMessage:(id)arg1;
- (id)defaultInvitationMessage;
- (id)initWithMatchRequest:(id)arg1;
- (id)matchRequest;
- (void)playersToInvite:(id)arg1;
- (void)setMatch:(id)arg1;
- (id)match;
- (void)localPlayerAcceptedGameInvite:(id)arg1;
- (void)match:(id)arg1 didFailWithError:(id)arg2;
- (void)match:(id)arg1 player:(id)arg2 didChangeState:(int)arg3;
- (void)match:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3;
- (void)setAcceptedInvite:(id)arg1;
- (BOOL)isHosted;
- (void)finishWithError:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)setRemoteViewController:(id)arg1;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)applicationWillEnterForeground:(id)arg1;

@end
