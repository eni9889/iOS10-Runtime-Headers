/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class SFUZipArchive, NSMutableDictionary;

@interface OCPZipPackage : OCPPackage  {
    SFUZipArchive *mArchive;
    NSMutableDictionary *mParts;
}


- (id)initWithArchive:(id)arg1;
- (void)resetPartForLocation:(id)arg1;
- (id)partForLocation:(id)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithPath:(id)arg1;

@end
