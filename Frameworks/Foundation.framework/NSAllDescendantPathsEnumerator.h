/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSArray, NSString, NSAllDescendantPathsEnumerator, NSFileAttributes;

@interface NSAllDescendantPathsEnumerator : NSDirectoryEnumerator  {
    NSString *path;
    NSArray *contents;
    unsigned int idx;
    NSString *prepend;
    NSAllDescendantPathsEnumerator *under;
    NSFileAttributes *directoryAttributes;
    NSString *pathToLastReportedItem;
    unsigned int depth;
    BOOL cross;
    BOOL _padding[3];
}

+ (id)newWithPath:(id)arg1 prepend:(id)arg2 attributes:(id)arg3 cross:(BOOL)arg4 depth:(unsigned int)arg5;

- (id)nextObject;
- (void)dealloc;
- (unsigned int)level;
- (id)currentSubdirectoryAttributes;
- (id)_under;
- (void)skipDescendants;
- (void)skipDescendents;
- (id)directoryAttributes;
- (id)fileAttributes;

@end
