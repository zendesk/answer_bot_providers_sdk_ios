// swift-tools-version:5.3
import PackageDescription
let package = Package(
    name: "ZendeskAnswerBotProvidersSDK",
    platforms: [
        .iOS(.v11)
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
                 url: "https://github.com/zendesk/support_providers_sdk_ios",
                 .exact("support_providers_sdk_ios_version"))
    ],
    targets: [
        .binaryTarget(
            name: "AnswerBotProvidersSDK",
            path: "AnswerBotProvidersSDK.xcframework"
        ),
        .target(name: "ZendeskAnswerBotProvidersSDKTargets",
                dependencies: [
                    .target(name: "AnswerBotProvidersSDK"),
                    .product(name: "ZendeskSupportProvidersSDK", package: "ZendeskSupportProvidersSDK")
                ],
                path: "Sources"
        )
    ]
)
