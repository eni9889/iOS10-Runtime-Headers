/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary;

@interface EDGradientFill : EDFill  {
    int mType;
    NSMutableDictionary *mStops;
    double mDegree;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mFocusRect;
}

+ (id)gradientWithType:(int)arg1 degree:(double)arg2 focusRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 stops:(id)arg4 resources:(id)arg5;
+ (id)gradientWithType:(int)arg1 degree:(double)arg2 top:(double)arg3 bottom:(double)arg4 right:(double)arg5 left:(double)arg6 stops:(id)arg7 resources:(id)arg8;

- (id)initWithType:(int)arg1 degree:(double)arg2 focusRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 stops:(id)arg4 resources:(id)arg5;
- (id)initWithType:(int)arg1 degree:(double)arg2 top:(double)arg3 bottom:(double)arg4 right:(double)arg5 left:(double)arg6 stops:(id)arg7 resources:(id)arg8;
- (id)colorForStopAtPosition:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })focusRect;
- (id)stops;
- (double)degree;
- (BOOL)isEqualToGradientFill:(id)arg1;
- (void)setStopColor:(id)arg1 atPosition:(id)arg2;
- (void)setStops:(id)arg1;
- (void)setFocusRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDegree:(double)arg1;
- (id)initWithResources:(id)arg1;
- (void)setType:(int)arg1;
- (bool)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;

@end
