/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSData;

@interface CTSubscriber : NSObject  {
    struct __CTServerConnection { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct dispatch_queue_s {} *x2; struct CTServerState {} *x3; unsigned char x4; unsigned int x5; struct _xpc_connection_s {} *x6; } *_server;

  /* Unexpected information at end of encoded ivar type: "__end_"^{block<void (^)(NSDictionary *)>}"__end_cap_"{__compressed_pair<dispatch::block<void (^)(NSDictionary *)> *, std::__1::allocator<dispatch::block<void (^)(NSDictionary *)> > >="__first_"^{block<void (^)(NSDictionary *)>}}} */
  /* Error parsing encoded ivar type info: {vector<dispatch::block<void (^)(NSDictionary *)>, std::__1::allocator<dispatch::block<void (^)(NSDictionary *)> > >="__begin_"^{block<void (^)(NSDictionary *)>}"__end_"^{block<void (^)(NSDictionary *)>}"__end_cap_"{__compressed_pair<dispatch::block<void (^)(NSDictionary *)> *, std::__1::allocator<dispatch::block<void (^)(NSDictionary *)> > >="__first_"^{block<void (^)(NSDictionary *)>}}} */
    struct vector<dispatch::block<void (^)(NSDictionary *)>, std::__1::allocator<dispatch::block<void (^)(NSDictionary *)> > >="__begin_"^{block<void (^)(NSDictionary *)> {} _authCallbacks;

}

@property(readonly) NSData * carrierToken;


- (void)authenticateWithInfo:(id)arg1 handleResult:(id)arg2;
- (void)handleAuthCallback:(id)arg1;
- (BOOL)refreshCarrierToken;
- (id)carrierToken;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
