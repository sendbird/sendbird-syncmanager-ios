//
//  SBSMMessageFilter.h
//  SyncManager
//
//  Created by sendbird-young on 08/01/2019.
//  Copyright © 2019 SendBird. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SendBirdSDK/SendBirdSDK.h>
#import "SBSMConstants.h"

@interface SBSMMessageFilter : NSObject <NSCopying, NSSecureCoding>

@property (copy, atomic, readonly, nullable) NSString *channelUrl;
@property (atomic, readonly) SBDMessageTypeFilter messageType;
@property (copy, atomic, readonly, nullable) NSString *customType;
@property (copy, atomic, readonly, nullable) NSArray <NSString *> *senderUserIds;

+ (nonnull instancetype)filter;
+ (nonnull instancetype)filterWithMessageType:(SBDMessageTypeFilter)messageType
                                   customType:(nullable NSString *)customType
                                senderUserIds:(nullable NSArray <NSString *> *)senderUserIds;
- (nonnull instancetype)initWithChannelUrl:(nullable NSString *)channelUrl
                               messageType:(SBDMessageTypeFilter)messageType
                                customType:(nullable NSString *)customType
                             senderUserIds:(nullable NSArray <NSString *> *)senderUserIds
NS_DESIGNATED_INITIALIZER;

/**
 *  DO NOT USE this initializer. Use `initWithChannelUrl:messageType:customType:senderUserIds:` instead.
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull NSPredicate *)predicate;
- (BOOL)isSubFilterOfFilter:(nonnull SBSMMessageFilter *)filter;

#pragma mark - NSObject
- (BOOL)isEqualToFilter:(nonnull SBSMMessageFilter *)filter;

#pragma mark - NSSecureCoding
- (nonnull instancetype)initWithCoder:(nullable NSCoder *)aDecoder NS_DESIGNATED_INITIALIZER;

@end

