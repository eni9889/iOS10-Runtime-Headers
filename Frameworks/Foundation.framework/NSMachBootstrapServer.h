/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMachBootstrapServer : NSPortNameServer  {
}

+ (id)sharedInstance;

- (id)portForName:(id)arg1 options:(unsigned int)arg2;
- (id)portForName:(id)arg1;
- (BOOL)registerPort:(id)arg1 name:(id)arg2;
- (BOOL)removePortForName:(id)arg1;
- (id)servicePortWithName:(id)arg1;
- (id)portForName:(id)arg1 host:(id)arg2;

@end
