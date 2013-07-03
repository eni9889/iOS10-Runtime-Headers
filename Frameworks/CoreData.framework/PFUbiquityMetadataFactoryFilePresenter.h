/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSURL, NSOperationQueue, PFUbiquityLocation;

@interface PFUbiquityMetadataFactoryFilePresenter : NSObject <NSFilePresenter> {
    NSURL *_presentedItemURL;
    PFUbiquityLocation *_presentedItemLocation;
}

@property(readonly) NSURL * presentedItemURL;
@property(readonly) PFUbiquityLocation * presentedItemLocation;
@property(readonly) NSOperationQueue * presentedItemOperationQueue;
@property(readonly) NSURL * primaryPresentedItemURL;

+ (void)initialize;

- (id)presentedItemLocation;
- (id)initWithMetadataStoreFileLocation:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)presentedItemOperationQueue;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(id)arg1;
- (void)relinquishPresentedItemToWriter:(id)arg1;
- (void)relinquishPresentedItemToReader:(id)arg1;
- (id)presentedItemURL;

@end
