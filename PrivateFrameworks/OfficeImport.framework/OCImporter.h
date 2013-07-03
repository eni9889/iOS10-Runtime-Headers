/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OCDReader, NSData, TSUProgressContext, CPImportTracing, NSURL;

@interface OCImporter : OCMapper  {
    NSURL *mURL;
    NSData *mData;
    OCDReader *mReader;
    CPImportTracing *mTracing;
    BOOL mTryAlternateReader;
    TSUProgressContext *mProgressContext;
}

@property(readonly) CPImportTracing * tracing;
@property(retain) TSUProgressContext * progressContext;

+ (void)initialize;

- (BOOL)isXML;
- (void)setProgressContext:(id)arg1;
- (id)progressContext;
- (BOOL)isDocumentEncryptedUnsupportedVersion:(BOOL*)arg1 errorMessage:(id*)arg2;
- (BOOL)tryAlternateReader;
- (BOOL)isDocumentEncryptedUnsupportedVersionHelper:(BOOL*)arg1 errorMessage:(id*)arg2 readError:(BOOL*)arg3;
- (id)tracing;
- (BOOL)setPassphrase:(id)arg1;
- (id)displayName;
- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (id)filename;
- (void)setURL:(id)arg1;
- (BOOL)start;
- (id)initWithData:(id)arg1;

@end
