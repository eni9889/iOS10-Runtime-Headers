/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UIImage;

@interface SLAttachment : NSObject <NSSecureCoding> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _previewUpdateObserver;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _payloadUpdateObserver;

    NSString *_identifier;
    BOOL _pendingPreviewProxy;
    int _previewType;
    UIImage *_previewImage;
    int _type;
    id _payload;
    int _downsampleStatus;
}

@property int previewType;
@property(retain) UIImage * previewImage;
@property(readonly) NSString * identifier;
@property int type;
@property(copy) id payload;
@property int downsampleStatus;
@property BOOL pendingPreviewProxy;

+ (BOOL)attachmentTypeRepresentsAnImage:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (void)setPayloadUpdateObserverWithBlock:(id)arg1;
- (BOOL)pendingPreviewProxy;
- (void)setPreviewType:(int)arg1;
- (void)setPreviewImage:(id)arg1;
- (int)downsampleStatus;
- (void)setDownsampleStatus:(int)arg1;
- (id)initWithPayload:(id)arg1 type:(int)arg2 previewImage:(id)arg3;
- (void)setPreviewUpdateObserverWithBlock:(id)arg1;
- (void)setPendingPreviewProxy:(BOOL)arg1;
- (int)previewType;
- (id)previewImage;
- (id)_uniqueIdentifier;
- (void)setPayload:(id)arg1;
- (void)setType:(int)arg1;
- (id)payload;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (int)type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
