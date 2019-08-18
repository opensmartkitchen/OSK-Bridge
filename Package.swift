// swift-tools-version:4.2
import PackageDescription

let package = Package(
    name: "OSKBridge",
    products: [
        // Executables
        .executable(name: "OskBridgeMain", targets: ["OskBridgeMain"]),
        // Libraries
        .library(name: "OskGadgetCWrap", targets: ["OskGadgetCWrap"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "OskGadgetCWrap", dependencies:[]),
        .target(
            name: "OskBridgeMain", 
            dependencies:["OskGadgetCWrap"]
        ),
    ],
    swiftLanguageVersions: [.v4_2]
)
