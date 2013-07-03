/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CPProgressStage, NSString, CPProgressContext;

@interface CPProgressStage : NSObject  {
    double m_currentPosition;
    double m_totalSteps;
    double m_stepsInParent;
    NSString *m_name;
    CPProgressStage *m_parentStage;
    CPProgressContext *m_context;
}


- (id)initRootStageInContext:(id)arg1;
- (void)advanceProgress:(double)arg1;
- (id)initBranchWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 inContext:(id)arg4;
- (id)parentStage;
- (id)initWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 inContext:(id)arg4;
- (double)currentPosition;
- (void)dealloc;
- (void)end;
- (void)setProgress:(double)arg1;

@end
