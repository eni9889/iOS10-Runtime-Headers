/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIProxyObject : NSObject <NSCoding> {
    NSString *proxiedObjectIdentifier;
}

+ (id)mappedObjectForCoder:(id)arg1 withIdentifier:(id)arg2;
+ (struct __CFDictionary { }*)proxyDecodingMap;
+ (void)removeMappingsForCoder:(id)arg1;
+ (void)addMappings:(id)arg1 forCoder:(id)arg2;
+ (void)addMappingFromIdentifier:(id)arg1 toObject:(id)arg2 forCoder:(id)arg3;

- (void)dealloc;
- (void)setProxiedObjectIdentifier:(id)arg1;
- (id)proxiedObjectIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
