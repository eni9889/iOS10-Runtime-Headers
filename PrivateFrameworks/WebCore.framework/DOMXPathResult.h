/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString, DOMNode;

@interface DOMXPathResult : DOMObject  {
}

@property(readonly) unsigned short resultType;
@property(readonly) double numberValue;
@property(readonly) NSString * stringValue;
@property(readonly) BOOL booleanValue;
@property(readonly) DOMNode * singleNodeValue;
@property(readonly) BOOL invalidIteratorState;
@property(readonly) unsigned int snapshotLength;


- (unsigned short)resultType;
- (id)snapshotItem:(unsigned int)arg1;
- (id)iterateNext;
- (unsigned int)snapshotLength;
- (BOOL)invalidIteratorState;
- (id)singleNodeValue;
- (BOOL)booleanValue;
- (double)numberValue;
- (id)stringValue;
- (void)finalize;
- (void)dealloc;

@end
