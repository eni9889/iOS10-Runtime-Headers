/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface UIActivityItemImageRep : NSObject  {
    id _asset;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _thumbnailProvider;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _dataProvider;

}

@property(retain) id asset;
@property(copy) id thumbnailProvider;
@property(copy) id dataProvider;

+ (id)activityItemImageRepWithAsset:(id)arg1 thumbnailProvider:(id)arg2 dataProvider:(id)arg3;

- (id)thumbnail;
- (id)data;
- (void)dealloc;
- (id)dataProvider;
- (id)thumbnailProvider;
- (void)setDataProvider:(id)arg1;
- (void)setThumbnailProvider:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;

@end
