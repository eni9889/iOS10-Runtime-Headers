/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, NSString, NSDictionary, NSBundle;

@interface UIStoryboard : NSObject  {
    NSBundle *bundle;
    NSString *storyboardFileName;
    NSDictionary *identifierToNibNameMap;
    NSString *designatedEntryPointIdentifier;
    NSMutableDictionary *identifierToUINibMap;
}

@property(readonly) NSBundle * bundle;
@property(readonly) NSString * name;
@property(readonly) NSString * storyboardFileName;
@property(readonly) NSDictionary * identifierToNibNameMap;
@property(readonly) NSString * designatedEntryPointIdentifier;
@property(readonly) NSMutableDictionary * identifierToUINibMap;

+ (id)storyboardWithName:(id)arg1 bundle:(id)arg2;

- (id)bundle;
- (id)name;
- (void)dealloc;
- (id)identifierToUINibMap;
- (id)designatedEntryPointIdentifier;
- (id)nibForViewControllerWithIdentifier:(id)arg1;
- (id)identifierToNibNameMap;
- (id)storyboardFileName;
- (id)initWithBundle:(id)arg1 storyboardFileName:(id)arg2 identifierToNibNameMap:(id)arg3 designatedEntryPointIdentifier:(id)arg4;
- (id)identifierForStringsFile;
- (id)nibForStoryboardNibNamed:(id)arg1;
- (BOOL)containsNibNamed:(id)arg1;
- (id)instantiateViewControllerWithIdentifier:(id)arg1;
- (id)instantiateInitialViewController;

@end
