/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLSimulationManager : NSObject  {
    double _locationDistance;
    double _locationInterval;
    double _locationSpeed;
    int _locationRepeatBehavior;
    int _locationDeliveryBehavior;
}

@property int locationDeliveryBehavior;
@property double locationDistance;
@property double locationInterval;
@property double locationSpeed;
@property int locationRepeatBehavior;


- (int)locationDeliveryBehavior;
- (int)locationRepeatBehavior;
- (double)locationSpeed;
- (double)locationInterval;
- (double)locationDistance;
- (void)setSimulatedWifiPower:(BOOL)arg1;
- (void)stopWifiSimulation;
- (void)startWifiSimulation;
- (void)setWifiScanResults:(id)arg1;
- (void)setSimulatedCellRegistrationStatus:(BOOL)arg1;
- (void)stopCellSimulation;
- (void)startCellSimulation;
- (void)setSimulatedCell:(id)arg1;
- (void)clearSimulatedCells;
- (void)stopLocationSimulation;
- (void)startLocationSimulation;
- (void)appendSimulatedLocation:(id)arg1;
- (void)clearSimulatedLocations;
- (void)setLocationRepeatBehavior:(int)arg1;
- (void)setLocationSpeed:(double)arg1;
- (void)setLocationInterval:(double)arg1;
- (void)setLocationDistance:(double)arg1;
- (void)setLocationDeliveryBehavior:(int)arg1;
- (void)selectScenario:(id)arg1;
- (id)localizedNameForScenario:(id)arg1;
- (id)availableScenarios;
- (void)loadScenarioFromURL:(id)arg1;
- (id)scenariosPath;
- (void)flush;
- (id)init;

@end
