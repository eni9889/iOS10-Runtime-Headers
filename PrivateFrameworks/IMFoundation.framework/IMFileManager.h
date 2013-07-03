/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMFileManager : NSFileManager  {
}

+ (id)defaultHFSFileManager;
+ (id)defaultManager;

- (id)UTITypeOfPathExtension:(id)arg1;
- (id)UTITypeOfPath:(id)arg1;
- (id)pathExtensionForUTIType:(id)arg1;
- (id)MIMETypeOfPath:(id)arg1;
- (id)UTITypeOfMimeType:(id)arg1;
- (id)pathExtensionForMIMEType:(id)arg1;
- (id)displayNameOfFileWithName:(id)arg1 hfsFlags:(unsigned short)arg2;
- (id)MIMETypeOfPathExtension:(id)arg1;
- (id)attributesOfItemAtPath:(id)arg1 error:(id*)arg2;

@end
