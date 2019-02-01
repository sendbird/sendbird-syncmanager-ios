//
//  SBSMViewUtils.h
//  SyncManager
//
//  Created by sendbird-young on 2018. 9. 3..
//  Copyright © 2018년 SendBird. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SBSMViewUtils : NSObject

+ (void)tableView:(nonnull UITableView *)tableView performBatchUpdates:(nonnull void (^)(UITableView * _Nonnull tableView))updateProcess completion:(nullable void(^)(BOOL finished))completionHandler;

@end
