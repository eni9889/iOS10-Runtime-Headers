/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSMutableArray, NSArray;

@interface AVCaptureMovieFileOutputInternal : NSObject  {
    NSMutableArray *recordingDelegatesArray;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } movieFragmentInterval;
    NSArray *metadata;
    BOOL sendLastVideoPreviewFrame;
}


- (id)init;
- (void)dealloc;

@end
