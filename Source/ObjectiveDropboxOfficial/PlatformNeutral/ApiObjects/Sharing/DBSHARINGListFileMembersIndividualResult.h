///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGListFileMembersCountResult;
@class DBSHARINGSharingFileAccessError;

#pragma mark - API Object

///
/// The `ListFileMembersIndividualResult` union.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGListFileMembersIndividualResult : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBSHARINGListFileMembersIndividualResultTag` enum type represents the possible tag states
/// with which the `DBSHARINGListFileMembersIndividualResult` union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGListFileMembersIndividualResultTag) {
  /// The results of the query for this file if it was successful
  DBSHARINGListFileMembersIndividualResultResult,

  /// The result of the query for this file if it was an error.
  DBSHARINGListFileMembersIndividualResultAccessError,

  /// (no description).
  DBSHARINGListFileMembersIndividualResultOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBSHARINGListFileMembersIndividualResultTag tag;

/// The results of the query for this file if it was successful @note Ensure the `isResult` method
/// returns true before accessing, otherwise a runtime exception will be raised.
@property(nonatomic, readonly) DBSHARINGListFileMembersCountResult * _Nonnull result;

/// The result of the query for this file if it was an error. @note Ensure the `isAccessError`
/// method returns true before accessing, otherwise a runtime exception will be raised.
@property(nonatomic, readonly) DBSHARINGSharingFileAccessError * _Nonnull accessError;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "result".
///
/// Description of the "result" tag state: The results of the query for this file if it was
/// successful
///
/// @param result The results of the query for this file if it was successful
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithResult:(DBSHARINGListFileMembersCountResult * _Nonnull)result;

///
/// Initializes union class with tag state of "access_error".
///
/// Description of the "access_error" tag state: The result of the query for this file if it was an
/// error.
///
/// @param accessError The result of the query for this file if it was an error.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithAccessError:(DBSHARINGSharingFileAccessError * _Nonnull)accessError;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "result".
///
/// @note Call this method and ensure it returns true before accessing the `result` property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "result".
///
- (BOOL)isResult;

///
/// Retrieves whether the union's current tag state has value "access_error".
///
/// @note Call this method and ensure it returns true before accessing the `accessError` property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "access_error".
///
- (BOOL)isAccessError;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBSHARINGListFileMembersIndividualResult` union.
///
@interface DBSHARINGListFileMembersIndividualResultSerializer : NSObject

///
/// Serializes `DBSHARINGListFileMembersIndividualResult` instances.
///
/// @param instance An instance of the `DBSHARINGListFileMembersIndividualResult` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGListFileMembersIndividualResult` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGListFileMembersIndividualResult * _Nonnull)instance;

///
/// Deserializes `DBSHARINGListFileMembersIndividualResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGListFileMembersIndividualResult` API object.
///
/// @return An instantiation of the `DBSHARINGListFileMembersIndividualResult` object.
///
+ (DBSHARINGListFileMembersIndividualResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end