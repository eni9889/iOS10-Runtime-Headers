/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAResponse : DAAction  {
    int _status;
}

@property(readonly) int status;


- (id)initWithItemChangeType:(int)arg1 changedItem:(id)arg2 serverId:(id)arg3 status:(int)arg4;
- (int)status;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
