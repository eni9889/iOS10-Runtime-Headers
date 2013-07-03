/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class CBUUID, NSArray, NSNumber, CBPeripheral;

@interface CBService : NSObject  {
    CBPeripheral *_peripheral;
    CBUUID *_UUID;
    BOOL _isPrimary;
    NSArray *_includedServices;
    NSArray *_characteristics;
    NSNumber *_startHandle;
    NSNumber *_endHandle;
}

@property(readonly) CBPeripheral * peripheral;
@property(readonly) CBUUID * UUID;
@property(readonly) BOOL isPrimary;
@property(retain) NSArray * includedServices;
@property(retain) NSArray * characteristics;
@property(readonly) NSNumber * startHandle;
@property(readonly) NSNumber * endHandle;


- (id)characteristics;
- (id)handleCharacteristicsDiscovered:(id)arg1;
- (id)handleIncludedServicesDiscovered:(id)arg1;
- (id)peripheral;
- (void)setIncludedServices:(id)arg1;
- (id)includedServices;
- (id)endHandle;
- (id)startHandle;
- (void)setCharacteristics:(id)arg1;
- (id)initWithPeripheral:(id)arg1 dictionary:(id)arg2;
- (BOOL)isPrimary;
- (void)invalidate;
- (void)dealloc;
- (id)UUID;

@end
