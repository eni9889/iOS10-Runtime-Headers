/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString;

@interface SSMetricsPageEvent : SSMetricsBaseEvent  {
}

@property(getter=isCachedResponse) BOOL cachedResponse;
@property(retain) NSString * navigationType;
@property(retain) NSString * pageHistoryDescription;
@property double pageRenderTime;
@property double requestEndTime;
@property double requestStartTime;
@property double responseEndTime;
@property double responseStartTime;
@property(retain) NSString * searchTerm;
@property(retain) NSString * serverApplicationInstance;
@property(retain) NSString * serverTiming;
@property(getter=isUbered) BOOL ubered;


- (void)setUbered:(BOOL)arg1;
- (void)setNavigationType:(id)arg1;
- (void)setPageRenderTime:(double)arg1;
- (void)setPageHistoryDescriptionWithIdentifiers:(id)arg1;
- (void)setRequestEndTime:(double)arg1;
- (id)serverTiming;
- (double)responseStartTime;
- (double)responseEndTime;
- (double)requestStartTime;
- (double)requestEndTime;
- (double)pageRenderTime;
- (id)pageHistoryDescription;
- (id)navigationType;
- (BOOL)isUbered;
- (BOOL)isCachedResponse;
- (id)serverApplicationInstance;
- (void)setPageHistoryDescription:(id)arg1;
- (void)setServerTiming:(id)arg1;
- (void)setServerApplicationInstance:(id)arg1;
- (void)setRequestStartTime:(double)arg1;
- (void)setResponseEndTime:(double)arg1;
- (void)setResponseStartTime:(double)arg1;
- (void)setCachedResponse:(BOOL)arg1;
- (void)setSearchTerm:(id)arg1;
- (id)searchTerm;
- (id)init;
- (id)description;

@end
