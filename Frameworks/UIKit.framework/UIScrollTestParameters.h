/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, CADisplayLink;

@interface UIScrollTestParameters : NSObject  {
    int _iterations;
    int _yDelta;
    int _scrollLength;
    float _startOffset;
    NSString *_currentTest;
    CADisplayLink *_displayLink;
}

@property int iterations;
@property int yDelta;
@property int scrollLength;
@property float startOffset;
@property(readonly) float endOffset;
@property(retain) NSString * currentTest;
@property(retain) CADisplayLink * displayLink;


- (float)endOffset;
- (float)startOffset;
- (void)dealloc;
- (void)setStartOffset:(float)arg1;
- (void)setScrollLength:(int)arg1;
- (void)setCurrentTest:(id)arg1;
- (void)setIterations:(int)arg1;
- (int)iterations;
- (void)setYDelta:(int)arg1;
- (int)yDelta;
- (int)scrollLength;
- (id)currentTest;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (id)initWithName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 startOffset:(float)arg5;

@end
