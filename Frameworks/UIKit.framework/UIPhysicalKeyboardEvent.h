/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIPhysicalKeyboardEvent : UIPhysicalButtonsEvent  {
    NSString *_modifiedInput;
    NSString *_unmodifiedInput;
    NSString *_shiftModifiedInput;
    NSString *_markedInput;
    int _modifierFlags;
    int _inputFlags;
    NSString *_privateInput;
}

@property(retain) NSString * _modifiedInput;
@property(retain) NSString * _unmodifiedInput;
@property(retain) NSString * _shiftModifiedInput;
@property(retain) NSString * _markedInput;
@property(retain) NSString * _privateInput;
@property int _modifierFlags;
@property(readonly) int _gsModifierFlags;
@property(readonly) BOOL _isKeyDown;
@property(readonly) long _keyCode;
@property int _inputFlags;

+ (id)_eventWithInput:(id)arg1 inputFlags:(int)arg2;

- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)_privateInput;
- (id)_shiftModifiedInput;
- (void)set_privateInput:(id)arg1;
- (void)set_shiftModifiedInput:(id)arg1;
- (void)set_markedInput:(id)arg1;
- (void)set_unmodifiedInput:(id)arg1;
- (void)set_inputFlags:(int)arg1;
- (void)set_modifierFlags:(int)arg1;
- (id)_markedInput;
- (id)_cloneEvent;
- (void)_privatizeInput;
- (void)set_modifiedInput:(id)arg1;
- (id)_unmodifiedInput;
- (int)_inputFlags;
- (id)_modifiedInput;
- (int)_gsModifierFlags;
- (long)_keyCode;
- (int)_modifierFlags;
- (BOOL)_matchesKeyCommand:(id)arg1;
- (BOOL)_isKeyDown;
- (void)_setHIDEvent:(struct __IOHIDEvent { }*)arg1 keyboard:(struct __GSKeyboard { }*)arg2;
- (int)type;

@end
