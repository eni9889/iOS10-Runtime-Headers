/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WebUndoStep : NSObject  {
    struct RefPtr<WebCore::UndoStep> { 
        struct UndoStep {} *m_ptr; 
    } m_step;
}

+ (id)stepWithUndoStep:(struct PassRefPtr<WebCore::UndoStep> { struct UndoStep {} *x1; })arg1;
+ (void)initialize;

- (struct UndoStep { int (**x1)(); unsigned int x2; }*)step;
- (id)initWithUndoStep:(struct PassRefPtr<WebCore::UndoStep> { struct UndoStep {} *x1; })arg1;
- (void)finalize;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
