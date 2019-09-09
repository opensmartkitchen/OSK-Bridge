# OSK-Bridge

<p align="center">
    <a href="LICENSE">
        <img src="http://img.shields.io/badge/license-Apache 2.0-brightgreen.svg" alt="MIT License">
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

## macOS
swift package generate-xcodeproj
  
swift build \
  -Xcc -std=c11 \
  -Xcxx -std=c++11 \
  -Xcxx -stdlib=libc++ \
  -Xcxx -I/opt/opencv/current/include/opencv4 \
  -Xlinker -lpthread \
  -Xlinker -lopencv_core \
  -Xlinker -lopencv_highgui \
  -Xlinker -lopencv_videoio \
  -Xlinker -lopencv_imgproc \
  -Xlinker -lopencv_imgcodecs \
  -Xlinker -lopencv_video \
  -Xlinker -L/opt/opencv/current/lib \
  -Xlinker -L/usr/local/lib

## NVIDIA Nano
swift build \
  -Xcxx -std=gnu++11 \
  -Xcxx -I/usr/lib/aarch64-linux-gnu/qt5/mkspecs/linux-g++ \
  -Xlinker -lpthread \
  -Xlinker -lopencv_core \
  -Xlinker -lopencv_highgui \
  -Xlinker -lopencv_videoio \
  -Xlinker -lopencv_imgproc \
  -Xlinker -lopencv_imgcodecs \
  -Xlinker -lopencv_video \
  -Xlinker -L/opt/opencv/current/lib \
  -Xlinker -L/usr/local/lib \
  -Xcxx -DOSK_HEADLESS=true


swift run \
    -Xcxx -std=gnu++11 \
    -Xcxx -I/usr/lib/aarch64-linux-gnu/qt5/mkspecs/linux-g++ \
    -Xlinker -lpthread \
    -Xlinker -lopencv_core \
    -Xlinker -lopencv_highgui \
    -Xlinker -lopencv_videoio \
    -Xlinker -lopencv_imgproc \
    -Xlinker -lopencv_imgcodecs \
    -Xlinker -lopencv_video \
    -Xlinker -L/opt/opencv/current/lib \
    -Xlinker -L/usr/local/lib \
    -Xcxx -DOSK_HEADLESS=true

## Ubuntu
swift build \
    -Xcc -std=c11 \
    -Xcxx -std=c++11 \
    -Xcxx -I/opt/opencv/current/include/opencv4 \
    -Xlinker -lpthread \
    -Xlinker -lopencv_core \
    -Xlinker -lopencv_highgui \
    -Xlinker -lopencv_videoio \
    -Xlinker -lopencv_imgproc \
    -Xlinker -lopencv_imgcodecs \
    -Xlinker -lopencv_video \
    -Xlinker -L/opt/opencv/current/lib \
    -Xlinker -L/usr/local/lib

swift run \
    -Xcc -std=c11 \
    -Xcxx -std=c++11 \
    -Xcxx -I/opt/opencv/current/include/opencv4 \
    -Xlinker -lpthread \
    -Xlinker -lopencv_core \
    -Xlinker -lopencv_highgui \
    -Xlinker -lopencv_videoio \
    -Xlinker -lopencv_imgproc \
    -Xlinker -lopencv_imgcodecs \
    -Xlinker -lopencv_video \
    -Xlinker -L/opt/opencv/current/lib \
    -Xlinker -L/usr/local/lib

#     -Xcxx -stdlib=libc++ \


#LIBS += -L/usr/local/lib

LIBS += -lopencv_core -lopencv_highgui -lopencv_videoio -lopencv_imgproc -lopencv_video

# build release:
swift build -c release -Xcxx -std=c++11 
```

## Resources <a id="linkResources"></a>[▴](#contents)


