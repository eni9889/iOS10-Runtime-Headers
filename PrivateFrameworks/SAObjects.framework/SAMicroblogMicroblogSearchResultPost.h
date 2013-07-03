/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, SAUIAppPunchOut, NSDate, SAMicroblogTwitterPostAuthor, NSURL;

@interface SAMicroblogMicroblogSearchResultPost : SAMicroblogMicroblogSearchResultBase  {
}

@property(copy) NSString * content;
@property(copy) NSDate * creationTime;
@property(copy) NSArray * embeddedHashtags;
@property(copy) NSArray * embeddedImages;
@property(copy) NSArray * embeddedLinks;
@property(copy) NSArray * embeddedMentions;
@property int favoritesCount;
@property(copy) NSString * location;
@property(retain) SAUIAppPunchOut * punchOut;
@property(retain) SAMicroblogTwitterPostAuthor * retweetAuthor;
@property int retweetCount;
@property(copy) NSURL * webAddress;

+ (id)microblogSearchResultPostWithDictionary:(id)arg1 context:(id)arg2;
+ (id)microblogSearchResultPost;

- (void)setRetweetCount:(int)arg1;
- (int)retweetCount;
- (void)setRetweetAuthor:(id)arg1;
- (id)retweetAuthor;
- (void)setFavoritesCount:(int)arg1;
- (int)favoritesCount;
- (void)setEmbeddedMentions:(id)arg1;
- (id)embeddedMentions;
- (void)setEmbeddedLinks:(id)arg1;
- (id)embeddedLinks;
- (void)setEmbeddedImages:(id)arg1;
- (id)embeddedImages;
- (void)setEmbeddedHashtags:(id)arg1;
- (id)embeddedHashtags;
- (void)setCreationTime:(id)arg1;
- (id)creationTime;
- (void)setWebAddress:(id)arg1;
- (id)webAddress;
- (void)setPunchOut:(id)arg1;
- (id)punchOut;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setContent:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)content;
- (id)groupIdentifier;

@end
