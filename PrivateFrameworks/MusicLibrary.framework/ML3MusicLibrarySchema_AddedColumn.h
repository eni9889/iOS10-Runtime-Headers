/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;

@interface ML3MusicLibrarySchema_AddedColumn : NSObject  {
    NSString *_columnName;
    NSString *_foreignTableName;
    NSString *_foreignColumnName;
    NSString *_joinColumnName;
}

@property(readonly) NSString * columnName;
@property(readonly) NSString * foreignTableName;
@property(readonly) NSString * foreignColumnName;
@property(readonly) NSString * joinColumnName;


- (id)joinColumnName;
- (id)foreignColumnName;
- (id)foreignTableName;
- (BOOL)importFromForeignTable;
- (id)initWithName:(id)arg1 foreignTable:(id)arg2 foreignColumn:(id)arg3 joinColumn:(id)arg4;
- (id)columnName;
- (void).cxx_destruct;

@end
