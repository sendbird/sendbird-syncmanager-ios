//
//  SBSMComparator.h
//  SyncManager
//
//  Created by sendbird-young on 2018. 9. 3..
//  Copyright © 2018년 SendBird. All rights reserved.
//

#ifndef SBSMComparator_h
#define SBSMComparator_h

#import <Foundation/Foundation.h>
#import "SBSMConstants.h"

@protocol SBSMObject;

@protocol SBSMComparator <NSObject>

- (NSComparisonResult)orderAscendingBetweenObject:(id<SBSMObject> _Nonnull)obj1 andObject:(id<SBSMObject> _Nonnull)obj2;
- (nonnull SBSMObjectComparator)comparator;

@end

#endif /* SBSMComparator_h */
