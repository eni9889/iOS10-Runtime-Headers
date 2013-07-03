/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class JSWrapperMap, JSVirtualMachine, JSValue;

@interface JSContext : NSObject  {
    JSVirtualMachine *m_virtualMachine;
    struct OpaqueJSContext { } *m_context;
    JSWrapperMap *m_wrapperMap;
    struct Strong<JSC::JSObject> { 
        struct JSValue {} *m_slot; 
    } m_exception;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id exceptionHandler;

}

@property(readonly) JSWrapperMap * wrapperMap;
@property(retain) JSValue * exception;
@property(copy) id exceptionHandler;
@property(readonly) JSVirtualMachine * virtualMachine;

+ (id)contextWithJSGlobalContextRef:(struct OpaqueJSContext { }*)arg1;
+ (id)currentArguments;
+ (id)currentThis;
+ (id)currentContext;

- (id)wrapperForJSObject:(struct OpaqueJSValue { }*)arg1;
- (id)wrapperForObjCObject:(id)arg1;
- (void)endCallbackWithData:(struct CallbackData { struct CallbackData {} *x1; id x2; id x3; struct OpaqueJSValue {} *x4; id x5; unsigned int x6; struct OpaqueJSValue {} **x7; id x8; }*)arg1;
- (void)beginCallbackWithData:(struct CallbackData { struct CallbackData {} *x1; id x2; id x3; struct OpaqueJSValue {} *x4; id x5; unsigned int x6; struct OpaqueJSValue {} **x7; id x8; }*)arg1 thisValue:(struct OpaqueJSValue { }*)arg2 argumentCount:(unsigned long)arg3 arguments:(const struct OpaqueJSValue {}**)arg4;
- (BOOL)boolFromNotifyException:(struct OpaqueJSValue { }*)arg1;
- (id)initWithGlobalContextRef:(struct OpaqueJSContext { }*)arg1;
- (void)notifyException:(struct OpaqueJSValue { }*)arg1;
- (id)virtualMachine;
- (id)globalObject;
- (id)wrapperMap;
- (id)exception;
- (id)evaluateScript:(id)arg1;
- (struct OpaqueJSContext { }*)JSGlobalContextRef;
- (id)valueFromNotifyException:(struct OpaqueJSValue { }*)arg1;
- (id)exceptionHandler;
- (void)setExceptionHandler:(id)arg1;
- (void)setException:(id)arg1;
- (id)initWithVirtualMachine:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;

@end
