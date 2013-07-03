/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray, NSLock;

@interface SUScriptOperationDelegate : NSObject <ISOperationDelegate> {
    NSMutableArray *_operations;
    NSLock *_lock;
}


- (void)_removeOperation:(id)arg1;
- (void)enqueueOperation:(id)arg1;
- (void)operationFinished:(id)arg1;
- (void)cancelAllOperations;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)dealloc;

@end
