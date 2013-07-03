/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCondition : NSObject <NSLocking> {
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)init;
- (id)name;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (void)setName:(id)arg1;
- (void)broadcast;
- (void)signal;
- (BOOL)waitUntilDate:(id)arg1;
- (void)wait;
- (void)unlock;
- (void)lock;

@end
