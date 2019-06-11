//
//  SBSMSyncManager.h
//  SendBirdSyncManager
//
//  Created by sendbird-young on 25/01/2019.
//  Copyright © 2019 SendBird. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class SBSMSyncManagerOptions;

NSString * _Nonnull SBSMSyncManagerVersionString(void);
NSInteger SBSMSyncManagerBuildNumber(void);

@interface SBSMSyncManager : NSObject

+ (nonnull instancetype)setupWithUserId:(nonnull NSString *)userId;
+ (nonnull instancetype)setupWithUserId:(nonnull NSString *)userId
                                options:(nullable SBSMSyncManagerOptions *)options;
+ (nonnull instancetype)manager;

- (void)resumeSynchronize DEPRECATED_ATTRIBUTE;
- (void)pauseSynchronize DEPRECATED_ATTRIBUTE;

+ (void)resumeSynchronize;
+ (void)pauseSynchronize;

+ (void)clearCache;

@end

NS_ASSUME_NONNULL_END
