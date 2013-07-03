/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSSet, NSString, CAWindowServerDisplay;

@interface CAWindowServerDisplay : NSObject  {
    void *_impl;
}

@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property float scale;
@property(readonly) NSString * name;
@property(readonly) NSString * deviceName;
@property(readonly) unsigned int displayId;
@property(readonly) NSString * uniqueId;
@property(readonly) unsigned int rendererFlags;
@property(readonly) NSSet * clones;
@property(readonly) CAWindowServerDisplay * cloneMaster;
@property(getter=isBlanked) BOOL blanked;
@property(copy) NSString * orientation;
@property float overscanAmount;
@property BOOL invertsColors;
@property float contrast;
@property float minimumRefreshRate;
@property float maximumRefreshRate;
@property float idealRefreshRate;
@property BOOL usesPreferredModeRefreshRate;
@property(copy) NSString * colorMode;
@property BOOL allowsVirtualModes;
@property(getter=isMirroringEnabled) BOOL mirroringEnabled;
@property int tag;
@property(copy) NSString * TVMode;
@property(copy) NSString * TVSignalType;


- (void)setOrientation:(id)arg1;
- (id)TVSignalType;
- (void)setTVSignalType:(id)arg1;
- (id)TVMode;
- (void)setTVMode:(id)arg1;
- (BOOL)usesPreferredModeRefreshRate;
- (void)setUsesPreferredModeRefreshRate:(BOOL)arg1;
- (float)idealRefreshRate;
- (void)setIdealRefreshRate:(float)arg1;
- (float)maximumRefreshRate;
- (void)setMaximumRefreshRate:(float)arg1;
- (float)minimumRefreshRate;
- (void)setMinimumRefreshRate:(float)arg1;
- (BOOL)invertsColors;
- (void)setInvertsColors:(BOOL)arg1;
- (void)setOverscanAmount:(float)arg1;
- (void)willUnblank;
- (BOOL)isBlanked;
- (void)setBlanked:(BOOL)arg1;
- (id)cloneMaster;
- (void)removeAllClones;
- (void)removeClone:(id)arg1;
- (void)addClone:(id)arg1;
- (id)clones;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromContextId:(unsigned int)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toContextId:(unsigned int)arg2;
- (unsigned int)taskPortOfContextId:(unsigned int)arg1;
- (unsigned int)clientPortOfContextId:(unsigned int)arg1;
- (unsigned int)clientPortAtPosition:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)contextIdAtPosition:(struct CGPoint { float x1; float x2; })arg1;
- (id)_initWithCADisplayServer:(struct Server { int (**x1)(); struct SpinLock { struct { int x_1_2_1; } x_2_1_1; } x2; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_3_1_1; } x3; struct Display {} *x4; struct __CFString {} *x5; struct ContextItem {} *x6; unsigned int x7; unsigned int x8; struct SpinLock { struct { int x_1_2_1; } x_9_1_1; } x9; struct PendingOperation {} *x10; struct Context {} *x11; struct Shape {} *x12; unsigned int x13; struct Context {} *x14; struct Renderer {} *x15; double x16; double x17; unsigned int x18 : 1; unsigned int x19 : 1; }*)arg1;
- (void)addClone:(id)arg1 options:(id)arg2;
- (unsigned int)rendererFlags;
- (BOOL)isMirroringEnabled;
- (void)setMirroringEnabled:(BOOL)arg1;
- (void)setAllowsVirtualModes:(BOOL)arg1;
- (BOOL)allowsVirtualModes;
- (void)setColorMode:(id)arg1;
- (id)colorMode;
- (void)update;
- (id)deviceName;
- (void)setScale:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)name;
- (void)invalidate;
- (void)dealloc;
- (id)description;
- (float)contrast;
- (id)uniqueId;
- (unsigned int)displayId;
- (float)overscanAmount;
- (int)tag;
- (void)setTag:(int)arg1;
- (void)setContrast:(float)arg1;
- (id)orientation;
- (float)scale;

@end
