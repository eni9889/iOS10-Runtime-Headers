/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableData, NSData;

@interface SUBufferDataConsumer : NSObject <SUCollectingDataConsumer> {
    NSMutableData *_dataBuffer;
}

@property(readonly) NSData * consumedData;


- (id)mutableConsumedData;
- (int)consumeData:(id)arg1;
- (id)consumedData;
- (id)init;
- (void)dealloc;
- (void)finish;

@end
