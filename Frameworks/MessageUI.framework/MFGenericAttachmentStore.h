/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFConditionLock, NSArray, NSObject<OS_dispatch_queue>, NSMutableArray;

@interface MFGenericAttachmentStore : MFWebAttachmentSource  {
    struct __CFDictionary { } *_attachmentSizes;
    NSMutableArray *_attachmentsOrder;
    unsigned int _size;
    NSObject<OS_dispatch_queue> *_scalingQueue;
    MFConditionLock *_scalingThrottle;
    int _pendingImageScalingOperations;
    BOOL _outgoing;
    BOOL _didCancelImageScalingOperations;
    BOOL _isScalingEnabled;
    BOOL _isScalingThrottled;
}

@property BOOL scalingThrottled;
@property(readonly) NSArray * attachments;

+ (void)addAttachmentUniqueIdentifierStore:(id)arg1;
+ (BOOL)isPreventingInlinePDFs;
+ (void)endPreventingInlinePDFs;
+ (void)beginPreventingInlinePDFs;

- (BOOL)setAttachment:(id)arg1 forURL:(id)arg2;
- (unsigned long)sizeForScale:(unsigned int)arg1 imagesOnly:(BOOL)arg2;
- (BOOL)scalingThrottled;
- (void)removeAttachmentsForURLs:(id)arg1;
- (BOOL)hasPendingImageScalingOperations;
- (id)initOutgoing;
- (void)_decrementPendingImageScalingOperations;
- (BOOL)didCancelImageScalingOperations;
- (void)_inrementPendingImageScalingOperations;
- (BOOL)addAttachment:(id)arg1 allowingOverride:(id)arg2;
- (void)_notifyAttachmentCachedSizesChanged;
- (void)_enqueueScaleAttachment:(id)arg1 withFlags:(unsigned int)arg2 originalSize:(unsigned int)arg3;
- (void)removeAttachmentForURL:(id)arg1;
- (void)setScalingThrottled:(BOOL)arg1;
- (void)cancelImageScalingOperations;
- (id)attachments;
- (void)dealloc;
- (id)description;
- (BOOL)addAttachment:(id)arg1;

@end
