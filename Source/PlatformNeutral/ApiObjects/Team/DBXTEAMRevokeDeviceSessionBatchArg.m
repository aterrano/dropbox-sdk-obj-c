///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMRevokeDeviceSessionArg.h"
#import "DBXTEAMRevokeDeviceSessionBatchArg.h"

@implementation DBXTEAMRevokeDeviceSessionBatchArg 

- (instancetype)initWithRevokeDevices:(NSArray<DBXTEAMRevokeDeviceSessionArg *> *)revokeDevices {
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](revokeDevices);

    self = [super init];
    if (self != nil) {
        _revokeDevices = revokeDevices;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXTEAMRevokeDeviceSessionBatchArgSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMRevokeDeviceSessionBatchArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMRevokeDeviceSessionBatchArgSerializer serialize:self] description];
}

@end


@implementation DBXTEAMRevokeDeviceSessionBatchArgSerializer 

+ (NSDictionary *)serialize:(DBXTEAMRevokeDeviceSessionBatchArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"revoke_devices"] = [DBXArraySerializer serialize:valueObj.revokeDevices withBlock:^id(id elem) { return [DBXTEAMRevokeDeviceSessionArgSerializer serialize:elem]; }];

    return jsonDict;
}

+ (DBXTEAMRevokeDeviceSessionBatchArg *)deserialize:(NSDictionary *)valueDict {
    NSArray<DBXTEAMRevokeDeviceSessionArg *> *revokeDevices = [DBXArraySerializer deserialize:valueDict[@"revoke_devices"] withBlock:^id(id elem) { return [DBXTEAMRevokeDeviceSessionArgSerializer deserialize:elem]; }];

    return [[DBXTEAMRevokeDeviceSessionBatchArg alloc] initWithRevokeDevices:revokeDevices];
}

@end