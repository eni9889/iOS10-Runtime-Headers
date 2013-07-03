/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class WebBookmark, WebBookmarkCollection;

@interface BAChangeRecord : NSObject  {
    WebBookmarkCollection *_collection;
    WebBookmark *_bookmark;
    int _changeType;
}

@property(readonly) WebBookmarkCollection * collection;
@property(readonly) WebBookmark * bookmark;
@property(readonly) int changeType;


- (id)bookmark;
- (id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2 changeType:(int)arg3;
- (id)changeTypeDescription;
- (int)changeType;
- (void)dealloc;
- (id)description;
- (id)collection;

@end
