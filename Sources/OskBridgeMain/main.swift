// //////////////////////////////
// FILE: OskBridgeMain/main.swift
// //////////////////////////////
import Foundation
import OskGadgetCWrap

/// - Returns: seconds since 1970.01.01 00:00:00 UTC
func getUnixEpochSeconds(date dateString: String) -> Int64? {
    var formatStr = "yyyyMMddHHmmss"
    let dateFormatter = DateFormatter()
    if dateString.suffix(1) == "z" {
        formatStr.append("'z'")
        dateFormatter.timeZone = TimeZone(abbreviation: "UTC")
    } 
    dateFormatter.dateFormat = formatStr
    if let date = dateFormatter.date(from: dateString) {
        return Int64(date.timeIntervalSince1970)
    }
    else {
        return nil
    }
}

/// - Parameters: 
///     - unixepoch: Unix Epoch seconds
///     - format: `FormatType`. default = `.filename` "yyyyMMdd_HHmmss"
///     - utc: Bool (note default `false` removed)
/// - Returns: formatted UTC date time `String`
func getDateTimeString(unixepoch: Int, utc: Bool = false) -> String {
    // Note: NSTimeInteral is Double
    let date = Date(timeIntervalSince1970: Double(unixepoch))
    let dateFormatter = DateFormatter()
    var formatStr = "yyyyMMddHHmmss"
    if utc {
        formatStr.append("'z'")
    }
    dateFormatter.dateFormat = formatStr        
    if utc {
        dateFormatter.timeZone = TimeZone(abbreviation: "UTC")
    }
    return dateFormatter.string(from: date)
}

// /////////////////////
// OskGadget Checks
// /////////////////////

guard var oskGadget = oskGadgetCreate() else {
    fatalError()
}

print("=== timestamp ===")
let timestamp = oskGadgetGetLastTimestamp(oskGadget)
print(timestamp)
print(getDateTimeString(unixepoch: timestamp))

