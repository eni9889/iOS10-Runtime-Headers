/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColorMap, OADTextListStyle, NSMutableArray, OADTheme;

@interface PDSlideMaster : PDSlideBase  {
    NSMutableArray *mSlideLayouts;
    OADTheme *mTheme;
    OADColorMap *mColorMap;
    OADTextListStyle *mTitleTextStyle;
    OADTextListStyle *mBodyTextStyle;
    OADTextListStyle *mOtherTextStyle;
    BOOL mHeaderPlaceholderIsVisible;
    BOOL mFooterPlaceholderIsVisible;
    BOOL mSlideNumberPlaceholderIsVisible;
    BOOL mDateTimePlaceholderIsVisible;
}

@property(retain) NSMutableArray * slideLayouts;
@property BOOL headerPlaceholderIsVisible;
@property BOOL footerPlaceholderIsVisible;
@property BOOL slideNumberPlaceholderIsVisible;
@property BOOL dateTimePlaceholderIsVisible;


- (BOOL)dateTimePlaceholderIsVisible;
- (BOOL)slideNumberPlaceholderIsVisible;
- (BOOL)footerPlaceholderIsVisible;
- (BOOL)headerPlaceholderIsVisible;
- (id)slideLayouts;
- (id)initWithDefaultsAndTheme:(id)arg1;
- (id)otherTextStyle;
- (BOOL)hasMappableSlideNumberShape;
- (void)addSlideLayout:(id)arg1;
- (void)setSlideLayouts:(id)arg1;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextStyleForTables;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)bodyTextStyle;
- (id)titleTextStyle;
- (void)setOtherTextStyle:(id)arg1;
- (void)setBodyTextStyle:(id)arg1;
- (void)setTitleTextStyle:(id)arg1;
- (id)slideLayoutOfType:(int)arg1;
- (id)addSlideLayout;
- (id)slideLayoutAtIndex:(unsigned int)arg1;
- (unsigned int)slideLayoutCount;
- (void)setSlideNumberPlaceholderIsVisible:(BOOL)arg1;
- (void)setDateTimePlaceholderIsVisible:(BOOL)arg1;
- (void)setFooterPlaceholderIsVisible:(BOOL)arg1;
- (void)setHeaderPlaceholderIsVisible:(BOOL)arg1;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)drawingTheme;
- (void)doneWithContent;
- (id)parentSlideBase;
- (id)fontScheme;
- (id)defaultTheme;
- (id)styleMatrix;
- (id)colorScheme;
- (void)setTheme:(id)arg1;
- (id)theme;
- (id)colorMap;
- (id)init;
- (void)dealloc;

@end
