/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSValue;

@interface SUScrollRequest : NSObject  {
    BOOL _animated;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    NSValue *_contentOffsetValue;
    NSValue *_frameValue;
}

@property(getter=isAnimated) BOOL animated;
@property(copy) id completionHandler;
@property(retain) NSValue * contentOffsetValue;
@property(retain) NSValue * frameValue;


- (id)frameValue;
- (id)contentOffsetValue;
- (void)setContentOffsetValue:(id)arg1;
- (void)setFrameValue:(id)arg1;
- (void)setAnimated:(BOOL)arg1;
- (void)dealloc;
- (BOOL)isAnimated;
- (void)setCompletionHandler:(id)arg1;
- (id)completionHandler;

@end
