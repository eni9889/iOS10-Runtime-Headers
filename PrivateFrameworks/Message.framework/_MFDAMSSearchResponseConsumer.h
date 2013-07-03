/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFConditionLock, NSArray, NSDate, NSMutableArray;

@interface _MFDAMSSearchResponseConsumer : _MFDAMSBasicConsumer <DASearchQueryConsumer> {
    NSDate *latestDateToAdd;
    MFConditionLock *doneCondition;
    double timeReceivedLastResponse;
    unsigned int totalCount;
    NSMutableArray *matchingRemoteIDs;
}

@property(retain) NSDate * latestDateToAdd;
@property(readonly) NSArray * matchingRemoteIDs;


- (id)latestDateToAdd;
- (void)searchQuery:(id)arg1 returnedTotalCount:(id)arg2;
- (id)matchingRemoteIDs;
- (void)resetDoneCondition;
- (void)setLatestDateToAdd:(id)arg1;
- (void)waitUntilDone;
- (BOOL)waitUntilDoneBeforeDate:(id)arg1;
- (BOOL)handleItems:(id)arg1;
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (void)dealloc;

@end
