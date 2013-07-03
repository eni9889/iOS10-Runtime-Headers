/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLResponse, NSURLRequest, NSString, NSError;

@interface NSURLSessionTask : NSObject <NSCopying> {
    unsigned int _taskIdentifier;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    NSURLResponse *_response;
    NSString *_taskDescription;
    int _state;
    NSError *_error;
    long long _countOfBytesReceived;
    long long _countOfBytesSent;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesExpectedToReceive;
}

@property(readonly) unsigned int taskIdentifier;
@property(readonly) NSURLRequest * originalRequest;
@property(readonly) NSURLRequest * currentRequest;
@property(readonly) NSURLResponse * response;
@property(readonly) long long countOfBytesReceived;
@property(readonly) long long countOfBytesSent;
@property(readonly) long long countOfBytesExpectedToSend;
@property(readonly) long long countOfBytesExpectedToReceive;
@property(copy) NSString * taskDescription;
@property(readonly) int state;
@property(readonly) NSError * error;

+ (void)initialize;

- (void)setTaskDescription:(id)arg1;
- (id)taskDescription;
- (long long)countOfBytesExpectedToSend;
- (long long)countOfBytesSent;
- (unsigned int)taskIdentifier;
- (long long)countOfBytesExpectedToReceive;
- (id)currentRequest;
- (long long)countOfBytesReceived;
- (id)response;
- (id)error;
- (id)originalRequest;
- (int)state;

@end
