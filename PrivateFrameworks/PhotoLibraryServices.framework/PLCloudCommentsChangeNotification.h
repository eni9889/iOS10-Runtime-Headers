/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLManagedAsset, NSDictionary;

@interface PLCloudCommentsChangeNotification : PLContainerChangeNotification  {
    NSDictionary *_userInfo;
}

@property(readonly) PLManagedAsset * asset;

+ (id)notificationWithAsset:(id)arg1 snapshot:(id)arg2;

- (id)_contentRelationshipName;
- (id)name;
- (id)userInfo;
- (void)dealloc;
- (id)description;
- (id)asset;

@end
