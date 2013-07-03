/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSocketPort : NSPort  {
    void *_receiver;
    id _connectors;
    void *_loops;
    void *_data;
    id _signature;
    id _delegate;
    id _lock;
    unsigned int _maxSize;
    unsigned int _useCount;
    unsigned int _reserved;
}

+ (void)initialize;
+ (void)_fixNSSocketPortLeak;
+ (BOOL)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned int)arg6 reserved:(unsigned int)arg7;

- (id)init;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)isValid;
- (void)invalidate;
- (void)finalize;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)description;
- (id)delegate;
- (void)_handleMessage:(struct __CFData { }*)arg1 from:(struct __CFData { }*)arg2 socket:(struct __CFSocket { }*)arg3;
- (id)initWithProtocolFamily:(int)arg1 socketType:(int)arg2 protocol:(int)arg3 socket:(int)arg4;
- (id)initRemoteWithTCPPort:(unsigned short)arg1 host:(id)arg2;
- (int)socket;
- (int)socketType;
- (int)protocolFamily;
- (struct __CFSocket { }*)_sendingSocketForPort:(id)arg1 beforeTime:(double)arg2;
- (id)signature;
- (id)_initWithRetainedCFSocket:(struct __CFSocket { }*)arg1 protocolFamily:(int)arg2 socketType:(int)arg3 protocol:(int)arg4;
- (id)_initRemoteWithSignature:(id)arg1;
- (void)handleConnDeath:(id)arg1;
- (void)_incrementUseCount;
- (id)initRemoteWithProtocolFamily:(int)arg1 socketType:(int)arg2 protocol:(int)arg3 address:(id)arg4;
- (id)initWithProtocolFamily:(int)arg1 socketType:(int)arg2 protocol:(int)arg3 address:(id)arg4;
- (id)initWithTCPPort:(unsigned short)arg1;
- (int)protocol;
- (BOOL)sendBeforeTime:(double)arg1 streamData:(void*)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5;
- (void)handlePortMessage:(id)arg1;
- (void)addConnection:(id)arg1 toRunLoop:(id)arg2 forMode:(id)arg3;
- (BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned int)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned int)arg5;
- (BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned int)arg4;
- (id)address;

@end
