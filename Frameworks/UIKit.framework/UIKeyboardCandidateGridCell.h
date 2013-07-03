/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIKeyboardCandidateGridCell : UICollectionViewCell  {
    BOOL _showsCandidateNumber;
    BOOL _dummy;
    BOOL _usesGroupHeaderAppearance;
    NSString *_text;
    NSString *_alternativeText;
    unsigned int _candidateNumber;
    int _edges;
    float _rowHeight;
    float _rightPadding;
    int _visualStyle;
    int _textAlignment;
    float _cellPadding;
    float _minimumWidth;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    struct CGSize { 
        float width; 
        float height; 
    } _candidateNumberSize;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _visibleBounds;
}

@property BOOL dummy;
@property BOOL usesGroupHeaderAppearance;
@property(copy) NSString * text;
@property(copy) NSString * alternativeText;
@property unsigned int candidateNumber;
@property BOOL showsCandidateNumber;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleBounds;
@property int edges;
@property float rowHeight;
@property float rightPadding;
@property int visualStyle;
@property int textAlignment;
@property struct CGSize { float x1; float x2; } size;
@property struct CGSize { float x1; float x2; } candidateNumberSize;
@property float cellPadding;
@property float minimumWidth;
@property(readonly) BOOL canShowCandidateNumber;

+ (float)widthForCandidate:(id)arg1 candidateNumber:(unsigned int)arg2 visualStyle:(int)arg3;
+ (struct CGSize { float x1; float x2; })sizeForGroupHeader:(id)arg1 visualStyle:(int)arg2;
+ (float)rightPaddingForIndex;
+ (id)reuseIdentifier;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;
+ (void)_accessibilityPerformValidations:(id)arg1;

- (struct CGSize { float x1; float x2; })size;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)text;
- (id)alternativeText;
- (void)setAlternativeText:(id)arg1;
- (float)cellPadding;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)dealloc;
- (void)setCandidateNumberSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })candidateNumberSize;
- (void)drawText;
- (void)drawTextWithCandidateNumber;
- (BOOL)canShowCandidateNumber;
- (void)drawBackgroundAndBorders;
- (float)rightPadding;
- (void)setCandidateNumber:(unsigned int)arg1;
- (void)setCellPadding:(float)arg1;
- (void)setRightPadding:(float)arg1;
- (int)edges;
- (void)setUsesGroupHeaderAppearance:(BOOL)arg1;
- (void)setDummy:(BOOL)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setShowsCandidateNumber:(BOOL)arg1;
- (void)setVisibleBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)usesGroupHeaderAppearance;
- (unsigned int)candidateNumber;
- (BOOL)showsCandidateNumber;
- (BOOL)dummy;
- (int)visualStyle;
- (void)setVisualStyle:(int)arg1;
- (int)textAlignment;
- (void)setSelected:(BOOL)arg1;
- (void)prepareForReuse;
- (void)setTextAlignment:(int)arg1;
- (float)minimumWidth;
- (void)setMinimumWidth:(float)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleBounds;
- (void)setEdges:(int)arg1;
- (void)setText:(id)arg1;
- (float)rowHeight;
- (void)setRowHeight:(float)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLanguage;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)accessibilityHeaderElements;

@end
