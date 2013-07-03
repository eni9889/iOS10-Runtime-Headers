/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class AVMetadataItem, NSString, NSDictionary;

@interface MPTimedMetadata : NSObject  {
    AVMetadataItem *_metadataItem;
}

@property(readonly) NSString * key;
@property(readonly) NSString * keyspace;
@property(readonly) id value;
@property(readonly) double timestamp;
@property(readonly) NSDictionary * allMetadata;


- (id)allMetadata;
- (id)keyspace;
- (id)_initWithMetadataItem:(id)arg1;
- (double)timestamp;
- (id)init;
- (void).cxx_destruct;
- (id)value;
- (id)key;

@end
