/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface GEOSearchProvider : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _error;

}

@property(copy) id error;

+ (unsigned short)provider;

- (void)search:(id)arg1 timeout:(int)arg2 useBackgroundConnection:(BOOL)arg3 finished:(id)arg4 spellingSuggestion:(id)arg5 refinement:(id)arg6 error:(id)arg7 isCompletions:(BOOL)arg8;
- (void)dealloc;
- (void)cancel;
- (void)setError:(id)arg1;
- (id)error;

@end
