/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, SAMovieV2ShowtimeSnippet, NSString, SADistance;

@interface SAMovieV2TheaterShowtimeListCell : SADomainObject  {
}

@property BOOL bookable;
@property(copy) NSArray * displayableShowtimes;
@property(retain) SADistance * relativeDistance;
@property(retain) SAMovieV2ShowtimeSnippet * showtimeSnippet;
@property(copy) NSString * theaterName;

+ (id)theaterShowtimeListCellWithDictionary:(id)arg1 context:(id)arg2;
+ (id)theaterShowtimeListCell;

- (void)setTheaterName:(id)arg1;
- (id)theaterName;
- (void)setShowtimeSnippet:(id)arg1;
- (id)showtimeSnippet;
- (void)setRelativeDistance:(id)arg1;
- (id)relativeDistance;
- (void)setBookable:(BOOL)arg1;
- (BOOL)bookable;
- (void)setDisplayableShowtimes:(id)arg1;
- (id)displayableShowtimes;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
