# Qt White Application

This repository contains a minimal Qt Widgets application that shows a
simple window with a white background.

## Building

The project uses CMake. A Qt 5 development environment must be installed.
To build the application, run:

```bash
cmake -S . -B build
cmake --build build
```

The resulting executable `QtWhiteApp` will be located in the `build`
directory.
