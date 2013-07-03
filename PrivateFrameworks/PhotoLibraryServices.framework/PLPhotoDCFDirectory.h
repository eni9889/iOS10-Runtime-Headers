/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLPhotoDCIMDirectory;

@interface PLPhotoDCFDirectory : PLPhotoDCFObject  {
    PLPhotoDCIMDirectory *_dcimDirectory;
    struct __CFDictionary { } *_fileGroupsByNumber;
    int _maxFileGroupNumber;
    int _lastUsedFileGroupNumber;
    BOOL _considerInvalidFileGroups;
}

@property BOOL considerInvalidFileGroups;

+ (id)fileGroupRequiredEmptyExtensions;
+ (id)fileGroupRequiredEmptyPrefixes;
+ (void)initializeFileGroupPrefixAndExtensions;

- (void)setConsiderInvalidFileGroups:(BOOL)arg1;
- (void)setWriteIsPending:(BOOL)arg1;
- (void)removeFileGroup:(id)arg1;
- (id)nextAvailableVideoFileGroupWithExtension:(id)arg1;
- (BOOL)canAddVideo;
- (BOOL)canAddImage;
- (id)initWithName:(id)arg1 number:(int)arg2 dcimDirectory:(id)arg3;
- (id)_nextAvailableFileGroupWithPrefix:(id)arg1 extension:(id)arg2;
- (BOOL)considerInvalidFileGroups;
- (BOOL)isEntensionValid:(id)arg1;
- (BOOL)_canAddItemWithPrefix:(id)arg1;
- (BOOL)_canAddItemWithPrefix:(id)arg1 minimumFileGroupNumber:(int)arg2;
- (id)fileGroups;
- (BOOL)canAddFileGroupWithGroupNumber:(int)arg1;
- (id)fullPath;
- (unsigned int)_calculateBaseDirectoryValue;
- (id)_lastUsedFileGroupUserInfoKey;
- (void)ensureDirectoryExists;
- (id)nextAvailableFileGroup;
- (id)dcimDirectory;
- (void)dealloc;

@end
