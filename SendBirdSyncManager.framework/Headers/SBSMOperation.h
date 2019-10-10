//
//  SBSMOperation.h
//  SendBirdSyncManager
//
//  Created by sendbird-young on 10/10/2019.
//  Copyright © 2019 SendBird. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SBSMCommand;

__attribute__((unavailable("This class is unavailable. Please use NSOperation or GCD instead")))
@interface SBSMOperation : NSOperation

- (nonnull instancetype)init NS_UNAVAILABLE;

- (void)complete DEPRECATED_ATTRIBUTE;

@end
