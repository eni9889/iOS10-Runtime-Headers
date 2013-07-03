/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKMapItem, NSString, NSArray;

@interface MKSearchCompletion : NSObject  {
    NSString *_sourceID;
}

@property(readonly) NSArray * displayLines;
@property(readonly) MKMapItem * mapItem;
@property(copy) NSString * sourceID;


- (void)setSourceID:(id)arg1;
- (id)sourceID;
- (void)applyToPlaceSearchRequest:(id)arg1;
- (void)applyToLocalSearchRequest:(id)arg1;
- (id)mapItem;
- (void)sendFeedback;
- (id)iconWithScale:(float)arg1;
- (id)highlightsForLine:(unsigned int)arg1;
- (BOOL)getCoordinate:(struct { double x1; double x2; }*)arg1;
- (id)queryLine;
- (id)displayLines;
- (id)calloutTitle;
- (void)dealloc;
- (id)description;

@end
