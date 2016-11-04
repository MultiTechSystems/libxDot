The Dot library provides a LoRaWan certified stack for LoRa communication using MultiTech mDot and xDot devices. The stack is compatible with mbed 5.

The name of the repository can be used to determine which device the stack was compiled for and if it's a development or production-ready build:
  * [libmDot-mbed5](http://github.com/MultiTechSystems/libmDot-mbed5/) -> production-ready build for mDot
  * [libmDot-dev-mbed5](http://github.com/MultiTechSystems/libmDot-dev-mbed5/) -> development build for mDot
  * [libxDot-mbed5](http://github.com/MultiTechSystems/libxDot-mbed5/) -> production-ready build for xDot
  * [libxDot-dev-mbed5](http://github.com/MultiTechSystems/libxDot-dev-mbed5/) -> development build for xDot

A changelog for the Dot library can be found [here](https://developer.mbed.org/teams/MultiTech/wiki/Dot-library-change-log).

The Dot library version and the version of mbed-os it was compiled against can both be found in the commit message for that revision of the Dot library. **Building your application with the same version of mbed-os as what was used to build the Dot library is highly recommended!**

The [Dot-Examples](https://developer.mbed.org/teams/MultiTech/code/Dot-Examples/) repository demonstrates how to use the Dot library in a custom application.

The [mDot](https://developer.mbed.org/platforms/MTS-mDot-F411/) and [xDot](https://developer.mbed.org/platforms/MTS-xDot-L151CC/) platform pages have lots of platform specific information and document potential issues, gotchas, etc, and provide instructions for getting started with development. Please take a look at the platform page before starting development as they should answer many questions you will have.
