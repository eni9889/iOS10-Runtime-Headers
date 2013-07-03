/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSArray, DOMRange, DOMNode, DOMDocument, NSMutableArray;

@interface MFMessageReformattingContext : NSObject  {
    DOMDocument *_document;
    DOMNode *_body;
    NSMutableArray *_changes;
    float _maximumWidth;
    float _meanWidth;
    float _widthDeviation;
    BOOL _hasAnyLeftFloat;
    NSArray *_rightFloats;
    BOOL _floatsNeedUpdate;
    BOOL _metricsNeedUpdate;
    BOOL _documentContainsAnyWebKitTransform;
    float _minimumRescalingFactor;
    DOMRange *_firstTextRange;
}

@property(readonly) BOOL hasAnyLeftFloat;
@property(readonly) BOOL hasAnyRightFloat;
@property(readonly) NSArray * rightFloats;
@property(readonly) float maximumWidth;
@property(readonly) float meanWidth;
@property(readonly) float widthDeviation;
@property float minimumRescalingFactor;
@property(readonly) DOMDocument * document;
@property(readonly) DOMNode * body;
@property(readonly) BOOL didChangeDocument;
@property(retain) DOMRange * firstTextRange;


- (void)_rollBackChange:(id)arg1;
- (BOOL)changeMarginOfElement:(id)arg1 priority:(id)arg2 usingBlock:(id)arg3;
- (void)changeProprety:(id)arg1 ofElement:(id)arg2 toValue:(id)arg3 priority:(id)arg4;
- (BOOL)changeSizeOfElement:(id)arg1 priority:(id)arg2 usingBlock:(id)arg3;
- (void)_updateMetricsIfNecessary;
- (void)_updateFloatsIfNecessary;
- (void)setMinimumRescalingFactor:(float)arg1;
- (BOOL)resizeElement:(id)arg1 withScale:(float)arg2 verificationBlock:(id)arg3;
- (void)setFirstTextRange:(id)arg1;
- (id)firstTextRange;
- (BOOL)rescaleElement:(id)arg1 withScale:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBoxOf:(id)arg1;
- (id)rightFloats;
- (BOOL)hasAnyLeftFloat;
- (float)meanWidth;
- (float)widthDeviation;
- (BOOL)didChangeDocument;
- (void)rollBackAllChanges;
- (void)rollBackLastChangeForElement:(id)arg1;
- (BOOL)hasAnyRightFloat;
- (float)minimumRescalingFactor;
- (id)document;
- (id)body;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;
- (float)maximumWidth;

@end
