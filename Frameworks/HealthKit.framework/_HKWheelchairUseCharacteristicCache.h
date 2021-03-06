/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKWheelchairUseCharacteristicCache : NSObject {
    int  _characteristicUpdateToken;
    HKHealthStore * _healthStore;
    NSHashTable * _observers;
    long long  _queryRetries;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _state;
    long long  _wheelchairUse;
}

- (void).cxx_destruct;
- (void)_alertObserversDidUpdateToWheelchairUser:(bool)arg1;
- (void)_fetchWheelchairUse;
- (void)_fetchWheelchairUseIfNecessary;
- (void)_handleFetchError:(id)arg1;
- (void)_handleFetchSuccess:(id)arg1;
- (bool)_needsFetch;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithHealthStore:(id)arg1;
- (bool)isWheelchairUser;
- (void)removeObserver:(id)arg1;

@end
