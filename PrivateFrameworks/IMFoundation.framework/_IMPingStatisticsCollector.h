/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSMutableString, _IMPingPacketData, NSMutableArray, IMPingStatistics;

@interface _IMPingStatisticsCollector : NSObject  {
    _IMPingPacketData *_timestampArray[160];
    NSMutableArray *_roundTriptimes;
    NSMutableString *_stringToWriteToFile;
    IMPingStatistics *_stats;
}


- (id)pingStatsForLastNSeconds:(double)arg1;
- (BOOL)logStatsToFile:(id)arg1 error:(id*)arg2;
- (void)timeoutOldSequenceNumbers:(double)arg1;
- (void)addEchoReplyPacket:(int)arg1;
- (struct timeval { int x1; int x2; })timeSentForPacket:(int)arg1;
- (void)addEchoPacket:(int)arg1 packetTimestamp:(struct timeval { int x1; int x2; })arg2 error:(int)arg3;
- (double)_computeStandardDeviation:(id)arg1 numPings:(int)arg2 averageRTT:(double)arg3;
- (double)_computeMedianTime:(id)arg1;
- (id)pingStats;
- (id)init;
- (void)dealloc;

@end
