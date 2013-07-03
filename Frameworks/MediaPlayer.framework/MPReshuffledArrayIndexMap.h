/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableData, NSObject<OS_dispatch_queue>;

@interface MPReshuffledArrayIndexMap : NSObject <NSCoding, NSCopying> {
    unsigned int _arrayCount;
    unsigned int _identityIndexesCount;
    NSObject<OS_dispatch_queue> *_shuffledIndexesQueue;
    NSMutableData *_shuffledIndexesData;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _focusedRange;
}

@property struct _NSRange { unsigned int x1; unsigned int x2; } focusedRange;
@property(readonly) unsigned int countOfArrayIndexMappings;


- (void)setFocusedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })focusedRange;
- (unsigned int)sourceArrayIndexForIndex:(unsigned int)arg1;
- (unsigned int)countOfArrayIndexMappings;
- (id)initWithSourceArrayCount:(unsigned int)arg1 identityArraysCount:(unsigned int)arg2;
- (BOOL)_onQueueExtendMap;
- (id)initWithSourceArrayCount:(unsigned int)arg1 identityIndexesCount:(unsigned int)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
