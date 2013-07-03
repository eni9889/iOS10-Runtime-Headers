/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSString, AVCaptureDeviceInternal, AVCaptureDeviceFormat;

@interface AVCaptureDevice : NSObject  {
    AVCaptureDeviceInternal *_internal;
}

@property(readonly) NSString * uniqueID;
@property(readonly) NSString * modelID;
@property(readonly) NSString * localizedName;
@property(getter=isConnected,readonly) BOOL connected;
@property(readonly) NSArray * formats;
@property(retain) AVCaptureDeviceFormat * activeFormat;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } activeVideoMinFrameDuration;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } activeVideoMaxFrameDuration;

+ (id)_devices;
+ (id)deviceWithUniqueID:(id)arg1;
+ (id)defaultDeviceWithMediaType:(id)arg1;
+ (id)devices;
+ (id)devicesWithMediaType:(id)arg1;

- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (BOOL)doesHandleNotification:(id)arg1;
- (void)setFigCaptureStreamFactoryTestProperty:(struct __CFString { }*)arg1 withValue:(void*)arg2 error:(id*)arg3;
- (void*)copyFigCaptureStreamFactoryTestProperty:(struct __CFString { }*)arg1 error:(id*)arg2;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)arg1;
- (BOOL)automaticallyEnablesLowLightBoostWhenAvailable;
- (BOOL)isLowLightBoostEnabled;
- (BOOL)isLowLightBoostSupported;
- (BOOL)isYoMamaWearsCombatBootsSupported;
- (BOOL)HDRUsesPreBracketedFrameAsEV0;
- (BOOL)isHDRSupported;
- (float)videoZoomUpsamplingThreshold;
- (void)cancelVideoZoomRamp;
- (BOOL)isRampingVideoZoom;
- (void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2;
- (void)setVideoZoomFactor:(float)arg1;
- (float)videoZoomFactor;
- (void)setSaturation:(float)arg1;
- (float)saturation;
- (void)setImageControlMode:(int)arg1;
- (int)imageControlMode;
- (void)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1;
- (BOOL)automaticallyAdjustsImageControlMode;
- (BOOL)isImageControlModeSupported:(int)arg1;
- (BOOL)isAdjustingWhiteBalance;
- (void)setWhiteBalanceTemperature:(float)arg1;
- (float)whiteBalanceTemperature;
- (void)setWhiteBalanceMode:(int)arg1;
- (int)whiteBalanceMode;
- (BOOL)isWhiteBalanceModeSupported:(int)arg1;
- (BOOL)isAdjustingExposure;
- (void)setExposurePointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })exposurePointOfInterest;
- (BOOL)isExposurePointOfInterestSupported;
- (void)setAutoExposureBias:(float)arg1;
- (float)autoExposureBias;
- (void)setManualExposureSupportEnabled:(BOOL)arg1;
- (BOOL)isManualExposureSupportEnabled;
- (void)setExposureGain:(float)arg1;
- (float)exposureGain;
- (void)setExposureDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exposureDuration;
- (void)setExposureMode:(int)arg1;
- (int)exposureMode;
- (BOOL)isExposureModeSupported:(int)arg1;
- (void)setSmoothAutoFocusEnabled:(BOOL)arg1;
- (BOOL)isSmoothAutoFocusEnabled;
- (BOOL)isSmoothAutoFocusSupported;
- (void)setManualFocusSupportEnabled:(BOOL)arg1;
- (BOOL)isManualFocusSupportEnabled;
- (void)setFocusPosition:(float)arg1;
- (float)focusPosition;
- (void)setAutoFocusRangeRestriction:(int)arg1;
- (int)autoFocusRangeRestriction;
- (BOOL)isAutoFocusRangeRestrictionSupported;
- (void)setFocusPointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isAdjustingFocus;
- (struct CGPoint { float x1; float x2; })focusPointOfInterest;
- (BOOL)isFocusPointOfInterestSupported;
- (void)setFocusMode:(int)arg1;
- (int)focusMode;
- (BOOL)isFocusModeSupported:(int)arg1;
- (BOOL)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2;
- (void)setTorchMode:(int)arg1;
- (int)torchMode;
- (BOOL)isTorchActive;
- (BOOL)isTorchAvailable;
- (BOOL)isTorchModeSupported:(int)arg1;
- (float)torchLevel;
- (BOOL)hasTorch;
- (void)setFlashMode:(int)arg1;
- (int)flashMode;
- (BOOL)isFlashModeSupported:(int)arg1;
- (BOOL)isFlashActive;
- (BOOL)isFlashAvailable;
- (BOOL)hasFlash;
- (BOOL)open:(id*)arg1;
- (void)unlockForConfiguration;
- (BOOL)lockForConfiguration:(id*)arg1;
- (BOOL)isLockedForConfiguration;
- (struct OpaqueCMClock { }*)deviceClock;
- (void)_setActiveFormatAndFrameRatesForResolvedOptions:(id)arg1 sendingFrameRatesToFig:(BOOL)arg2;
- (void)setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActiveFormat:(id)arg1;
- (id)formats;
- (BOOL)isInUseByAnotherApplication;
- (BOOL)isMachineReadableCodeDetectionSupported;
- (void)setFaceDetectionDebugMetadataReportingEnabled:(BOOL)arg1;
- (BOOL)isFaceDetectionDebugMetadataReportingEnabled;
- (int)faceRectangleAngle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })faceRectangle;
- (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)arg1;
- (BOOL)isFaceDetectionDrivenImageProcessingEnabled;
- (BOOL)isFaceDetectionDuringVideoPreviewSupported;
- (BOOL)isFaceDetectionSupported;
- (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (BOOL)isSubjectAreaChangeMonitoringEnabled;
- (void)_sessionDidStart;
- (void)_sessionWillStart;
- (void)removeInput:(id)arg1;
- (BOOL)addInput:(id)arg1;
- (BOOL)supportsAVCaptureSessionPreset:(id)arg1;
- (BOOL)hasMediaType:(id)arg1;
- (id)modelID;
- (void)stopUsingDevice;
- (BOOL)startUsingDevice:(id*)arg1;
- (void)_stopUsingDevice;
- (BOOL)_startUsingDevice:(id*)arg1;
- (void)setActiveInput:(id)arg1;
- (id)activeInput;
- (BOOL)isConnected;
- (void)_setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMaxFrameDuration;
- (void)_setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)activeFormat;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMinFrameDuration;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (BOOL)isOpen;
- (id)uniqueID;
- (id)init;
- (void)close;
- (id)localizedName;
- (void)dealloc;
- (id)description;
- (id)session;
- (float)contrast;
- (void)setContrast:(float)arg1;
- (int)position;

@end
