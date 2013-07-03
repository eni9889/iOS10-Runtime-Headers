/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class NSString;

@interface CAStateSetValue : CAStateElement  {
    NSString *_keyPath;
    id _value;
}

@property(copy) NSString * keyPath;
@property(retain) id value;


- (void)setKeyPath:(id)arg1;
- (void)apply:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)foreachLayer:(id)arg1;
- (id)debugDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)matches:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (id)keyPath;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
