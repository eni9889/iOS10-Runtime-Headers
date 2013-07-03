/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSMutableArray;

@interface _GEOSearchAttributionListener : NSObject  {
    NSString *_identifier;
    unsigned int _version;
    NSMutableArray *_completionHandlers;
    NSMutableArray *_errorHandlers;
}

@property(readonly) NSString * identifier;
@property(readonly) unsigned int version;


- (id)initWithIdentifier:(id)arg1 version:(unsigned int)arg2;
- (void)addCompletionHandler:(id)arg1 errorHandler:(id)arg2;
- (void)handleError:(id)arg1;
- (void)handleInfo:(id)arg1 updatedManifest:(BOOL)arg2;
- (void)dealloc;
- (id)identifier;
- (unsigned int)version;

@end
