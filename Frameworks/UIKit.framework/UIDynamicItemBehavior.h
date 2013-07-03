/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface UIDynamicItemBehavior : UIDynamicBehavior  {
    BOOL _useDefaultViewPropertiesApplier;
    BOOL _useCircularBoundingBox;
    struct { 
        unsigned int elasticityChanged : 1; 
        unsigned int frictionChanged : 1; 
        unsigned int densityChanged : 1; 
        unsigned int resistanceChanged : 1; 
        unsigned int angularResistanceChanged : 1; 
        unsigned int rotationEnabledChanged : 1; 
        unsigned int useDefaultViewPropertiesApplierChanged : 1; 
    } _stateFlags;
    BOOL _allowsRotation;
    float _elasticity;
    float _friction;
    float _density;
    float _resistance;
    float _angularResistance;
}

@property(readonly) NSArray * items;
@property float elasticity;
@property float friction;
@property float density;
@property float resistance;
@property float angularResistance;
@property BOOL allowsRotation;


- (id)items;
- (void)setDensity:(float)arg1;
- (void)setFriction:(float)arg1;
- (void)setAllowsRotation:(BOOL)arg1;
- (float)density;
- (float)friction;
- (BOOL)allowsRotation;
- (void)_commonInit;
- (id)init;
- (id)description;
- (void)setUseDefaultViewPropertiesApplier:(BOOL)arg1;
- (void)applyImpulse:(struct CGPoint { float x1; float x2; })arg1 toItem:(id)arg2;
- (BOOL)_rotationEnabledForItem:(id)arg1;
- (float)_massForItem:(id)arg1;
- (float)_angularResistanceForItem:(id)arg1;
- (float)_resistanceForItem:(id)arg1;
- (float)_densityForItem:(id)arg1;
- (float)_frictionForItem:(id)arg1;
- (float)_elasticityForItem:(id)arg1;
- (float)angularVelocityForItem:(id)arg1;
- (void)addAngularVelocity:(float)arg1 forItem:(id)arg2;
- (float)angleForItem:(id)arg1;
- (void)setAngle:(float)arg1 forItem:(id)arg2;
- (struct CGPoint { float x1; float x2; })positionForItem:(id)arg1;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1 forItem:(id)arg2;
- (struct CGPoint { float x1; float x2; })linearVelocityForItem:(id)arg1;
- (void)addLinearVelocity:(struct CGPoint { float x1; float x2; })arg1 forItem:(id)arg2;
- (void)setAngularResistance:(float)arg1;
- (void)setResistance:(float)arg1;
- (void)setElasticity:(float)arg1;
- (void)addItem:(id)arg1;
- (void)_setUseCircularBoundingBox:(BOOL)arg1;
- (BOOL)_useCircularBoundingBox;
- (void)_reevaluate:(unsigned int)arg1;
- (BOOL)useDefaultViewPropertiesApplier;
- (void)_configureBody:(id)arg1 forView:(id)arg2;
- (float)angularResistance;
- (float)resistance;
- (float)elasticity;
- (void)_dissociate;
- (void)_associate;
- (id)initWithItems:(id)arg1;
- (void)removeItem:(id)arg1;

@end
