Pod::Spec.new do |s|
  s.name         = "SendBirdSyncManager"
  s.version      = "0.0.1"
  s.summary      = "Local cache framework based on SendBirdSDK"
  s.description  = "SendBirdSyncManager caches and manages channels and messages of SendBirdSDK"
  s.homepage     = "https://sendbird.com"
  s.documentation_url = 'https://docs.sendbird.com/ios'
  s.license      = "MIT"
  s.authors      		 = { "Jed Gyeong" => "jed.gyeong@sendbird.com", "Young Hwang" => "young.hwang@sendbird.com" }
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/smilefam/SendBird-SyncManager-iOS-framework.git", :tag => "v#{s.version}" }
  s.ios.vendored_frameworks = "SendBirdSyncManager.framework"
  s.ios.frameworks = ["CoreData", "SendBirdSDK"]
  s.requires_arc = true
  #s.dependency "SendBirdSDK", "~> v3.0.129"
  s.ios.library = "icucore"
end
