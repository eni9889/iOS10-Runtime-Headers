/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface __NSATSStringSegment : NSString  {
    struct __CFString { } *_originalString;
    long _originalStringLength;
    struct { 
        int location; 
        int length; 
    } _range;
    const unsigned short *_characters;
    unsigned short _buffer[128];
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)initWithOriginalString:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)_setOriginalString:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)length;
- (const unsigned short*)_fastCharacterContents;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (oneway void)release;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;

@end
