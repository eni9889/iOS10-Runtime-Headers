/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEORequester;

@interface GEOVoltaireMapMatchProvider : NSObject <PBRequesterDelegate> {
    GEORequester *_requester;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _errorHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _finishedHandler;

    BOOL _cancelled;
}

@property(retain) GEORequester * requester;

+ (void)setUsePersistentConnection:(BOOL)arg1;
+ (id)providerURL;
+ (void)_resetURL;

- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)setRequester:(id)arg1;
- (id)requester;
- (void)cancelRequest;
- (void)startRequest:(id)arg1 finished:(id)arg2 error:(id)arg3;
- (id)init;
- (void)dealloc;

@end
