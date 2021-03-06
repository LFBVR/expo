#import <CoreMotion/CoreMotion.h>
#import <ReactABI28_0_0/ABI28_0_0RCTBridge.h>
#import "ABI28_0_0EXScopedEventEmitter.h"

@protocol ABI28_0_0EXGyroscopeScopedModuleDelegate

- (void)sensorModuleDidSubscribeForGyroscopeUpdates:(id)scopedSensorModule withHandler:(void (^)(NSDictionary *event))handlerBlock;
- (void)sensorModuleDidUnsubscribeForGyroscopeUpdates:(id)scopedSensorModule;
- (void)setGyroscopeUpdateInterval:(NSTimeInterval)intervalMs;

@end

@interface ABI28_0_0EXGyroscope : ABI28_0_0EXScopedEventEmitter

@end
