/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSSet;

@interface BBBulletinRequestParameters : NSObject <NSCopying, NSSecureCoding> {
    unsigned int _publisherDestination;
    int _maximumCount;
    NSSet *_enabledSectionIDs;
}

@property(readonly) unsigned int publisherDestination;
@property(readonly) unsigned int maximumCount;
@property(readonly) NSSet * enabledSectionIDs;

+ (id)requestParametersForDestination:(unsigned int)arg1 withMaximumCount:(int)arg2 enabledSectionIDs:(id)arg3;
+ (BOOL)supportsSecureCoding;

- (unsigned int)publisherDestination;
- (id)enabledSectionIDs;
- (id)initWithDestination:(unsigned int)arg1 maximumCount:(int)arg2 enabledSectionIDs:(id)arg3;
- (unsigned int)maximumCount;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
