//
//  SBSMOperationQueue.h
//  SendBirdSyncManager
//
//  Created by sendbird-young on 10/10/2019.
//  Copyright © 2019 SendBird. All rights reserved.
//

#import <Foundation/Foundation.h>

__attribute__((unavailable("This class is unavailable. Please use NSOperation or GCD instead")))
@interface SBSMOperationQueue : NSObject

@property (strong, nullable) dispatch_queue_t thread DEPRECATED_ATTRIBUTE;

+ (nonnull instancetype)queue DEPRECATED_ATTRIBUTE;
- (void)setMaxConcurrentOperationCount:(NSUInteger)count DEPRECATED_ATTRIBUTE;
- (nonnull SBSMOperation *)enqueue:(nonnull void(^)(void))taskBlock
                       synchronous:(BOOL)synchronous
DEPRECATED_ATTRIBUTE;
- (nonnull SBSMOperation *)enqueue:(nonnull void(^)(void))taskBlock DEPRECATED_ATTRIBUTE;
- (void)resume DEPRECATED_ATTRIBUTE;
- (void)pause DEPRECATED_ATTRIBUTE;

@end
