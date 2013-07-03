/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLOptionElement : DOMHTMLElement  {
}

@property BOOL disabled;
@property(readonly) DOMHTMLFormElement * form;
@property(copy) NSString * label;
@property BOOL defaultSelected;
@property BOOL selected;
@property(copy) NSString * value;
@property(readonly) NSString * text;
@property(readonly) int index;


- (int)index;
- (void)setDefaultSelected:(BOOL)arg1;
- (BOOL)defaultSelected;
- (id)text;
- (id)label;
- (void)setDisabled:(BOOL)arg1;
- (id)form;
- (BOOL)selected;
- (BOOL)disabled;
- (void)setLabel:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (id)itemTitle;
- (void)populateCell:(id)arg1;
- (id)createPickerCell;
- (id)createSelectedItem;

@end
