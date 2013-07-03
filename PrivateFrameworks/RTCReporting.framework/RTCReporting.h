/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSObject<OS_dispatch_source>, NSObject<OS_dispatch_queue>, NSMutableDictionary;

@interface RTCReporting : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _logMsgHandler;

    NSObject<OS_dispatch_queue> *_reportingQueue;
    int _interval;
    int _frequency;
    NSObject<OS_dispatch_source> *_timer;
    unsigned int _sessionID;
    int _componentType;
    unsigned short _version;
    unsigned char _udid[41];
    NSArray *_frameworkList;
    NSMutableDictionary *_backendDict;
    NSMutableDictionary *_periodicServiceDict;
}

@property(copy) id logMsgHandler;

+ (BOOL)sendMsgToServer:(int)arg1 serverStoreBagName:(id)arg2 defaultSvrIP:(id)arg3 defaultSvrPort:(unsigned short)arg4 componentType:(int)arg5 version:(unsigned short)arg6 sessionID:(unsigned int)arg7 eventID:(unsigned short)arg8 method:(unsigned short)arg9 respCode:(unsigned short)arg10 dict:(id)arg11;

- (id)logMsgHandler;
- (BOOL)uploadFileWithName:(id)arg1;
- (int)getUploadflag;
- (BOOL)unregisterPeriodTask:(id)arg1 unservice_block:(id)arg2;
- (BOOL)registerPeriodicTask:(id)arg1 needToUpDate:(bool)arg2 needToReport:(bool)arg3 service_block:(id)arg4;
- (BOOL)stopLogTimerForSession;
- (BOOL)startLogTimerWithInterval:(int)arg1 reportingFrequency:(int)arg2 reportingMethod:(unsigned short)arg3 reportingStatus:(unsigned short)arg4;
- (void)sendMsgWithMethod:(unsigned short)arg1 respCode:(unsigned short)arg2 dict:(id)arg3;
- (BOOL)setReportToServer:(int)arg1 serverStoreBagName:(id)arg2 defaultSvrIP:(id)arg3 defaultSvrPort:(unsigned short)arg4 msgBlock:(id)arg5;
- (id)initWithSessionInfo:(int)arg1 version:(unsigned short)arg2 sessionID:(unsigned int)arg3;
- (void)MyPeriodicTask:(unsigned short)arg1 status:(unsigned short)arg2;
- (void)addFrameworkStatusToReportingDictionary:(id)arg1;
- (void)sendClientURLInfo:(id)arg1;
- (void)setLogMsgHandler:(id)arg1;
- (void)internSendMsgOfType:(int)arg1 method:(unsigned short)arg2 respCode:(unsigned short)arg3 dict:(id)arg4;
- (id)initWithSessionInfo:(int)arg1 version:(unsigned short)arg2 sessionID:(unsigned int)arg3 frameworksToCheck:(id)arg4;
- (void)dealloc;

@end
