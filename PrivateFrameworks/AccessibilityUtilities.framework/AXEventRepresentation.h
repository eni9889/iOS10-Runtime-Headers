/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class NSString, NSData, AXEventKeyInfoRepresentation, AXEventHandInfoRepresentation;

@interface AXEventRepresentation : NSObject <NSSecureCoding, NSCopying> {
    BOOL _isBuiltIn;
    BOOL _isGeneratedEvent;
    unsigned int _type;
    int _subtype;
    int _flags;
    AXEventHandInfoRepresentation *_handInfo;
    AXEventKeyInfoRepresentation *_keyInfo;
    NSString *_clientId;
    unsigned int _taskPort;
    unsigned int _contextId;
    void *_window;
    int _pid;
    NSData *_data;
    NSData *_HIDAttributeData;
    struct CGPoint { 
        float x; 
        float y; 
    } _location;
    struct CGPoint { 
        float x; 
        float y; 
    } _windowLocation;
    unsigned long long _time;
    unsigned long long _HIDTime;
    unsigned long long _additionalFlags;
    unsigned long long _HIDSenderId;
}

@property unsigned int type;
@property int subtype;
@property struct CGPoint { float x1; float x2; } location;
@property struct CGPoint { float x1; float x2; } windowLocation;
@property unsigned long long time;
@property int flags;
@property(retain) AXEventHandInfoRepresentation * handInfo;
@property(retain) AXEventKeyInfoRepresentation * keyInfo;
@property(retain) NSString * clientId;
@property unsigned int taskPort;
@property unsigned long long HIDTime;
@property unsigned long long additionalFlags;
@property unsigned int contextId;
@property BOOL isBuiltIn;
@property BOOL isGeneratedEvent;
@property void* window;
@property int pid;
@property(retain) NSData * data;
@property(retain) NSData * HIDAttributeData;
@property unsigned long long HIDSenderId;

+ (id)representationWithLocation:(struct CGPoint { float x1; float x2; })arg1 windowLocation:(struct CGPoint { float x1; float x2; })arg2 handInfo:(id)arg3;
+ (id)representationWithData:(id)arg1;
+ (id)touchRepresentationWithHandType:(unsigned int)arg1 location:(struct CGPoint { float x1; float x2; })arg2;
+ (id)buttonRepresentationWithType:(unsigned int)arg1;
+ (id)keyRepresentationWithType:(unsigned int)arg1;
+ (id)_keyboardButtonEvent:(struct __IOHIDEvent { }*)arg1;
+ (id)_digitizerRepresentation:(struct __IOHIDEvent { }*)arg1 hidStreamIdentifier:(id)arg2;
+ (id)representationWithType:(unsigned int)arg1 subtype:(int)arg2 time:(unsigned long long)arg3 location:(struct CGPoint { float x1; float x2; })arg4 windowLocation:(struct CGPoint { float x1; float x2; })arg5 handInfo:(id)arg6;
+ (id)representationWithEventRecord:(struct { int x1; int x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; unsigned int x5; unsigned long long x6; void *x7; int x8; int x9; unsigned int x10; unsigned char x11[0]; }*)arg1;
+ (id)representationWithHIDEvent:(struct __IOHIDEvent { }*)arg1 hidStreamIdentifier:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (struct __GSEvent { }*)newGSEventRef;
- (unsigned int)firstPathContextId;
- (id)denormalizedEventRepresentation:(BOOL)arg1;
- (id)normalizedEventRepresentation:(BOOL)arg1;
- (unsigned int)_contextIDFromHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)setAdditionalFlags:(unsigned long long)arg1;
- (unsigned long long)additionalFlags;
- (id)HIDAttributeData;
- (id)clientId;
- (struct CGPoint { float x1; float x2; })windowLocation;
- (BOOL)isGeneratedEvent;
- (id)keyInfo;
- (unsigned long long)HIDSenderId;
- (BOOL)isBuiltIn;
- (struct __IOHIDEvent { }*)_newKeyboardHIDEventRef;
- (struct __IOHIDEvent { }*)_newButtonHIDEventRef;
- (struct __IOHIDEvent { }*)_newHandHIDEventRef;
- (void)setPid:(int)arg1;
- (unsigned long long)HIDTime;
- (void)setHIDTime:(unsigned long long)arg1;
- (void)setHIDSenderId:(unsigned long long)arg1;
- (void)setIsBuiltIn:(BOOL)arg1;
- (void)setHIDAttributeData:(id)arg1;
- (void)setKeyInfo:(id)arg1;
- (void)setIsGeneratedEvent:(BOOL)arg1;
- (void)setHandInfo:(id)arg1;
- (void)setWindowLocation:(struct CGPoint { float x1; float x2; })arg1;
- (id)handInfo;
- (void)setClientId:(id)arg1;
- (void)setTaskPort:(unsigned int)arg1;
- (unsigned int)taskPort;
- (struct { int x1; int x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; unsigned int x5; unsigned long long x6; void *x7; int x8; int x9; unsigned int x10; unsigned char x11[0]; }*)newEventRecord;
- (struct __IOHIDEvent { }*)newHIDEventRef;
- (void)setData:(id)arg1;
- (struct CGPoint { float x1; float x2; })location;
- (int)pid;
- (void)setTime:(unsigned long long)arg1;
- (unsigned long long)time;
- (void*)window;
- (unsigned int)contextId;
- (void)setType:(unsigned int)arg1;
- (int)subtype;
- (void)setLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setFlags:(int)arg1;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setContextId:(unsigned int)arg1;
- (void)setSubtype:(int)arg1;
- (void)setWindow:(void*)arg1;
- (id)dataRepresentation;
- (unsigned int)type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)flags;

@end
