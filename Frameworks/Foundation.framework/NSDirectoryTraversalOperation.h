/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSError, NSString, NSMutableArray;

@interface NSDirectoryTraversalOperation : NSOperation  {
    id _delegate;
    NSString *_sourcePath;
    NSError *_error;
    void *_stream;
    int _optionsFlags;
    int _lastDeviceInode;
    BOOL _shouldFilterUnderbars;
    BOOL _stopped;
    NSMutableArray *_deviceEntryPoints;
    NSMutableArray *_deviceNumbers;
}

+ (id)directoryTraversalOperationAtPath:(id)arg1;
+ (id)_errorWithErrno:(int)arg1 atPath:(id)arg2;
+ (BOOL)_needsStatInfo;

- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)error;
- (void)main;
- (void)_handleFTSEntry:(struct _ftsent { struct _ftsent {} *x1; struct _ftsent {} *x2; struct _ftsent {} *x3; long x4; void *x5; char *x6; char *x7; int x8; int x9; unsigned short x10; unsigned short x11; unsigned long long x12; int x13; unsigned short x14; short x15; unsigned short x16; unsigned short x17; unsigned short x18; struct stat {} *x19; BOOL x20[1]; }*)arg1;
- (BOOL)_validatePaths:(id*)arg1;
- (void)_setError:(id)arg1;
- (BOOL)shouldProceedAfterError:(id)arg1;
- (void)handlePathname:(id)arg1;
- (BOOL)_shouldFilterEntry:(struct _ftsent { struct _ftsent {} *x1; struct _ftsent {} *x2; struct _ftsent {} *x3; long x4; void *x5; char *x6; char *x7; int x8; int x9; unsigned short x10; unsigned short x11; unsigned long long x12; int x13; unsigned short x14; short x15; unsigned short x16; unsigned short x17; unsigned short x18; struct stat {} *x19; BOOL x20[1]; }*)arg1;
- (id)initWithPath:(id)arg1;

@end
