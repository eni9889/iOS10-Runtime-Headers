/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextRangeImpl, UITextPosition;

@interface UITextRange : NSObject  {
}

@property(getter=_isCaret,readonly) BOOL isCaret;
@property(getter=_isRanged,readonly) BOOL isRanged;
@property(getter=_isImpl,readonly) UITextRangeImpl * isImpl;
@property(getter=isEmpty,readonly) BOOL empty;
@property(readonly) UITextPosition * start;
@property(readonly) UITextPosition * end;


- (BOOL)isEmpty;
- (id)_isImpl;
- (BOOL)_isCaret;
- (BOOL)_isRanged;
- (id)end;
- (id)start;

@end
