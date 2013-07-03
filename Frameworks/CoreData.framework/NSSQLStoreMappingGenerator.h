/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary;

@interface NSSQLStoreMappingGenerator : NSObject  {
    NSMutableDictionary *_names;
}

+ (id)defaultMappingGenerator;
+ (void)invalidate;

- (id)newUniqueNameWithBase:(unsigned short*)arg1 withLength:(unsigned int)arg2;
- (id)generateTableName:(id)arg1;
- (id)newGeneratedPropertyName:(id)arg1;
- (id)uniqueNameWithBase:(id)arg1;
- (id)init;
- (void)dealloc;

@end
