//
//  SBSMSyncManagerOptions.h
//  SendBirdSyncManager
//
//  Created by sendbird-young on 06/06/2019.
//  Copyright © 2019 SendBird. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SBSMConstants.h"

NS_ASSUME_NONNULL_BEGIN

@interface SBSMSyncManagerOptions : NSObject

@property (nonatomic) SBSMMessageResendPolicy messageResendPolicy;

+ (nonnull instancetype)options;

@end

NS_ASSUME_NONNULL_END
