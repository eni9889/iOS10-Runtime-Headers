/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, <AVCaptureMetadataOutputObjectsDelegate>, NSObject<OS_dispatch_queue>;

@interface AVCaptureMetadataOutputInternal : NSObject  {
    <AVCaptureMetadataOutputObjectsDelegate> *delegate;
    NSObject<OS_dispatch_queue> *clientQueue;
    NSArray *metadataObjectTypes;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } rectOfInterest;
}


- (void)dealloc;

@end
