/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUDOMElement;

@interface SUOverlayTransition : NSObject <NSCoding, NSCopying> {
    double _duration;
    SUDOMElement *_sourceElement;
    int _type;
}

@property double duration;
@property(retain) SUDOMElement * sourceElement;
@property int type;

+ (int)transitionTypeFromString:(id)arg1;

- (void)setSourceElement:(id)arg1;
- (id)sourceElement;
- (void)setType:(int)arg1;
- (void)setDuration:(double)arg1;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)duration;
- (int)type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
