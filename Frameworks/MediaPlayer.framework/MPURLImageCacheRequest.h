/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSURL;

@interface MPURLImageCacheRequest : MPImageCacheRequest  {
    NSURL *_url;
    BOOL _usePlaceholderAsFallback;
}

@property BOOL usePlaceholderAsFallback;


- (id)uniqueKey;
- (BOOL)usePlaceholderAsFallback;
- (id)copyRawImageReturningError:(id*)arg1;
- (void)setUsePlaceholderAsFallback:(BOOL)arg1;
- (id)placeholderImage;
- (id)initWithURL:(id)arg1;
- (void).cxx_destruct;

@end
