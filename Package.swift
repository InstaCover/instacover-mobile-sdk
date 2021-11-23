// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "InstaCover",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "InstaCover",
            targets: ["InstaCover"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "InstaCover",
            path: "./InstaCover.xcframework"
        ),
    ]
)
