// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "instacover",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "instacover",
            targets: ["instacover"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "instacover",
            path: "./instacover.xcframework"
        ),
    ]
)
