/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVCaptureFileOutputRecordingDelegate><AVCaptureFileOutputPauseResumeDelegate>, NSURL, NSArray;

@interface AVCaptureFileOutputDelegateWrapper : NSObject  {
    <AVCaptureFileOutputRecordingDelegate><AVCaptureFileOutputPauseResumeDelegate> *_delegate;
    NSURL *_outputFileURL;
    BOOL _receivedDidStartRecording;
    BOOL _receivedDidStopRecording;
    long _didStopRecordingError;
    NSArray *_metadata;
    NSArray *_connections;
}

@property(readonly) NSURL * outputFileURL;
@property(retain) NSArray * metadata;
@property(readonly) <AVCaptureFileOutputRecordingDelegate><AVCaptureFileOutputPauseResumeDelegate> * delegate;
@property(readonly) NSArray * connections;
@property BOOL receivedDidStartRecording;
@property BOOL receivedDidStopRecording;
@property long didStopRecordingError;

+ (id)wrapperWithURL:(id)arg1 delegate:(id)arg2 connections:(id)arg3;

- (id)connections;
- (void)setDidStopRecordingError:(long)arg1;
- (long)didStopRecordingError;
- (void)setReceivedDidStopRecording:(BOOL)arg1;
- (BOOL)receivedDidStopRecording;
- (void)setReceivedDidStartRecording:(BOOL)arg1;
- (BOOL)receivedDidStartRecording;
- (id)outputFileURL;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 connections:(id)arg3;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)dealloc;
- (id)delegate;

@end
