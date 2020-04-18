///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBCLOUDDOCSGetMetadataArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GetMetadataArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBCLOUDDOCSGetMetadataArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// API ID ("id:...") associated with the Cloud Doc.
@property (nonatomic, readonly, copy) NSString *fileId;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param fileId API ID ("id:...") associated with the Cloud Doc.
///
/// @return An initialized instance.
///
- (instancetype)initWithFileId:(nullable NSString *)fileId;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GetMetadataArg` struct.
///
@interface DBCLOUDDOCSGetMetadataArgSerializer : NSObject

///
/// Serializes `DBCLOUDDOCSGetMetadataArg` instances.
///
/// @param instance An instance of the `DBCLOUDDOCSGetMetadataArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBCLOUDDOCSGetMetadataArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBCLOUDDOCSGetMetadataArg *)instance;

///
/// Deserializes `DBCLOUDDOCSGetMetadataArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBCLOUDDOCSGetMetadataArg` API object.
///
/// @return An instantiation of the `DBCLOUDDOCSGetMetadataArg` object.
///
+ (DBCLOUDDOCSGetMetadataArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END