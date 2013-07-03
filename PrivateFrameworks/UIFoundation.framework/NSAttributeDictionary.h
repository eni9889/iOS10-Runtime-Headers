/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSAttributeDictionary : NSDictionary  {
    unsigned int numElements;
    struct _NSAttributeDictionaryElement { 
        unsigned int hash; 
        id key; 
        id value; 
    } elements[1];
}

+ (void)initialize;
+ (id)emptyAttributeDictionary;
+ (id)newWithDictionary:(id)arg1;

- (BOOL)isEqualToDictionary:(id)arg1;
- (id)keyEnumerator;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2;
- (id)objectForKey:(id)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)newWithKey:(id)arg1 object:(id)arg2;

@end
