/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface _MLClientCompletionBlockWrapper : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _libraryCompletionHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _transactionCompletionHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _queryCompletionHandler;

}

@property(copy) id libraryCompletionHandler;
@property(copy) id transactionCompletionHandler;
@property(copy) id queryCompletionHandler;

+ (id)emptyClientCompletionBlock;
+ (id)clientCompletionBlockWithQueryResultHandler:(id)arg1;
+ (id)clientCompletionBlockWithTransactionHandler:(id)arg1;
+ (id)clientCompletionBlockWithLibraryHandler:(id)arg1;

- (void)setQueryCompletionHandler:(id)arg1;
- (void)setTransactionCompletionHandler:(id)arg1;
- (void)setLibraryCompletionHandler:(id)arg1;
- (id)queryCompletionHandler;
- (id)transactionCompletionHandler;
- (id)libraryCompletionHandler;
- (void).cxx_destruct;

@end
