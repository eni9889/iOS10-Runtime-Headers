/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLCorrelation, NSSQLRow;

@interface NSSQLAdapterOperation : NSObject  {
    unsigned int _adapterOperator;
    NSSQLRow *_row;
    NSSQLCorrelation *_correlation;
}


- (int)compareAdapterOperation:(id)arg1;
- (id)correlation;
- (void)setAdapterOperator:(unsigned int)arg1;
- (id)initWithAdapterOperator:(unsigned int)arg1 correlation:(id)arg2;
- (id)row;
- (id)_opString;
- (unsigned int)adapterOperator;
- (id)initWithAdapterOperator:(unsigned int)arg1 row:(id)arg2;
- (id)entity;
- (void)dealloc;
- (id)description;

@end
