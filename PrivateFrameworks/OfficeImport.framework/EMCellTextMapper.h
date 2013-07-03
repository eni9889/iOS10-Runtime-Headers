/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDStyle, EDString;

@interface EMCellTextMapper : CMMapper  {
    EDString *edString;
    EDStyle *edStyle;
}


- (void)mapTextRunsAt:(id)arg1;
- (void)mapVerticalTextAt:(id)arg1 withState:(id)arg2 width:(double)arg3 height:(double)arg4;
- (void)mapAt:(id)arg1 withState:(id)arg2 columnWidth:(double)arg3 height:(double)arg4 spreadLeft:(BOOL)arg5;
- (id)initWithEDString:(id)arg1 style:(id)arg2 parent:(id)arg3;
- (double)contentWidth;

@end
