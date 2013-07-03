/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUSectionsResponse, NSString, SUClientInterface;

@interface SULoadSectionsOperation : ISOperation <ISURLOperationDelegate> {
    NSString *_activeSectionVersionString;
    SUClientInterface *_clientInterface;
    SUSectionsResponse *_sectionsResponse;
    BOOL _shouldUseCache;
}

@property(copy) NSString * activeSectionVersionString;
@property BOOL shouldUseCache;
@property(readonly) SUSectionsResponse * sectionsResponse;


- (void)setShouldUseCache:(BOOL)arg1;
- (void)setActiveSectionVersionString:(id)arg1;
- (id)activeSectionVersionString;
- (void)_writeSectionsResponseToCache:(id)arg1 forVersion:(id)arg2;
- (id)sectionsResponse;
- (BOOL)_loadSectionsFromCacheForVersion:(id)arg1;
- (BOOL)shouldUseCache;
- (void)_setSectionsResponse:(id)arg1;
- (id)_cachePathForVersion:(id)arg1 create:(BOOL)arg2;
- (BOOL)_loadSectionsFromNetworkWithDictionary:(id)arg1;
- (id)initWithClientInterface:(id)arg1;
- (void)run;
- (id)init;
- (void)dealloc;

@end
