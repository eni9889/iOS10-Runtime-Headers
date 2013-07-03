/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, MPAudioDeviceController;

@interface MPAudioVideoRoutingTableViewController : UITableViewController <MPAudioDeviceControllerDelegate> {
    int _airPlayPasswordAlertDidAppearToken;
    BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
    int _airPlayPasswordAlertDidCancelToken;
    MPAudioDeviceController *_audioDeviceController;
    unsigned int _avItemType;
    BOOL _displayMirroringRoutes;
    NSArray *_displayedRoutes;
    BOOL _wirelessDisplayCapableRouteIsPicked;
    BOOL _wirelessDisplayRouteIsPendingAsPicked;
}

@property(readonly) MPAudioDeviceController * audioDeviceController;

+ (id)routesPreferringMirroring;

- (void)_mirroringSwitchValueDidChange:(id)arg1;
- (id)_effectivePickedRouteReturningActualPickedRouteType:(int*)arg1;
- (BOOL)_wirelessDisplayCapableRouteIsPicked;
- (id)initWithType:(unsigned int)arg1 displayMirroringRoutes:(BOOL)arg2;
- (id)_displayedRoutes;
- (void)_debugButtonAction:(id)arg1;
- (id)_availableRoutes;
- (id)_pickedRoute;
- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;
- (id)audioDeviceController;
- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;

@end
