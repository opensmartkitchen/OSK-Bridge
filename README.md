# OSK-Bridge

<p align="center">
    <a href="LICENSE">
        <img src="http://img.shields.io/badge/license-MIT-brightgreen.svg" alt="MIT License">
    </a>
    <a href="https://swift.org">
        <img src="http://img.shields.io/badge/swift-4.2.3-brightgreen.svg" alt="Swift 4.2.3">
    </a>
    <a href="https://en.cppreference.com/w/">
        <img src="https://img.shields.io/badge/std-c++11-brightgreen.svg" alt="c++11">
    </a>
</p>

_OSK-Bridge is part of the development software for the [Hackaday ÓSK Squirrel](https://hackaday.io/project/165563-sk-squirrel) project._

<a id="contents"></a>
[OSK Bridge](#osk-bridge-) •
[Resources](#resources-)

## OSK Bridge <a id="osk-bridge-"></a>[▴](#contents)

```
|-- Package.swift
`-- Sources
    |-- OskBridgeMain
    |   `-- main.swift
    `-- OskGadgetCWrap
        |-- OskGadget
        |   |-- oskgadget.cpp
        |   `-- oskgadget.hpp
        |-- OskGadgetCWrap.cpp
        `-- include
            `-- OskGadgetCWrap.hpp
```

``` sh
# build:
swift build -Xcxx -std=c++11
swift build -Xcxx -std=c++11 -Xcxx -stdlib=libc++
swift build -Xcxx -std=gnu++11

swift build \
  -Xcxx -std=c++11 \
  -Xcxx -I/opt/opencv/current/include/opencv4 \
  -Xlinker -lpthread \
  -Xlinker -lopencv_core \
  -Xlinker -lopencv_highgui \
  -Xlinker -lopencv_videoio \
  -Xlinker -L/opt/opencv/current/lib   

# build release:
swift build -c release -Xcxx -std=c++11 
```

## Resources <a id="linkResources"></a>[▴](#contents)


