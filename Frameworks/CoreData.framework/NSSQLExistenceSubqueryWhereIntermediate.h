/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLProperty, NSString, NSExpression, NSSQLEntity;

@interface NSSQLExistenceSubqueryWhereIntermediate : NSSQLWhereIntermediate  {
    NSExpression *_subqueryExpression;
    NSExpression *_variableExpression;
    NSString *_variableAlias;
    NSSQLProperty *_collectionProperty;
    NSSQLEntity *_governingEntityForVariable;
}


- (BOOL)isExistenceScoped;
- (BOOL)_isKeypathScopedToSubquery:(id)arg1;
- (id)_generateSQLForVariableExpression:(id)arg1 inContext:(id)arg2;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2;

@end
