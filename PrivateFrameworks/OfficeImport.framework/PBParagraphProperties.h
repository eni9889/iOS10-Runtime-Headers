/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBParagraphProperties : NSObject  {
}

+ (void)readParagraphProperties:(id)arg1 paragraphPropertyRun:(struct PptParaRun { int x1; short x2; struct PptParaProperty { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 1; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; unsigned int x_1_2_10 : 1; unsigned int x_1_2_11 : 1; unsigned int x_1_2_12 : 1; unsigned int x_1_2_13 : 1; unsigned int x_1_2_14 : 1; unsigned int x_1_2_15 : 1; unsigned int x_1_2_16 : 1; unsigned int x_1_2_17 : 1; unsigned int x_1_2_18 : 1; unsigned int x_1_2_19 : 1; unsigned int x_1_2_20 : 1; unsigned int x_1_2_21 : 1; } x_3_1_1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 1; unsigned int x_3_1_5 : 1; unsigned int x_3_1_6 : 1; unsigned int x_3_1_7 : 1; unsigned int x_3_1_8 : 1; unsigned int x_3_1_9 : 1; unsigned int x_3_1_10 : 4; unsigned int x_3_1_11 : 2; unsigned short x_3_1_12; unsigned short x_3_1_13; short x_3_1_14; struct PptColor { struct CsColour { unsigned short x_1_3_1; unsigned short x_1_3_2; unsigned short x_1_3_3; unsigned short x_1_3_4; } x_15_2_1; int x_15_2_2; } x_3_1_15; short x_3_1_16; short x_3_1_17; short x_3_1_18; short x_3_1_19; short x_3_1_20; short x_3_1_21; struct ChVector<PptTab> {} *x_3_1_22; } x3; }*)arg2 bulletStyle:(struct PptParaProperty9 { struct { unsigned int x_1_1_1 : 1; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 1; } x1; short x2; boolx3; struct PptTextAutoNumberScheme { unsigned int x_4_1_1 : 6; short x_4_1_2; } x4; }*)arg3 state:(id)arg4;
+ (int)pptFontAlignWithOADTextFontAlign:(int)arg1;
+ (int)pptAlignmentTypeWithOADTextAlignType:(int)arg1;
+ (short)pptTextSpacingWithOADParaSpacing:(id)arg1 defaultPptParaSpacing:(short)arg2;
+ (void)readAlign:(id)arg1 pptAlignmentType:(int)arg2;
+ (void)writeTabStopsFromParagraphProperties:(id)arg1 toParagraphProperties:(struct PptParaProperty { struct { unsigned int x_1_1_1 : 1; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 1; unsigned int x_1_1_8 : 1; unsigned int x_1_1_9 : 1; unsigned int x_1_1_10 : 1; unsigned int x_1_1_11 : 1; unsigned int x_1_1_12 : 1; unsigned int x_1_1_13 : 1; unsigned int x_1_1_14 : 1; unsigned int x_1_1_15 : 1; unsigned int x_1_1_16 : 1; unsigned int x_1_1_17 : 1; unsigned int x_1_1_18 : 1; unsigned int x_1_1_19 : 1; unsigned int x_1_1_20 : 1; unsigned int x_1_1_21 : 1; } x1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 4; unsigned int x11 : 2; unsigned short x12; unsigned short x13; short x14; struct PptColor { struct CsColour { unsigned short x_1_2_1; unsigned short x_1_2_2; unsigned short x_1_2_3; unsigned short x_1_2_4; } x_15_1_1; int x_15_1_2; } x15; short x16; short x17; short x18; short x19; short x20; short x21; struct ChVector<PptTab> {} *x22; }*)arg2 state:(id)arg3;
+ (void)writeParagraphProperties:(id)arg1 paragraphProperties:(struct PptParaProperty { struct { unsigned int x_1_1_1 : 1; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 1; unsigned int x_1_1_8 : 1; unsigned int x_1_1_9 : 1; unsigned int x_1_1_10 : 1; unsigned int x_1_1_11 : 1; unsigned int x_1_1_12 : 1; unsigned int x_1_1_13 : 1; unsigned int x_1_1_14 : 1; unsigned int x_1_1_15 : 1; unsigned int x_1_1_16 : 1; unsigned int x_1_1_17 : 1; unsigned int x_1_1_18 : 1; unsigned int x_1_1_19 : 1; unsigned int x_1_1_20 : 1; unsigned int x_1_1_21 : 1; } x1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 4; unsigned int x11 : 2; unsigned short x12; unsigned short x13; short x14; struct PptColor { struct CsColour { unsigned short x_1_2_1; unsigned short x_1_2_2; unsigned short x_1_2_3; unsigned short x_1_2_4; } x_15_1_1; int x_15_1_2; } x15; short x16; short x17; short x18; short x19; short x20; short x21; struct ChVector<PptTab> {} *x22; }*)arg2 bulletStyle:(struct PptParaProperty9 { struct { unsigned int x_1_1_1 : 1; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 1; } x1; short x2; boolx3; struct PptTextAutoNumberScheme { unsigned int x_4_1_1 : 6; short x_4_1_2; } x4; }*)arg3 state:(id)arg4;
+ (void)readParagraphProperties:(id)arg1 paragraphProperty:(struct PptParaProperty { struct { unsigned int x_1_1_1 : 1; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 1; unsigned int x_1_1_8 : 1; unsigned int x_1_1_9 : 1; unsigned int x_1_1_10 : 1; unsigned int x_1_1_11 : 1; unsigned int x_1_1_12 : 1; unsigned int x_1_1_13 : 1; unsigned int x_1_1_14 : 1; unsigned int x_1_1_15 : 1; unsigned int x_1_1_16 : 1; unsigned int x_1_1_17 : 1; unsigned int x_1_1_18 : 1; unsigned int x_1_1_19 : 1; unsigned int x_1_1_20 : 1; unsigned int x_1_1_21 : 1; } x1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 4; unsigned int x11 : 2; unsigned short x12; unsigned short x13; short x14; struct PptColor { struct CsColour { unsigned short x_1_2_1; unsigned short x_1_2_2; unsigned short x_1_2_3; unsigned short x_1_2_4; } x_15_1_1; int x_15_1_2; } x15; short x16; short x17; short x18; short x19; short x20; short x21; struct ChVector<PptTab> {} *x22; }*)arg2 bulletStyle:(struct PptParaProperty9 { struct { unsigned int x_1_1_1 : 1; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 1; } x1; short x2; boolx3; struct PptTextAutoNumberScheme { unsigned int x_4_1_1 : 6; short x_4_1_2; } x4; }*)arg3 isMaster:(BOOL)arg4 state:(id)arg5;


@end
