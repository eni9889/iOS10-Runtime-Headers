/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class IDSBaseMessage, <FTMessageQueueDelegate>, NSArray, NSMutableArray;

@interface FTMessageQueue : NSObject  {
    NSMutableArray *_queue;
    NSMutableArray *_addDates;
    <FTMessageQueueDelegate> *_delegate;
}

@property(readonly) IDSBaseMessage * topMessage;
@property(readonly) int count;
@property(readonly) NSArray * messages;
@property <FTMessageQueueDelegate> * delegate;
@property(retain) NSMutableArray * _queue;
@property(retain) NSMutableArray * _addDates;


- (void)set_addDates:(id)arg1;
- (id)_addDates;
- (BOOL)removeMessage:(id)arg1;
- (BOOL)addMessage:(id)arg1;
- (id)dequeueTopMessage;
- (void)_setTimeout;
- (void)_clearTimeout;
- (void)_timeoutHit;
- (id)topMessage;
- (id)messages;
- (void)removeAllMessages;
- (void)set_queue:(id)arg1;
- (id)_queue;
- (id)init;
- (void)setDelegate:(id)arg1;
- (int)count;
- (void)dealloc;
- (id)delegate;

@end
