/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDChart;

@interface CHDSeriesCollection : EDSortedCollection  {
    CHDChart *mChart;
}

+ (id)seriesCollectionWithChart:(id)arg1;

- (id)firstNonEmptySeries;
- (unsigned int)nonEmptySeriesCount;
- (id)initWithChart:(id)arg1;
- (unsigned int)addObject:(id)arg1;

@end
