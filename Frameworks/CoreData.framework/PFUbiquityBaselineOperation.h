/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectModel, NSString;

@interface PFUbiquityBaselineOperation : PFUbiquityImportOperation  {
    NSString *_modelVersionHash;
    NSManagedObjectModel *_model;
}

@property(readonly) NSString * modelVersionHash;
@property(readonly) NSManagedObjectModel * model;


- (id)modelVersionHash;
- (id)initWithPersistentStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (id)model;
- (void)dealloc;
- (id)description;

@end
