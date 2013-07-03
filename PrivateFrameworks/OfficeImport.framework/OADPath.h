/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface OADPath : NSObject  {
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
    NSMutableArray *mElements;
    int mFillMode;
    BOOL mStroked;
}


- (void)setStroked:(BOOL)arg1;
- (BOOL)stroked;
- (unsigned int)elementCount;
- (struct CGSize { float x1; float x2; })size;
- (void)setFillMode:(int)arg1;
- (int)fillMode;
- (void)addElement:(id)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (id)elementAtIndex:(unsigned int)arg1;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;

@end
