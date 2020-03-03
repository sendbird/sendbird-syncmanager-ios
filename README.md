# [SendBird](https://sendbird.com) SyncManager for iOS
[SendBird](https://sendbird.com) SyncManager is a framework that caches and manages channels and messages of [SendBird SDK](https://github.com/sendbird/sendbird-ios-framework). The SyncManager offers an event-based data management so that each view would see a single method by subscribing data event. And it stores the data into database(sqlite) which implements local caching for faster loading.

[![Platform](https://img.shields.io/badge/platform-iOS-orange.svg)](https://cocoapods.org/pods/SendBirdSyncManager)
[![Languages](https://img.shields.io/badge/language-Objective--C%20%7C%20Swift-orange.svg)](https://github.com/sendbird/sendbird-syncmanager-ios)
[![CocoaPods](https://img.shields.io/badge/CocoaPods-compatible-green.svg)](https://cocoapods.org/pods/SendBirdSyncManager)
[![Carthage compatible](https://img.shields.io/badge/Carthage-compatible-4BC51D.svg?style=flat)](https://github.com/Carthage/Carthage)
[![Commercial License](https://img.shields.io/badge/license-Commercial-brightgreen.svg)](https://github.com/sendbird/sendbird-syncmanager-ios/blob/master/LICENSE.md)

## Documentation
[SyncManager for iOS](https://docs.sendbird.com/ios/sync_manager_getting_started)

## Install SendBird SyncManager Framework from CocoaPods

Add below into your Podfile on Xcode.

```
platform :ios, '8.0'
use_frameworks!

target YOUR_PROJECT_TARGET do
  pod 'SendBirdSyncManager'
end
```

Install SendBird SyncManager Framework through CocoaPods.

```
pod install
```

Update SendBird SyncManager Framework through CocoaPods.

```
pod update SendBirdSyncManager
```

Now you can see installed SendBird framework by inspecting YOUR_PROJECT.xcworkspace.

> Note: `SendBirdSyncManager` is dependent with `SendBird SDK`. If you install `SendBirdSyncManager`, Cocoapods automatically install `SendBird SDK` as well. And the minimum version of `SendBird SDK` is **3.0.155**.

## Install SendBird Framework from Carthage

1. Add `github "sendbird/sendbird-syncmanager-ios"` to your `Cartfile`.
2. Run `carthage update`.
3. Go to your Xcode project's "General" settings. Open `<YOUR_XCODE_PROJECT_DIRECTORY>/Carthage/Build/iOS` in Finder and drag `SendBirdSyncManager.framework` to the "Embedded Binaries" section in Xcode. Make sure `Copy items if needed` is selected and click `Finish`.
