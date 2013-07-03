/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class AVConferenceXPCClient, NSTimer, NSObject<AVConferenceDelegate>, NSDictionary, CALayer;

@interface AVConference : NSObject  {
    id weakAVConference;
    AVConferenceXPCClient *connection;
    id opaqueConf;
    BOOL useServer;
    BOOL runningInServer;
    NSObject<AVConferenceDelegate> *delegate;
    NSDictionary *serverBag;
    CALayer *remoteLayerFront;
    CALayer *remoteLayerBack;
    CALayer *remoteSubLayerFront;
    CALayer *remoteSubLayerBack;
    BOOL shouldDisplayVideoInfoLayer;
    BOOL shouldDisplayVideoInfoLayer_;
    BOOL shouldDisplayNetworkQualityGraph_;
    NSTimer *networkQualityUpdateTimer_;
    CALayer *networkQualityGraphLayer_;
}

@property BOOL shouldDisplayNetworkQualityGraph;
@property BOOL shouldDisplayVideoInfoLayer;
@property(getter=isUsingViceroyBlobFormat) BOOL useViceroyBlobFormat;
@property NSObject<AVConferenceDelegate> * delegate;
@property(getter=isMicrophoneMuted) BOOL microphoneMuted;
@property(getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property(getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property(readonly) float outputMeterLevel;
@property(readonly) float inputMeterLevel;
@property BOOL requiresWifi;
@property(readonly) int localFrameHeight;
@property(readonly) int localFrameWidth;
@property(getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone;
@property(readonly) unsigned int natType;
@property(retain) CALayer * networkQualityGraphLayer;
@property(retain) NSTimer * networkQualityUpdateTimer;

+ (id)externalAddressForSelfConnectionBlob:(id)arg1;
+ (short)addressPointerFromBlob:(id)arg1;
+ (unsigned int)doBlockingConnectionCheck;
+ (unsigned int)doBlockingConnectionCheck:(BOOL)arg1;
+ (void)stopAudioSession;
+ (void)startAudioSession;
+ (void)setAudioSessionProperties:(id)arg1;
+ (void)refreshLoggingParameters;

- (BOOL)setServerInfo:(id)arg1;
- (void)serverReconnected;
- (void)setRemoteVideoLayerContentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 camera:(int)arg2;
- (void)setNetworkQualityGraphLayer:(id)arg1;
- (void)processCancelRelayRequest:(int)arg1 cancelDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
- (void)videoConference:(id)arg1 didChangeLocalVariablesForCallID:(unsigned long)arg2;
- (void)videoConference:(id)arg1 didReceiveARPLData:(id)arg2 forCallID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 withCallID:(unsigned long)arg2 networkHint:(BOOL)arg3;
- (void)videoConference:(id)arg1 videoQualityNotificationForCallID:(unsigned long)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
- (void)videoConference:(id)arg1 cancelRelayRequest:(unsigned long)arg2 requestDict:(id)arg3;
- (void)videoConference:(id)arg1 sendRelayUpdate:(unsigned long)arg2 updateDict:(id)arg3;
- (void)videoConference:(id)arg1 inititiateRelayRequest:(unsigned long)arg2 requestDict:(id)arg3;
- (void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 didRemoteScreenAttributesChange:(id)arg2 forCallID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 remoteVideoPaused:(BOOL)arg2 callID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 remoteAudioPaused:(BOOL)arg2 callID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 didRemoteVideoAttributesChange:(id)arg2 forCallID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned long)arg2;
- (void)videoConference:(id)arg1 remoteMediaStalled:(BOOL)arg2 callID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned long)arg2 error:(id)arg3 callMetadata:(id)arg4;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned long)arg2 error:(id)arg3;
- (void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned long)arg3 withUserInfo:(id)arg4 error:(id)arg5;
- (void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned long)arg3 error:(id)arg4;
- (int)remoteFrameWidthForCallID:(int)arg1;
- (int)remoteFrameHeightForCallID:(int)arg1;
- (void)stopNetworkQualityUpdateTimer;
- (BOOL)setAudioInputDevice:(id)arg1;
- (id)currentAudioInputDevice;
- (BOOL)getIsAudioPaused:(BOOL*)arg1 callID:(int)arg2 error:(id*)arg3;
- (void)setInputMeteringEnabled:(BOOL)arg1;
- (void)setLastActiveCallID:(int)arg1;
- (int)lastActiveCallID;
- (void)sendProtobuf:(id)arg1 withType:(int)arg2 forCallID:(int)arg3;
- (BOOL)startConnectionWithCallID:(int)arg1 usingInviteData:(id)arg2 isCaller:(BOOL)arg3 relayResponseDict:(id)arg4 didOriginateRelayRequest:(BOOL)arg5 capabilities:(id)arg6 error:(id*)arg7;
- (id)convertBlobtoNewBlob:(id)arg1;
- (id)convertBlobtoOldBlob:(id)arg1;
- (void)inviteDictionaryForCallID:(int)arg1 remoteInviteDictionary:(id)arg2 nonCellularCandidateTimeout:(double)arg3 block:(id)arg4 queue:(id)arg5;
- (void)sendARPLData:(id)arg1 toCallID:(int)arg2;
- (void)addGKSCallEvent:(id)arg1 sessionID:(id)arg2;
- (void)setSetSessionID:(id)arg1 forCallID:(int)arg2;
- (BOOL)isUsingViceroyBlobFormat;
- (void)processRelayUpdate:(int)arg1 updateDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
- (void)processRelayRequestResponse:(int)arg1 responseDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
- (unsigned int)doBlockingConnectionCheck;
- (void)setLocalScreenAttributes:(id)arg1;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (void)setConferenceOperatingMode:(int)arg1;
- (int)getConferenceOperatingMode;
- (BOOL)setPauseVideo:(BOOL)arg1 callID:(int)arg2 error:(id*)arg3;
- (BOOL)setPauseAudio:(BOOL)arg1 callID:(int)arg2 error:(id*)arg3;
- (unsigned int)natType;
- (BOOL)isSpeakerPhoneEnabled;
- (void)setEnableSpeakerPhone:(BOOL)arg1;
- (id)statsForCallID:(int)arg1;
- (double)roundTripTimeForCallID:(int)arg1;
- (double)localPacketLossRateForCallID:(int)arg1;
- (double)remotePacketLossRateForCallID:(int)arg1;
- (int)localFrameWidth;
- (int)localFrameHeight;
- (double)remoteBitrateForCallID:(int)arg1;
- (double)remoteFramerateForCallID:(int)arg1;
- (double)localBitrateForCallID:(int)arg1;
- (double)localFramerateForCallID:(int)arg1;
- (void*)remoteVideoBackLayer;
- (void*)remoteVideoLayer;
- (void)setNetworkQualityUpdateTimer:(id)arg1;
- (BOOL)updateNetworkQualityGraph;
- (id)networkQualityUpdateTimer;
- (float)networkQuality;
- (id)networkQualityGraphLayer;
- (BOOL)isMicrophoneMuted;
- (void)setMicrophoneMuted:(BOOL)arg1;
- (float)inputMeterLevel;
- (BOOL)getIsVideoPaused:(BOOL*)arg1 callID:(int)arg2 error:(id*)arg3;
- (float)outputMeterLevel;
- (BOOL)isInputMeteringEnabled;
- (void)setOutputMeteringEnabled:(BOOL)arg1;
- (BOOL)isOutputMeteringEnabled;
- (void)processRemoteIPChange:(id)arg1 callID:(int)arg2;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (void)setCallReport:(int)arg1 withReport:(id)arg2;
- (void)remoteCancelledCallID:(int)arg1;
- (void)stopCallID:(int)arg1;
- (BOOL)startConnectionWithCallID:(int)arg1 oldCallID:(int)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(BOOL)arg6 capabilities:(id)arg7 error:(id*)arg8;
- (void)updateCapabilities:(id)arg1;
- (void)startNetworkQualityUpdateTimer;
- (void)setRequiresWifi:(BOOL)arg1;
- (BOOL)requiresWifi;
- (double)networkQualityForCallID:(int)arg1;
- (void)setSessionID:(id)arg1 callID:(int)arg2;
- (void)setPeerCN:(id)arg1 callID:(int)arg2;
- (id)callMetadataForCallID:(int)arg1;
- (id)newRandomParticipantID;
- (void)warmupForCall;
- (void)setUseViceroyBlobFormat:(BOOL)arg1;
- (void)deregisterBlocksForVCNotifications;
- (void)setRemoteVideoBackLayer:(void*)arg1;
- (void)setRemoteVideoLayer:(void*)arg1;
- (void)stopListeningForNotifications;
- (int)initializeNewCall;
- (void)listenForNotifications;
- (void)registerBlocksForVCNotifications;
- (void)serverDied;
- (BOOL)shouldDisplayVideoInfoLayer;
- (void)setShouldDisplayVideoInfoLayer:(BOOL)arg1;
- (BOOL)shouldDisplayNetworkQualityGraph;
- (void)setShouldDisplayNetworkQualityGraph:(BOOL)arg1;
- (void)updateGKSConnectivitySettings;
- (void)handleGKSConnectivitySettingsUpdate:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)setActive:(BOOL)arg1;

@end
