/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSOperationQueue, NSString, PFUbiquityLocation, NSURL;

@interface PFUbiquityContainerIdentifier : NSObject <NSFilePresenter> {
    NSString *_storeName;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_uuidString;
    PFUbiquityLocation *_uuidFileLocation;
    NSURL *_presentedItemURL;
    BOOL _usedExistingUUIDFile;
}

@property(readonly) NSString * uuidString;
@property(readonly) PFUbiquityLocation * uuidFileLocation;
@property(readonly) BOOL usedExistingUUIDFile;
@property(readonly) NSURL * presentedItemURL;
@property(readonly) NSOperationQueue * presentedItemOperationQueue;
@property(readonly) NSURL * primaryPresentedItemURL;


- (id)uuidFileLocation;
- (BOOL)writeToDisk:(id*)arg1;
- (void)setUUIDStringFromLocation:(id)arg1;
- (BOOL)replaceIdentifierWithUUID:(id)arg1 error:(id*)arg2;
- (id)uuidString;
- (BOOL)usedExistingUUIDFile;
- (BOOL)identifyContainer:(id*)arg1;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)presentedItemOperationQueue;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg1;
- (id)presentedItemURL;

@end
