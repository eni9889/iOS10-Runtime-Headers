/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class UILabel;

@interface RemoteUISubHeader : UIView <RemoteUITableHeader> {
    UILabel *_headerLabel;
    UILabel *_subHeaderLabel;
    float _subHeaderSized;
    BOOL _isFirstSection;
    BOOL _isRightToLeft;
}

@property(readonly) UILabel * headerLabel;
@property(readonly) UILabel * subHeaderLabel;


- (id)subHeaderLabel;
- (id)headerLabel;
- (float)headerHeightForWidth:(float)arg1 inTableView:(id)arg2;
- (void)setSectionIsFirst:(BOOL)arg1;
- (id)initWithAttributes:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;

@end
