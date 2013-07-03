/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TSUProgressStage, TSUProgressContext;

@interface TSUProgressStage : NSObject  {
    double m_currentPosition;
    double m_totalSteps;
    double m_stepsInParent;
    double m_startInParent;
    double m_nextSubStageParentSize;
    TSUProgressStage *m_parentStage;
    TSUProgressContext *m_context;
}


- (double)overallProgress;
- (void)setProgressPercentage:(double)arg1;
- (void)setNextSubStageParentSize:(double)arg1;
- (double)nextSubStageParentSize;
- (id)initWithSteps:(double)arg1 takingSteps:(double)arg2 inContext:(id)arg3;
- (id)initRootStageInContext:(id)arg1;
- (void)advanceProgress:(double)arg1;
- (id)parentStage;
- (double)currentPosition;
- (void)dealloc;
- (id)description;
- (void)end;
- (void)setProgress:(double)arg1;

@end
