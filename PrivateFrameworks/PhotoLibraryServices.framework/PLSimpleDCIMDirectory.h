/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSFileManager, NSString, NSMutableIndexSet, NSObject<OS_dispatch_queue>, NSURL;

@interface PLSimpleDCIMDirectory : NSObject  {
    NSURL *_baseURL;
    NSString *_subDirSuffix;
    unsigned int _directoryLimit;
    NSFileManager *_fileManager;
    NSMutableIndexSet *_availableFileNameNumbers;
    NSURL *_currentSubDirectory;
    unsigned int _currentSubDirectoryNumber;
    NSString *_userInfoPath;
    BOOL _hasLoadedUserInfo;
    BOOL _representsCameraRoll;
    NSObject<OS_dispatch_queue> *_isolation;
}

@property(readonly) NSURL * currentSubDirectory;
@property BOOL representsCameraRoll;
@property(readonly) NSURL * directoryURL;

+ (id)cloudPlistName;
+ (id)migrateOldPlistToNewPlist:(id)arg1;
+ (id)cameraRollPlistName;

- (id)availableFileNameNumbersInDirNumber:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })fileNameNumberRangeForDirNumber:(unsigned int)arg1;
- (id)subDirURLForNumber:(unsigned int)arg1 create:(BOOL)arg2 didCreate:(BOOL*)arg3;
- (void)_loadUserInfoLastDirectoryNumber:(id*)arg1 lastFileNumber:(id*)arg2;
- (id)directoryURL;
- (BOOL)representsCameraRoll;
- (void)_saveUserInfo;
- (id)currentSubDirectory;
- (BOOL)_ensureDirectoryExists:(id)arg1;
- (id)nextAvailableFileURLWithExtension:(id)arg1;
- (void)setRepresentsCameraRoll:(BOOL)arg1;
- (id)initWithDirectoryURL:(id)arg1 subDirectorySuffix:(id)arg2 perDirectoryLimit:(unsigned int)arg3 userInfoPath:(id)arg4;
- (void)reset;
- (id)init;
- (void)dealloc;

@end
