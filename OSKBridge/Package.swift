// swift-tools-version:4.2
import PackageDescription

let package = Package(
    name: "OSKBridge",
    products: [
        .executable(name: "osk_bridge_swift", targets: ["osk_bridge_swift"]),
        .library(name: "lib_c", targets: ["lib_c"]),
        .library(name: "lib_cpp", targets: ["lib_cpp"]),
        .library(name: "lib_cpp_cbind", targets: ["lib_cpp_cbind"]),
        .library(name: "lib_osk_gadget", targets: ["lib_osk_gadget"]),
        //.library(name: "LibCc", targets: ["lib_c"]),
        //.library(name: "LibCcStatic", type: .static, targets: ["lib_c"]),
        //.library(name: "LibCcDynamic", type: .dynamic, targets: ["lib_c"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "lib_c", dependencies:[]),
        .target(name: "lib_cpp", dependencies:[]),
        .target(name: "lib_cpp_cbind", dependencies:["lib_cpp"]),
        .target(name: "lib_osk_gadget", dependencies:[]),
        .target(name: "osk_bridge_swift", dependencies:["lib_c", "lib_cpp_cbind", "lib_osk_gadget"]),
    ],
    swiftLanguageVersions: [.v4_2]
)
