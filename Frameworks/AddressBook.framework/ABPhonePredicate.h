/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSString;

@interface ABPhonePredicate : ABPredicate  {
    NSString *_phoneNumber;
    NSString *_country;
    NSString *_dbCountry;
}

@property(copy) NSString * phoneNumber;
@property(copy) NSString * country;
@property(readonly) NSString * dbCountry;


- (void)setCountry:(id)arg1;
- (id)country;
- (id)dbCountry;
- (void)evaluateCallbackWithSqliteContext:(struct sqlite3_context { }*)arg1 predicateContext:(void*)arg2 values:(struct Mem {}**)arg3 count:(int)arg4;
- (BOOL)hasCallback;
- (void)setPhoneNumber:(id)arg1;
- (id)queryJoinsInCompound:(BOOL)arg1;
- (void)ab_bindStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (id)queryWhereString;
- (BOOL)isValid;
- (void)dealloc;
- (id)phoneNumber;
- (id)predicateFormat;

@end
