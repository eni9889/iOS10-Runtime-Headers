/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSDOStreamData, NSMutableArray;

@interface NSUnkeyedPortCoder : NSConcretePortCoder  {
    id sndPort;
    id rcvPort;
    NSDOStreamData *doStreamData;
    NSMutableArray *components;
    NSMutableArray *importedObjects;
    unsigned int componentIndex;
    BOOL isBycopy;
    BOOL isByref;
    BOOL isValid;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)_enableLogging:(BOOL)arg1;

- (id)debugDescription;
- (void)invalidate;
- (void)dealloc;
- (id)decodeInvocation;
- (void)encodeInvocation:(id)arg1;
- (id)decodeRetainedObject;
- (void)encodeObject:(id)arg1 isBycopy:(BOOL)arg2 isByref:(BOOL)arg3;
- (void)dispatch;
- (BOOL)isBycopy;
- (id)_proxyForLocalObject:(id)arg1;
- (BOOL)isByref;
- (void)importObject:(id)arg1;
- (id)finishedComponents;
- (void)decodeReturnValue:(id)arg1;
- (void)encodeReturnValue:(id)arg1;
- (void)encodePortObject:(id)arg1;
- (id)decodePortObject;
- (id)importedObjects;
- (id)connection;
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;
- (id)components;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeBycopyObject:(id)arg1;
- (id)decodeDataObject;
- (void*)decodeBytesWithReturnedLength:(unsigned int*)arg1;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (void)encodeDataObject:(id)arg1;
- (void)encodeBytes:(const void*)arg1 length:(unsigned int)arg2;
- (int)versionForClassName:(id)arg1;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;

@end
