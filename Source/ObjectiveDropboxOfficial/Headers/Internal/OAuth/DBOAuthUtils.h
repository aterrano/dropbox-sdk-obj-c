///
/// Copyright (c) 2020 Dropbox, Inc. All rights reserved.
///

#import <Foundation/Foundation.h>

@class DBOAuthPKCESession;

NS_ASSUME_NONNULL_BEGIN

/// Contains utility methods used in auth flow. e.g. method to construct URL query.
@interface DBOAuthUtils : NSObject

/// Creates URL query items needed by PKCE code flow.
+ (NSArray<NSURLQueryItem *> *)createPkceCodeFlowParamsForAuthSession:(DBOAuthPKCESession *)authSession;

/// Extracts query parameters from URL and removes percent encoding.
+ (NSDictionary<NSString *, NSString *> *)extractParamsFromUrl:(NSURL *)url;

@end

NS_ASSUME_NONNULL_END