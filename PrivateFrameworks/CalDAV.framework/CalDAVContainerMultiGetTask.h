/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVContainerMultiGetTask : CoreDAVContainerMultiGetTask  {
    BOOL _getScheduleTags;
    BOOL _getScheduleChanges;
}

@property BOOL getScheduleTags;
@property BOOL getScheduleChanges;


- (id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 getScheduleTags:(BOOL)arg3 getScheduleChanges:(BOOL)arg4;
- (id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 getScheduleTags:(BOOL)arg3 getScheduleChanges:(BOOL)arg4 appSpecificCalendarItemClass:(Class)arg5;
- (BOOL)getScheduleChanges;
- (BOOL)getScheduleTags;
- (void)setGetScheduleChanges:(BOOL)arg1;
- (void)setGetScheduleTags:(BOOL)arg1;
- (void)setAdditionalProperties:(id)arg1 onDataItem:(id)arg2;
- (id)copyAdditionalPropElements;

@end
