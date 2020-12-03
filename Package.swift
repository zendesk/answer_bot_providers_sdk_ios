// swift-tools-version:5.3
import PackageDescription
let package = Package(
    name: "ZendeskAnswerBotProvidersSDK",
    platforms: [
        .iOS(.v10)
    ],
    products: [
        .library(
            name: "ZendeskAnswerBotProvidersSDK",
            targets: [
              "ZendeskAnswerBotProvidersSDKTargets"
            ]
        )
    ],
    dependencies: [
        .package(name: "ZendeskSupportProvidersSDK",
                 url: "https://github.com/zendesk/support_providers_sdk_ios/releases/download/5.2.0/SupportProvidersSDK.xcframework.zip",
                 from: "5.2.0")
    ],
    targets: [
        .binaryTarget(
            name: "ZendeskAnswerBotProvidersSDK",
            url: "https://github.com/zendesk/answer_bot_providers_sdk_ios/releases/download/2.1.2/AnswerBotProvidersSDK.xcframework.zip",
            checksum: "584b60b74c14601873a40d8d244c9090d54afe10894306d9dcd1261792a7be75"
        ),
        .target(name: "ZendeskSupportSDKTargets",
                dependencies: [
                    .target(name: "ZendeskAnswerBotProvidersSDK"),
                    .product(name: "ZendeskSupportProvidersSDK", package: "ZendeskSupportProvidersSDK")
                ],
                path: "Sources"
        )
    ]
)
