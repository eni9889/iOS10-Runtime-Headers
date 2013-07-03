/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UINibDecoder, NSString, NSData, NSBundle;

@interface UINibStorage : NSObject  {
    NSString *bundleResourceName;
    NSString *bundleDirectoryName;
    NSBundle *bundle;
    NSString *identifierForStringsFile;
    NSData *archiveData;
    UINibDecoder *nibDecoder;
    BOOL instantiatingForSimulator;
    BOOL captureImplicitLoadingContextOnDecode;
}

@property(copy) NSString * bundleResourceName;
@property(copy) NSString * bundleDirectoryName;
@property(retain) NSBundle * bundle;
@property(copy) NSString * identifierForStringsFile;
@property(copy) NSData * archiveData;
@property(retain) UINibDecoder * nibDecoder;
@property BOOL instantiatingForSimulator;
@property BOOL captureImplicitLoadingContextOnDecode;


- (id)archiveData;
- (id)bundle;
- (void)dealloc;
- (void)setCaptureImplicitLoadingContextOnDecode:(BOOL)arg1;
- (BOOL)captureImplicitLoadingContextOnDecode;
- (void)setInstantiatingForSimulator:(BOOL)arg1;
- (BOOL)instantiatingForSimulator;
- (void)setNibDecoder:(id)arg1;
- (id)nibDecoder;
- (void)setArchiveData:(id)arg1;
- (void)setIdentifierForStringsFile:(id)arg1;
- (id)identifierForStringsFile;
- (void)setBundle:(id)arg1;
- (void)setBundleDirectoryName:(id)arg1;
- (id)bundleDirectoryName;
- (void)setBundleResourceName:(id)arg1;
- (id)bundleResourceName;

@end
