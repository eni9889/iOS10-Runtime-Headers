/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSDictionary;

@interface NSOrthography : NSObject <NSCopying, NSCoding> {
}

@property(readonly) NSString * dominantScript;
@property(readonly) NSDictionary * languageMap;

+ (id)orthographyWithDominantScript:(id)arg1 languageMap:(id)arg2;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;

- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)allLanguages;
- (id)dominantLanguageForScript:(id)arg1;
- (id)languagesForScript:(id)arg1;
- (id)allScripts;
- (id)dominantLanguage;
- (id)languageMap;
- (id)dominantScript;
- (unsigned int)orthographyFlags;
- (id)initWithDominantScript:(id)arg1 languageMap:(id)arg2;
- (id)replacementObjectForPortCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
