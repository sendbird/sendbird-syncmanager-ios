//
//  SBSMMessageCollection.h
//  SyncManager
//
//  Created by gyuyoung Hwang on 23/06/2018.
//  Copyright © 2018 SendBird. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SBSMComparator.h"
#import "SBSMConstants.h"

@class SBDBaseMessage, SBDGroupChannel;
@class SBSMMessageCollection, SBSMMessageFilter;

@protocol SBSMMessageCollectionDelegate <NSObject>

@optional
- (void)collection:(nonnull SBSMMessageCollection *)collection
   didReceiveEvent:(SBSMMessageEventAction)action
          messages:(nonnull NSArray <SBDBaseMessage *> *)messages
DEPRECATED_MSG_ATTRIBUTE("Use `collection:didReceiveEvent:succeededMessages:` instead");

- (void)collection:(nonnull SBSMMessageCollection *)collection didReceiveEventAction:(SBSMMessageEventAction)action
 succeededMessages:(nonnull NSArray<SBDBaseMessage *> *)succeededMessages;

- (void)collection:(nonnull SBSMMessageCollection *)collection didReceiveEventAction:(SBSMMessageEventAction)action
   pendingMessages:(nonnull NSArray<SBDBaseMessage *> *)pendingMessages;

- (void)collection:(nonnull SBSMMessageCollection *)collection didReceiveEventAction:(SBSMMessageEventAction)action
    failedMessages:(nonnull NSArray<SBDBaseMessage *> *)failedMessages reason:(SBSMFailedMessageEventActionReason)reason;

@end

@interface SBSMMessageCollection : NSObject <SBSMComparator>

@property (weak, atomic, nullable) id<SBSMMessageCollectionDelegate> delegate;
@property (strong, nonatomic, readonly, nonnull) NSArray <SBDBaseMessage *> *messages
DEPRECATED_MSG_ATTRIBUTE("Use `succeededMessages` instead");
@property (strong, nonatomic, readonly, nonnull) NSArray <SBDBaseMessage *> *pendingMessages;
@property (strong, nonatomic, readonly, nonnull) NSArray <SBDBaseMessage *> *failedMessages;
@property (strong, nonatomic, readonly, nonnull) NSArray <SBDBaseMessage *> *succeededMessages;
@property (strong, nonatomic, readonly, nonnull) SBDGroupChannel *channel;
@property (nonatomic, readonly) NSUInteger limit;
@property (nonatomic, readonly) BOOL reverse;

@property (copy, atomic, nonnull, readonly) SBSMMessageHandler handleSendMessageResponse;

- (nonnull instancetype)init NS_UNAVAILABLE;

#pragma mark - initializer
- (nonnull instancetype)initWithChannel:(nonnull SBDGroupChannel *)channel
                                 filter:(nullable SBSMMessageFilter *)filter
                     viewpointTimestamp:(long long)viewpointTimestamp
                                  limit:(NSUInteger)limit
                                reverse:(BOOL)reverse
NS_DESIGNATED_INITIALIZER;
+ (nonnull instancetype)collectionWithChannel:(nonnull SBDGroupChannel *)channel
                                       filter:(nullable SBSMMessageFilter *)filter
                           viewpointTimestamp:(long long)viewpointTimestamp;
+ (void)createWithChannelUrl:(nonnull NSString *)channelUrl
                      filter:(nullable SBSMMessageFilter *)filter
          viewpointTimestamp:(long long)viewpointTimestamp
           completionHandler:(nonnull SBSMMessageCollectionHandler)completionHandler;
- (void)resetViewpointTimestamp:(long long)viewpointTimestamp;
- (void)remove;

#pragma mark - load
- (void)fetchInDirection:(SBSMMessageDirection)direction
       completionHandler:(nullable SBSMErrorHandler)completionHandler;
- (void)fetchFailedMessages:(nullable SBSMErrorHandler)completionHandler;

#pragma mark - current user's message
- (void)appendMessage:(nonnull SBDBaseMessage *)message;
- (void)updateMessage:(nonnull SBDBaseMessage *)message;
- (void)deleteMessage:(nonnull SBDBaseMessage *)message;

#pragma mark - Message capacity
- (NSUInteger)messageCount;

@end
