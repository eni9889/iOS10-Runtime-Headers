/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKMacGameIconBrush : GKImageBrush <GKBrushIdentification> {
    struct CGSize { 
        float width; 
        float height; 
    } _outputSize;
}

@property struct CGSize { float x1; float x2; } outputSize;


- (void)setOutputSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })outputSize;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (struct CGSize { float x1; float x2; })sizeForInput:(id)arg1;
- (id)renderedImageIdentifier;

@end
