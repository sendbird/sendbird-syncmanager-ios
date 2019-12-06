//
//  SBSMConstants.h
//  SyncManager
//
//  Created by sendbird-young on 2018. 8. 10..
//  Copyright © 2018년 SendBird. All rights reserved.
//

#ifndef SBSMConstants_h
#define SBSMConstants_h

#import <Foundation/Foundation.h>
#import "SBDBaseChannel+SyncManager.h"
#import "SBDBaseMessage+SyncManager.h"

@class SBDGroupChannel, SBDBaseMessage, SBDError;
@class SBSMMessageCollection;

typedef void(^SBSMVoidHandler)(void);
typedef void(^SBSMErrorHandler)(SBDError * _Nullable error);
typedef void(^SBSMBoolHandler)(BOOL boolValue);
typedef void(^SBSMLongLongHandler)(long long value);

#pragma mark - comparator
typedef NSComparisonResult(^SBSMObjectComparator)(id<SBSMObject> _Nonnull object1,
                                                  id<SBSMObject> _Nonnull object2);
typedef NSComparisonResult(^SBSMChannelComparator)(SBDGroupChannel * _Nonnull channel1,
                                                   SBDGroupChannel * _Nonnull channel2);
typedef NSComparisonResult(^SBSMMessageComparator)(SBDBaseMessage * _Nonnull message1,
                                                   SBDBaseMessage * _Nonnull message2);

#pragma mark - channel
typedef void(^SBSMGetChannelsHandler)(NSArray <SBDGroupChannel *> * _Nonnull channels,
                                      SBDError * _Nullable error);
typedef void(^SBSMMessageHandler)(SBDBaseMessage * _Nullable message, SBDError * _Nullable error);
typedef void(^SBSMGetChannelHandler)(SBDGroupChannel * _Nullable channel,
                                     SBDError * _Nullable error);
typedef void(^SBSMChannelQueryCompletionHandler)(NSArray<SBDGroupChannel *> * _Nullable channels,
                                                 SBDError * _Nullable error);
typedef NSComparisonResult(^SBSMChannelComparison)(SBDGroupChannel * _Nonnull channel1,
                                                   SBDGroupChannel * _Nonnull channel2)
DEPRECATED_MSG_ATTRIBUTE("use `SBSMChannelComparator`");

#pragma mark - message
typedef void(^SBSMMessageCollectionHandler)(SBSMMessageCollection * _Nullable collection,
                                            SBDError * _Nullable error);
typedef void(^SBSMGetMessagesHandler)(NSArray <SBDBaseMessage *> * _Nonnull messages,
                                      SBDError * _Nullable error);
typedef void(^SBSMUpdatedMessagesHandler)(NSArray <SBDBaseMessage *> * _Nonnull updatedMessages,
                                          SBDError * _Nullable error);
typedef void(^SBSMUpsertMessagesHandler)(NSArray <SBDBaseMessage *> * _Nonnull insertedMessages,
                                         NSArray <SBDBaseMessage *> * _Nonnull updatedMessages,
                                         SBDError * _Nullable error);

#pragma mark - enum
typedef NS_ENUM(NSUInteger, SBSMChannelEventAction) {
    SBSMChannelEventActionNone = 0,
    SBSMChannelEventActionInsert,
    SBSMChannelEventActionUpdate,
    SBSMChannelEventActionRemove,
    SBSMChannelEventActionMove,
    SBSMChannelEventActionClear,
};

typedef NS_ENUM(NSUInteger, SBSMMessageEventAction) {
    SBSMMessageEventActionNone = 0,
    SBSMMessageEventActionInsert,
    SBSMMessageEventActionUpdate,
    SBSMMessageEventActionRemove,
    SBSMMessageEventActionClear,
};

typedef NS_ENUM(NSUInteger, SBSMMessageDirection) {
    SBSMMessageDirectionPrevious = 1,
    SBSMMessageDirectionNext,
};

typedef NS_ENUM(NSUInteger, SBSMMessageResendPolicy) {
    SBSMMessageResendPolicyNone = 0,
    SBSMMessageResendPolicyManual = 1,
    SBSMMessageResendPolicyAutomatic = 2,
};

typedef NS_ENUM(NSUInteger, SBSMFailedMessageEventActionReason) {
    SBSMFailedMessageEventActionReasonNone = 0,
    SBSMFailedMessageEventActionReasonUpdateResendFailed,
    SBSMFailedMessageEventActionReasonRemoveResendSucceeded,
    SBSMFailedMessageEventActionReasonRemoveRetentionExpired,
    SBSMFailedMessageEventActionReasonRemoveExceededMaxCount,
    SBSMFailedMessageEventActionReasonRemoveManualAction,
    SBSMFailedMessageEventActionReasonRemoveUnknown,
};

#endif /* SBSMConstants_h */
