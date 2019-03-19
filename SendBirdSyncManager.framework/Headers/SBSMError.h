//
//  SBSMError.h
//  SendBirdSyncManager
//
//  Created by sendbird-young on 26/01/2019.
//  Copyright © 2019 SendBird. All rights reserved.
//

#ifndef SBSMError_h
#define SBSMError_h

typedef NS_ENUM(NSUInteger, SBSMErrorCode) {
    SBSMErrorCodeDatabaseIOError                = 810001,
    
    SBSMErrorCodeSetupNotCalled                 = 810100,
    
    SBSMErrorCodeDuplicatedFetch                = 810200,
    
    SBSMErrorCodeInvalidParameter               = 810300,
    SBSMErrorCodeInvalidTimeRange               = 810305,
};

#endif /* SBSMError_h */
