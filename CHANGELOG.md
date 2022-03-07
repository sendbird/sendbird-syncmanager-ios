# Change Log

### v1.1.43 (Mar 7, 2022)
* Supports the latest version of Sendbird Chat.

### v1.1.42 (Dec 22, 2021)
* Supports the latest version of Sendbird Chat.

### v1.1.41 (Nov 5, 2021)
* Fixed a bug when the channel is hidden.

### v1.1.40 (Oct 11, 2021)
* Improved stability 

### v1.1.39 (Jul 20, 2021)
* Improved stability 

### v1.1.38 (Jun 3, 2021)
* Fixed nested dispatch_sync deadlock 

### v1.1.37 (May 5, 2021)
* Fixed to send out failed message removal for file message after resent

### v1.1.36 (Dec 30, 2020)
* Improved stability

### v1.1.35 (Dec 29, 2020)
* Improved stability

### v1.1.34 (Nov 13, 2020)
* Added methods of `SBSMMessageCollection` to delete messages with message ID or request ID.
  * `deleteSucceededMessageWithMessageId:`
  * `deleteFailedMessageWithRequestId:`
  * `deletePendingMessageWithRequestId:`
* Fixed bug of handling the pending message.

### v1.1.33 (Oct 21, 2020)
* Fixed wrong reasons for a failed message.

### v1.1.32 (Oct 8, 2020)
* Added `fetchPendingMessages:`

### v1.1.31 (Sep 10, 2020)
* Fixed bug array off by one

### v1.1.30 (Sep 9, 2020)
* Improved stability 

### v1.1.29 (Sep 1, 2020)
* Improved stability

### v1.1.27 (Aug 5, 2020)
* Fixed sent message not cache issue
* Fixed failed messages not deleted properly after they sent successfully

### v1.1.26 (July 1, 2020)
* Fixed viewpoint comparison bug

### v1.1.25 (June 27, 2020)
* Fixed typo 
* Fixed infinite recursion bug

### v1.1.24 (June 18, 2020)
* Reverted to support legacy for `requestStatus`

### v1.1.23 (June  8, 2020)
* Fixed to add admin message properly when fetch
* Removed canceled message from automatic resend

### v1.1.22 (May 22, 2020)
* Added SyncManager version information to User-Agent
* Fixed automatic resend by saving message error code

### v1.1.21 (Apr 29, 2020)
* Fixed coredata issue 

### v1.1.20 (Apr 28, 2020)
* Added defense handling when accessing MOC 
* Changed automatic resend count default to 10 and max to 50
* Fixed bundle class initialize logic

### v1.1.19 (Mar 19, 2020)
* Resolved compatibility issue with Chat SDK v3.0.173 and v3.0.174.

### v1.1.18 (Mar 3, 2020)
* Fixed minor bug.

### v1.1.17 (Dec 18, 2019)
* Fixed a bug of fetching to next after coming back foreground.

### v1.1.16 (Dec 12, 2019)
* Added `fetchAllNextMessages:` in `SBSMMessageCollection` to fetch all new SucceededMessage in local database.
* Added `SBSMFetchResultHandler(BOOL hasMore, SBDError * _Nullable error)` to use in `fetchInDirection:completionHandler:`, `fetchAllNextMessages:`, with flag whether there's more data to fetch.
* Improved stability.

### v1.1.15 (Dec 6, 2019)
* Added delegates to receive the channel updated and removed event.
* Improved stability.

### v1.1.14 (Nov 25, 2019)
* Fixed minor bug.

### v1.1.12 (Nov 8, 2019)
* Failed message resend is operating only after the background sync succeeds at the first request.

### v1.1.11 (Oct 20, 2019)
* Fixed a bug of fetching to next after coming back foreground.
* Improved stability.

### v1.1.10 (Oct 17, 2019)
* Clearing messages when the channel of the messages was removed.
* Fixed a bug of ordering channels chronologically.
* Fixed a bug that give a duplicated file message event.
* Improved stability.

### v1.1.9 (Oct 14, 2019)
* Fixed a bug that doesn't give a message event after coming back foreground.
* Fixed a bug that channel collection doesn't receive a real time event.
* Fixed a bug that message collection doesn't give a message event when called `fetch(.previous)`.
* Improved stability.

### v1.1.8 (Oct 10, 2019)
* Added features that supports storing and resending messages which `SBDMessageRequestState` is `.Failed`.
  * New method `fetchFailedMessages()` in `SBSMMessageCollection` to fetch FailedMessage in local database.
  * New protocol `collection:didReceiveEventAction:succeededMessages:` of `SBSMMessageCollectionDelegate` to notify events of messages which `SBDMessageRequestState` is `.Succeeded`.
  * New protocol `collection:didReceiveEventAction:failedMessages:reason:` of `SBSMMessageCollectionDelegate` to notify events of messages which `SBDMessageRequestState` is `.Failed`.
  * New protocol `collection:didReceiveEventAction:pendingMessages:` of `SBSMMessageCollectionDelegate` to notify events of messages which `SBDMessageRequestState` is `.Pending`.
  * Deprecated `collection:didReceiveEvent:messages:` of `SBSMMessageCollectionDelegate` prorocol. It is replaced by `collection:didReceiveEventAction:succeededMessages:` and `collection:didReceiveEventAction:pendingMessages:`.
* Added new properties in `SBSMSyncManagerOptions` to configure options of `SBSMSyncManager`.
  * New property of  `messageCollectionCapacity` that configures message count limit of `SBSMMessageCollection` and message resend policy.
  * New property of `maxFailedMessageCountPerChannel` that configures maximum count of `failed messages` that one `SBDGroupChannel` can store.
  * New property of `failedMessageRetentionDays` that configures retention days of `failed messages`.
  * New property of `automaticResendMessageRetryCount` that configures the number of `failed message` retries.
* Added setters that configure thread where they want to receive `completion handler`, `event delegate`.
* Added ENUM `.Automatic` to `SBSMMessageResendPolicy` to support resending failed messages automatically.
* `SBSMOperationQueue`, `SBSMOperation` were deprecated.
* Improved stability.

### v1.1.7 (Oct 1, 2019)
* Hot fix a bug of fetching channels.

### v1.1.6 (Jun 13, 2019)
* Bitcode enabled in archiving build.

### v1.1.5 (Jun 11, 2019)
* Fixed a bug that can't fetch messages continuously in message collection.
* New class `SBSMSyncManagerOptions` to set optional values for syncmanager
* New enum type `SBSMMessageResendPolicy` to be used for resending a messages.
* Improved stability.

### v1.1.4 (May 14, 2019)
* Changed `resumeSynchronize` and `pauseSynchronize` as a class method.
* Fixed bug that give events as many as members when creating group channel at first.
* Improved thread stability.

### v1.1.3 (Apr 30, 2019)
* Improved thread stability.

### v1.1.2 (Apr 29, 2019)
* Auto retry when failed to request SendBird SDK
* Deletion serialized data of message when got a deleting event.
* Fixed nullability of initializer.
* Stabilized and improved performance. 
* Arranged code convention.

### v1.1.1 (Mar 23, 2019)
* Remove `SBSMChannelQuery` from header.

### v1.1.0 (Mar 19, 2019)
* Support full synchronization for channel.
* **Changed minimum compatible version of `SendBirdSDK` into v3.0.132.**
* Updated database model version into 1.1.0.
* **Removed** `clearCache` instance method in `SBSMSyncManager`. Use `clearCache` class method instead.
* **Removed** `SBSMChannelQuery`, `SBSMCollection` protocol. DO NOT USE.
* Changed `fetch:` method in `SBSMChannelCollection` that no longer support `SBSMChannelQuery` protocol.
* Removed unusing type definition `SBSMUpsertChannelsHandler`.
* Added `SBSMComparator` protocol for comparing channels or messages.
* Fixed error code.
* Stabilized and improved performance.

### v1.0.1 (Feb 18, 2019)
* Improved cache logic.
* Added comparator constants to compare channels and messages.
* Added methods for SyncManager SDK version and build number.
* Fixed attributes of properties in message collection.
* Fixed some bugs.

### v1.0.0 (Feb 8, 2019)
* First release.

