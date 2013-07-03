/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, SAFmfGeoFence, NSString;

@interface SAFmfGeoFenceSetCompleted : SADomainCommand <SAServerBoundCommand> {
}

@property(retain) SAFmfGeoFence * geoFence;
@property(copy) NSURL * searchContext;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)geoFenceSetCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)geoFenceSetCompleted;

- (void)setGeoFence:(id)arg1;
- (id)geoFence;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)searchContext;
- (void)setSearchContext:(id)arg1;
- (id)groupIdentifier;

@end
