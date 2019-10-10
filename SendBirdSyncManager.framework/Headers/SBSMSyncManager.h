//
//  SBSMSyncManager.h
//  SendBirdSyncManager
//
//  Created by sendbird-young on 25/01/2019.
//  Copyright © 2019 SendBird. All rights reserved.
//

#import <Foundation/Foundation.h>

 @class SBSMSyncManagerOptions;

NSString * _Nonnull SBSMSyncManagerVersionString(void);
NSInteger SBSMSyncManagerBuildNumber(void);

@interface SBSMSyncManager : NSObject

+ (nonnull instancetype)setupWithUserId:(nonnull NSString *)userId;
+ (nonnull instancetype)setupWithUserId:(nonnull NSString *)userId
                                options:(nonnull SBSMSyncManagerOptions *)options;
+ (nonnull instancetype)manager;

- (void)resumeSynchronize DEPRECATED_MSG_ATTRIBUTE("Use +resumeSynchronize instead");
- (void)pauseSynchronize DEPRECATED_MSG_ATTRIBUTE("Use +pauseSynchronize instead");

+ (void)resumeSynchronize;
+ (void)pauseSynchronize;

+ (void)clearCache;

#pragma mark - thread management
+ (void)setCompletionQueue:(dispatch_queue_t _Nullable)queue;
+ (void)setDelegateQueue:(dispatch_queue_t _Nullable)queue;

@end

