/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@class NSSet, NSString, NoteAccountObject;

@interface NoteStoreObject : NoteCollectionObject  {
}

@property(retain) NSString * externalIdentifier;
@property(retain) NoteAccountObject * account;
@property(retain) NSString * name;
@property(retain) NSSet * changes;
@property(retain) NSString * syncAnchor;


- (id)basicAccountIdentifier;
- (unsigned int)maximumServerIntId;
- (id)notesForServerIntIdsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)notesForServerIntIds:(id)arg1;
- (id)notesForGUIDs:(id)arg1;
- (id)notesForServerIds:(id)arg1;
- (id)notesForIntegerIds:(id)arg1;
- (id)collectionInfo;
- (id)predicateForNotes;

@end
