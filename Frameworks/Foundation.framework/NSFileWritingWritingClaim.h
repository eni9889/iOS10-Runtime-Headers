/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURL, NSFileAccessNode;

@interface NSFileWritingWritingClaim : NSFileAccessClaim  {
    NSURL *_url1;
    BOOL _url1DidChange;
    unsigned int _options1;
    NSURL *_url2;
    BOOL _url2DidChange;
    unsigned int _options2;
    NSFileAccessNode *_location1;
    NSFileAccessNode *_location2;
}


- (void)dealloc;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2;
- (void)forwardUsingMessageSender:(id)arg1 crashHandler:(id)arg2;
- (id)initWithClient:(id)arg1 messageParameters:(id)arg2 replySender:(id)arg3;
- (void)devalueSelf;
- (BOOL)blocksClaim:(id)arg1;
- (void)invokeClaimer;
- (void)granted;
- (id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned int)arg3 url:(id)arg4 options:(unsigned int)arg5 claimer:(id)arg6;

@end
