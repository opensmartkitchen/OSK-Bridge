// swift-tools-version:4.2
import PackageDescription

let package = Package(
    name: "OSKBridge",
    products: [
        // Executables
        .executable(name: "osk_bridge_swift", targets: ["osk_bridge_swift"]),
        // Libraries
        .library(name: "lib_c", targets: ["lib_c"]),
        // vanilla
        .library(name: "lib_cpp", targets: ["lib_cpp"]),
        .library(name: "lib_cpp_cbind", targets: ["lib_cpp_cbind"]),
        // strawberry
        .library(name: "OskGadgetCWrap", targets: ["OskGadgetCWrap"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "lib_c", dependencies:[]),
        // vanilla cpp
        .target(name: "lib_cpp", dependencies:[]),
        .target(name: "lib_cpp_cbind", dependencies:["lib_cpp"]),
        
        // strawberry cpp
        .target(name: "OskGadgetCWrap", dependencies:[]),
        
        // flavor swirl
        .target(
            name: "osk_bridge_swift", 
            dependencies:["lib_c", "lib_cpp_cbind", "OskGadgetCWrap"]
        ),
    ],
    swiftLanguageVersions: [.v4_2]
)
