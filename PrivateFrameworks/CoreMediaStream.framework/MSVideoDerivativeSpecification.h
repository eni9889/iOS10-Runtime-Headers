/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSString;

@interface MSVideoDerivativeSpecification : NSObject  {
    BOOL _useCellular;
    BOOL _powerRequired;
    float _bitRate;
    NSString *_videoType;
    unsigned int _mediaAssetType;
}

@property(readonly) BOOL useCellular;
@property(readonly) BOOL powerRequired;
@property(readonly) float bitRate;
@property(readonly) NSString * videoType;
@property(readonly) unsigned int mediaAssetType;

+ (id)videoDerivativeSpecificationsWithDictionaryArray:(id)arg1;

- (id)videoType;
- (float)bitRate;
- (BOOL)powerRequired;
- (BOOL)useCellular;
- (unsigned int)mediaAssetType;
- (id)initWithDictionary:(id)arg1;

@end
