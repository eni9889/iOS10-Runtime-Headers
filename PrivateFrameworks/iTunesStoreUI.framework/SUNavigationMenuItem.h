/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSURL, NSString, SUItemContentRating;

@interface SUNavigationMenuItem : NSObject <NSCopying> {
    SUItemContentRating *_contentRating;
    NSString *_title;
    NSURL *_url;
}

@property(readonly) SUItemContentRating * contentRating;
@property(readonly) NSString * title;
@property(readonly) NSURL * URL;


- (id)contentRating;
- (id)title;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)URL;
- (id)initWithDictionary:(id)arg1;

@end
