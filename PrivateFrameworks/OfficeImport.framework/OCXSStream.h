/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface OCXSStream : NSObject  {
    NSMutableArray *mLevelStack;
}


- (int)currentContextChildDepth;
- (BOOL)popLevel;
- (int)currentContextDepth;
- (BOOL)hasLevels;
- (void)pushLevel:(int)arg1 name:(const char *)arg2;
- (id)init;
- (void)dealloc;

@end
