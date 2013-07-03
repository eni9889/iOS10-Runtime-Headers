/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, RadioStation;

@interface MPRadioStation : NSObject <NSCoding, NSCopying> {
    RadioStation *_station;
}

@property(readonly) long long uniqueIdentifier;
@property(readonly) NSString * localizedName;
@property(readonly) NSString * localizedDescription;


- (id)_station;
- (void)fetchArtworkWithCompletionBlock:(id)arg1;
- (id)initWithStation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localizedDescription;
- (id)localizedName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)uniqueIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
