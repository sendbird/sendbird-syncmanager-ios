//
//  SBSMSyncManagerOptions.h
//  SendBirdSyncManager
//
//  Created by sendbird-young on 06/06/2019.
//  Copyright © 2019 SendBird. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SBSMConstants.h"

@interface SBSMSyncManagerOptions : NSObject

@property (class, readonly) NSInteger infinity;

@property (nonatomic) SBSMMessageResendPolicy messageResendPolicy;
@property (nonatomic, setter=setMessageCollectionCapacity:) NSUInteger messageCollectionCapacity;
@property (nonatomic, setter=setAutomaticResendMessageRetryCount:) NSInteger automaticResendMessageRetryCount;
@property (atomic) NSInteger maxFailedMessageCountPerChannel;
@property (atomic) NSInteger failedMessageRetentionDays;

+ (nonnull instancetype)options;

@end

