# Change Log

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

