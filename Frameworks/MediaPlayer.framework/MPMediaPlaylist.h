/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;

@interface MPMediaPlaylist : MPMediaItemCollection  {
}

@property(readonly) unsigned long long persistentID;
@property(readonly) NSString * name;
@property(readonly) int playlistAttributes;

+ (BOOL)_isValidPlaylistProperty:(id)arg1;
+ (BOOL)canFilterByProperty:(id)arg1;
+ (void)_createFilterableDictionary;

- (BOOL)existsInLibrary;
- (int)playlistAttributes;
- (id)loadGeniusMixArtworkWithTileLength:(float)arg1 completionBlock:(id)arg2;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (id)representativeItem;
- (unsigned long long)persistentID;
- (id)items;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)name;
- (unsigned int)count;
- (unsigned int)mediaTypes;
- (id)valueForProperty:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
