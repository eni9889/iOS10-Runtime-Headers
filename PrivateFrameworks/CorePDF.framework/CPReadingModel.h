/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class NSString, NSAttributedString;

@interface CPReadingModel : NSObject  {
    long _count;
    struct { int x1; int x2; } *_textLineRanges;
    struct { int x1; int x2; } *_stringLineRanges;
    int *_pageNumbers;
    struct { 
        int location; 
        int length; 
    } _pageRange;
    struct CGPDFDocument { } *_document;
    long _numberOfLines;
    long _numberOfParagraphs;
    long _numberOfColumns;
    long _numberOfLayoutAreas;
    NSString *_cachedString;
    NSAttributedString *_cachedAttributedString;
    long _pageNumber;
    long _pos;
}


- (unsigned int)addRangeForLine:(unsigned int)arg1 from:(unsigned int)arg2;
- (void)visitColumns:(struct CGPDFNode { }*)arg1 completion:(id)arg2;
- (void)visitParagraphs:(struct CGPDFNode { }*)arg1 completion:(id)arg2;
- (void)visitTextLines:(struct CGPDFNode { }*)arg1 completion:(id)arg2;
- (void)incrementLineCount;
- (void)incrementColumnCount;
- (void)increamentLayoutAreaCount;
- (void)incrementParagraphCount;
- (void)addRange:(struct { int x1; int x2; })arg1;
- (int)lineIndexForPoint:(struct CGPoint { float x1; float x2; })arg1 onPage:(unsigned int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })pageRangeForStringRange:(struct { int x1; int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })stringRangeForTextRangeBUGGY:(struct { int x1; int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })stringRangeForTextRange:(struct { int x1; int x2; })arg1 onPageNumber:(unsigned int)arg2;
- (struct { int x1; int x2; })textRangeForStringRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pdfBoundsForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeForLine:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pdfBoundsForLine:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })textRangeForLine:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })stringRangeForLine:(unsigned int)arg1;
- (unsigned int)lineCount;
- (long)indexOfFirstLineOnPage:(unsigned int)arg1;
- (id)initWithDocument:(struct CGPDFDocument { }*)arg1 withPageRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)pageNumberForLine:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })linesForPage:(unsigned int)arg1;
- (struct { int x1; int x2; })mapStringRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pdfBoundsForNewLine:(struct { int x1; int x2; })arg1;
- (unsigned int)lineForIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pdfBoundsForCursor:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)attributedStringForLine:(unsigned int)arg1;
- (id)stringForLine:(unsigned int)arg1;
- (void)stringLineRanges;
- (void)visitLayoutAreas:(struct CGPDFNode { }*)arg1 completion:(id)arg2;
- (void)buildModel:(struct CGPDFDocument { }*)arg1 pageRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)buildModel:(struct CGPDFDocument { }*)arg1;
- (void)clearCache;
- (id)attributedStringForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)attributedString;
- (id)string;
- (void)dealloc;
- (id)initWithDocument:(struct CGPDFDocument { }*)arg1;
- (id)stringForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

@end
