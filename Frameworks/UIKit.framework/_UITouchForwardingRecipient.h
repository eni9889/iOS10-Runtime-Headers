/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIResponder;

@interface _UITouchForwardingRecipient : NSObject  {
    UIResponder *fromResponder;
    UIResponder *responder;
    int recordedPhase;
    int autocompletedPhase;
}

@property UIResponder * fromResponder;
@property UIResponder * responder;
@property int recordedPhase;
@property int autocompletedPhase;


- (id)description;
- (void)setFromResponder:(id)arg1;
- (id)fromResponder;
- (id)initWithResponder:(id)arg1 fromResponder:(id)arg2;
- (void)setAutocompletedPhase:(int)arg1;
- (void)setRecordedPhase:(int)arg1;
- (int)autocompletedPhase;
- (int)recordedPhase;
- (id)responder;
- (void)setResponder:(id)arg1;

@end
