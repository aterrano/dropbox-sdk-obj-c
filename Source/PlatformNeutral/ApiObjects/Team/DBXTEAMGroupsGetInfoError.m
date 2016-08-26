///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMGroupsGetInfoError.h"

@implementation DBXTEAMGroupsGetInfoError 

- (instancetype)initWithGroupNotOnTeam {
    self = [super init];
    if (self != nil) {
        _tag = DBXTEAMGroupsGetInfoErrorGroupNotOnTeam;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = DBXTEAMGroupsGetInfoErrorOther;
    }
    return self;
}

- (BOOL)isGroupNotOnTeam {
    return _tag == DBXTEAMGroupsGetInfoErrorGroupNotOnTeam;
}

- (BOOL)isOther {
    return _tag == DBXTEAMGroupsGetInfoErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXTEAMGroupsGetInfoErrorGroupNotOnTeam:
           return @"DBXTEAMGroupsGetInfoErrorGroupNotOnTeam";
        case DBXTEAMGroupsGetInfoErrorOther:
           return @"DBXTEAMGroupsGetInfoErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXTEAMGroupsGetInfoErrorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMGroupsGetInfoErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMGroupsGetInfoErrorSerializer serialize:self] description];
}

@end


@implementation DBXTEAMGroupsGetInfoErrorSerializer 

+ (NSDictionary *)serialize:(DBXTEAMGroupsGetInfoError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isGroupNotOnTeam]) {
        jsonDict[@".tag"] = @"group_not_on_team";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXTEAMGroupsGetInfoError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"group_not_on_team"]) {
        return [[DBXTEAMGroupsGetInfoError alloc] initWithGroupNotOnTeam];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXTEAMGroupsGetInfoError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end