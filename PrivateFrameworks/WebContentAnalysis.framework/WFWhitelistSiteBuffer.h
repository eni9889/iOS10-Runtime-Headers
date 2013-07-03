/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@class NSMutableArray, NSMutableSet;

@interface WFWhitelistSiteBuffer : NSObject  {
    NSMutableSet *siteSet;
    NSMutableArray *siteBuffer;
    unsigned int maxSize;
}

@property(retain) NSMutableSet * siteSet;
@property(retain) NSMutableArray * siteBuffer;
@property unsigned int maxSize;


- (void)setSiteBuffer:(id)arg1;
- (void)setSiteSet:(id)arg1;
- (BOOL)containsMetasitePrefixOfURLString:(id)arg1;
- (BOOL)containsURLString:(id)arg1;
- (void)addURLString:(id)arg1;
- (id)siteSet;
- (id)siteBuffer;
- (void)trimToSize:(unsigned int)arg1;
- (id)init;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (void)setMaxSize:(unsigned int)arg1;
- (unsigned int)maxSize;

@end
