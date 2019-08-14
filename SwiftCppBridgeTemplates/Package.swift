// swift-tools-version:4.2
// See: https://github.com/apple/swift-package-manager/blob/swift-4.2-branch-04-30-2018/Documentation/PackageDescriptionV4.md
import PackageDescription

let package = Package(
    name: "SwiftCppBridgeTemplates",
    products: [
        .executable(name: "exec_cc", targets: ["exec_cc"]),
        .executable(name: "exec_cpp", targets: ["exec_cpp"]),
        .executable(name: "exec_swift", targets: ["exec_swift"]),
        .library(name: "lib_c", targets: ["lib_c"]),
        .library(name: "lib_cpp", targets: ["lib_cpp"]),
        .library(name: "lib_cpp_cbind", targets: ["lib_cpp_cbind"]),
        //.library(name: "LibCc", targets: ["lib_c"]),
        //.library(name: "LibCcStatic", type: .static, targets: ["lib_c"]),
        //.library(name: "LibCcDynamic", type: .dynamic, targets: ["lib_c"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "lib_c", dependencies:[]),
        .target(name: "lib_cpp", dependencies:[]),
        .target(name: "lib_cpp_cbind", dependencies:["lib_cpp"]),
        .target(name: "exec_cc", dependencies:["lib_c", "lib_cpp_cbind"]),
        .target(name: "exec_cpp", dependencies:["lib_c", "lib_cpp"]),
        .target(name: "exec_swift", dependencies:["lib_c", "lib_cpp_cbind"]),
    ],
    swiftLanguageVersions: [.v4_2]
)
