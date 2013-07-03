/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSSet, NSString;

@interface AVMediaFileType : NSObject <NSCopying> {
    NSString *_uti;
}

@property(readonly) NSString * defaultFileExtension;
@property(readonly) NSSet * supportedMediaTypes;
@property(readonly) NSString * UTI;
@property(readonly) NSString * figFormatReaderFileFormat;
@property(readonly) unsigned long audioFileTypeID;

+ (id)isoFileTypes;
+ (id)mediaFileTypeWithFileTypeIdentifier:(id)arg1;
+ (id)_mediaFileTypeWithFileTypeIdentifier:(id)arg1 exceptionReason:(id*)arg2;
+ (id)allFileTypeIdentifiers;
+ (void)initialize;

- (id)defaultFileExtension;
- (id)initWithFileTypeIdentifier:(id)arg1 exceptionReason:(id*)arg2;
- (unsigned long)audioFileTypeID;
- (BOOL)supportsOutputSettings:(id)arg1 reason:(id*)arg2;
- (BOOL)supportsFormat:(struct opaqueCMFormatDescription { }*)arg1;
- (id)supportedMediaTypes;
- (id)figFormatReaderFileFormat;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)UTI;

@end
