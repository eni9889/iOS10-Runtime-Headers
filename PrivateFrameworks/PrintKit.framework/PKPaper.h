/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@class NSString, NSDictionary;

@interface PKPaper : NSObject  {
    NSString *name;
    NSString *_baseName;
    int width;
    int height;
    int leftMargin;
    int topMargin;
    int rightMargin;
    int bottomMargin;
    BOOL _isTransverse;
    NSDictionary *rollInfo;
}

@property(readonly) NSString * localizedName;
@property(retain) NSString * name;
@property(readonly) NSString * baseName;
@property(readonly) struct CGSize { float x1; float x2; } paperSize;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } imageableAreaRect;
@property(readonly) float imageableArea;
@property(readonly) BOOL isBorderless;
@property(readonly) BOOL isTransverse;
@property(readonly) BOOL isRoll;
@property(readonly) unsigned int minCutLength;
@property(readonly) unsigned int maxCutLength;
@property(readonly) NSString * mediaTypeName;
@property int width;
@property int height;
@property int leftMargin;
@property int topMargin;
@property int rightMargin;
@property int bottomMargin;
@property(readonly) int minHeight;
@property(readonly) int maxHeight;
@property(copy) NSDictionary * rollInfo;

+ (BOOL)willAdjustMarginsForDuplexMode:(id)arg1;
+ (id)genericWithName:(id)arg1;
+ (id)genericHagakiPaper;
+ (id)rollPaperWithAttributes:(id)arg1;
+ (id)genericLetterPaper;
+ (id)genericA4Paper;
+ (id)genericBorderlessWithName:(id)arg1;
+ (id)genericPRC32KPaper;
+ (id)generic3_5x5Paper;
+ (id)generic4x6Paper;
+ (id)genericA6Paper;
+ (BOOL)useMetric;
+ (id)documentPapers;
+ (id)photoPapers;

- (void)setHeight:(int)arg1;
- (void)setWidth:(int)arg1;
- (int)height;
- (int)width;
- (BOOL)isTransverse;
- (id)paperWithMarginsAdjustedForDuplexMode:(id)arg1;
- (struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; }*)createMediaColAndDoMargins:(BOOL)arg1;
- (BOOL)isBorderless;
- (float)imageableArea;
- (id)initWithPWGSize:(struct pwg_size_s { struct pwg_map_s { char *x_1_1_1; char *x_1_1_2; } x1; int x2; int x3; int x4; int x5; int x6; int x7; }*)arg1 localizedName:(id)arg2 codeName:(id)arg3;
- (id)localizedNameFromDimensions;
- (id)baseName;
- (void)addToMediaCol:(struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; }*)arg1;
- (id)nameWithoutSuffixes:(id)arg1;
- (void)setBottomMargin:(int)arg1;
- (void)setRightMargin:(int)arg1;
- (void)setTopMargin:(int)arg1;
- (void)setLeftMargin:(int)arg1;
- (id)rollInfo;
- (int)rightMargin;
- (int)leftMargin;
- (BOOL)isRoll;
- (int)bottomMargin;
- (int)topMargin;
- (id)cutToPWGLength:(int)arg1;
- (int)maxHeight;
- (int)minHeight;
- (void)setRollInfo:(id)arg1;
- (id)initWithWidth:(int)arg1 Height:(int)arg2 Left:(int)arg3 Top:(int)arg4 Right:(int)arg5 Bottom:(int)arg6 localizedName:(id)arg7 codeName:(id)arg8;
- (struct CGSize { float x1; float x2; })paperSize;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)name;
- (id)localizedName;
- (void)dealloc;
- (unsigned int)maxCutLength;
- (unsigned int)minCutLength;
- (id)mediaTypeName;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageableAreaRect;
- (id)cutToLength:(float)arg1;
- (void)setName:(id)arg1;

@end
