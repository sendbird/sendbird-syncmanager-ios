//
//  SBSMUtils.h
//  SyncManager
//
//  Created by sendbird-young on 2018. 7. 4..
//  Copyright © 2018년 SendBird. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifdef DEBUG
#define SBLog(s,...)    NSLog(@"+++++ [%@] %@", NSStringFromClass([self class]), [NSString stringWithFormat:(s), ##__VA_ARGS__]);
#else
#define SBLog(s,...)
#endif

@protocol SBSMCollection;
@protocol SBSMObject;

@class SBDBaseMessage;

#pragma mark - message index
@interface SBSMMessageIndex : NSObject

@property (atomic, readonly) NSUInteger indexOfMessage;
@property (atomic, readonly) NSUInteger indexOfPreviousMessage;

+ (nullable instancetype)indexOfMessage:(NSUInteger)indexOfMessage
                 indexOfPreviousMessage:(NSUInteger)indexOfPreviousMessage;
- (BOOL)containsMessage;

@end

#pragma mark - utils
@interface SBSMUtils : NSObject

+ (void)compareDifferenceBetweenMessages1:(nonnull NSArray <SBDBaseMessage *> *)messages1
                             andMessages2:(nonnull NSArray <SBDBaseMessage *> *)messages2
                            resultHandler:(nonnull void (^)(NSArray <SBDBaseMessage *> * _Nonnull insertedMessages1,
                                                            NSArray <SBDBaseMessage *> * _Nonnull updatedMessages1,
                                                            NSArray <SBDBaseMessage *> * _Nonnull deletedMessages1,
                                                            NSArray <SBDBaseMessage *> * _Nonnull insertedMessages2,
                                                            NSArray <SBDBaseMessage *> * _Nonnull updatedMessages2,
                                                            NSArray <SBDBaseMessage *> * _Nonnull deletedMessages2,
                                                            NSArray <SBDBaseMessage *> * _Nonnull sameMessages))resultHandler;
+ (void)mergeMessages:(nonnull NSArray <SBDBaseMessage *> *)mergingMessages
     intoBaseMessages:(nonnull NSMutableArray <SBDBaseMessage *> *)mutableBaseMessages
        resultHandler:(nullable void (^)(NSArray <SBDBaseMessage *> * _Nonnull insertedMessages,
                                         NSArray <SBDBaseMessage *> * _Nonnull updatedMessages,
                                         NSArray <SBDBaseMessage *> * _Nonnull deletedMessages))resultHandler;
+ (nonnull SBSMMessageIndex *)indexOfMessage:(nonnull SBDBaseMessage *)message
                                  ofMessages:(nonnull NSArray <SBDBaseMessage *> *)messages;
+ (nonnull SBSMMessageIndex *)indexOfMessageId:(long long)messageId ofMessages:(nonnull NSArray <SBDBaseMessage *> *)messages;
+ (nonnull NSArray<SBSMMessageIndex *> *)indexesOfMessages:(nonnull NSArray <SBDBaseMessage *> *)messages onMessages:(nonnull NSArray<SBDBaseMessage *> *)baseMessages; 

@end
