/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSMutableDictionary;

@interface AVRecorderAudioQueueImpl : NSObject <AVRecorderImpl> {
    BOOL _isActive;
    BOOL _isRecording;
    BOOL _isWriting;
    NSMutableDictionary *_attributes;
    unsigned long _fileType;
    unsigned long _audioCodec;
    long long _maxPCMFramesToRecord;
    BOOL _haveRecordedMaxPCMFrames;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    } _recordingFormat;
    struct OpaqueAudioFileID { } *_audioFile;
    struct OpaqueAudioQueue { } *_audioQueue;
    unsigned long _numDeviceChannels;
    struct AudioQueueLevelMeterState { float x1; float x2; } *_audioLevels;
    struct AudioQueueLevelMeterState { float x1; float x2; } *_audioLevelsDB;
    unsigned long _totalBytesRecorded;
    unsigned long _totalPacketsRecorded;
    unsigned long _totalFramesRecorded;
    struct AudioQueueBuffer {} *_buffers[3];
    BOOL _bufferUsed[3];
}


- (void)haveABuffer:(struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)arg1 withTimeStamp:(const struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; }*)arg2 andNumPackets:(unsigned long)arg3 andPacketDescs:(const struct AudioStreamPacketDescription { long long x1; unsigned int x2; unsigned int x3; }*)arg4;
- (BOOL)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2 useDB:(BOOL)arg3;
- (void)copyEncoderCookieToFile;
- (BOOL)audioCurrentAverageDecibelLevels:(float*)arg1 andPeakDecibelLevels:(float*)arg2;
- (BOOL)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2;
- (unsigned int)audioNumDeviceChannels;
- (double)recordedDuration;
- (long long)recordedFileSizeInBytes;
- (void)setMicVolume:(float)arg1;
- (float)micVolume;
- (BOOL)autoFocusAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)takePhoto;
- (id)initWithAttributes:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (BOOL)activate:(id*)arg1;
- (BOOL)isRecording;
- (BOOL)isActive;
- (id)attributeForKey:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (void)deactivate;
- (void)stop;
- (BOOL)start;

@end
