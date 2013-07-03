/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString, NSMutableDictionary;

@interface MFOfflineCacheReplayContext : NSObject  {
    NSString *_selectedMailboxID;
    NSMutableDictionary *_translatedIDsByTemporaryID;
    NSMutableDictionary *_failureSnapshotsByTemporaryID;
}

@property(copy) NSString * selectedMailboxID;
@property(readonly) NSMutableDictionary * translatedIDsByTemporaryID;
@property(readonly) NSMutableDictionary * failureSnapshotsByTemporaryID;


- (id)failureSnapshotsByTemporaryID;
- (id)translatedIDsByTemporaryID;
- (void)setSelectedMailboxID:(id)arg1;
- (id)selectedMailboxID;
- (id)init;
- (void)dealloc;

@end
