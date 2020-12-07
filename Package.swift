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
                 url: "https://github.com/zendesk/support_providers_sdk_ios",
                 from: "5.2.0")
    ],
    targets: [
        .binaryTarget(
            name: "ZendeskAnswerBotProvidersSDK",
            path: "AnswerBotProvidersSDK.xcframework"
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
