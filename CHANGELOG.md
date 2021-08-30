
# Release 4.1.0

* Update ChannelPlan_AU915.cpp - add max payload values for DR8-DR13
* Fixed issue where accessing files and sleeping in different threads would cause the MDot to lock up.
* Ability to save a backup of protected settings (Device ID, Network ID, Network Key, and Gen App Key) in MDot One-Time-Programmable storage.
* FOTA session now checks file system for space required to complete file download and upgrade process.  If inadequate space is available files are removed.
* Ability to set trigger for WAKE pin as rising, falling, or either.
* Updated to MBed OS 6.8.
* Support for AS923-4.

# Release 3.2.5

## Bug Fixes
* Restore channel mask in AU/US with AT+FSB=0
* Wait for non-zero RSSI during LBT channel activity test
* ADR back-off to DR0
* ADR back-off calculate min-DR from enabled channels


# Release 3.2.1

## Changes
* Upgrade mbed-os to 5.11.1
* Added support for LoRaWAN 1.0.3rA
* Removed AutoSleep functionality
* Added Class B
  * Added BeaconRx and BeaconLost events: mDotEvent.h
  * Added BeaconLocked and BeaconData properties to mDotEvent
  * Added getGPSTime to perform DeviceTimeReq
  * Added ServerTimeSeconds and ServerTimeMillis to mDotEvent to return DeviceTimeAns
  * setDeviceClass accepts argument of "B" to enter beacon acquisition state
  * setPingPeriodicity, getPingPeriodicity to control Class B windows
* getNextTxMaxSize returns available payload bytes for next transmission
* Added getFrequencyOffset, setFrequencyOffset for fine tuning of Tx due to crystal variance

## Bug Fixes
* Invalid MAC commands being processed
  * Verify length of last command
* Lock-up if sleep is called during/before Rx Windows
  * State is reset on wake-up
* Join when class C enabled could report false negative response for Rx2
  * Join timeout extended passed end of Rx2 window in Class C mode
* Repeated calls to restoreNetworkSession will flip channel mask in AU915 and US915
  * Channel mask is restored correctly with multiple calls

## Regressions in 3.2.0
* Downlink 16-bit counter rollover was not handled correctly


# Release 3.2.0

## Changes

* Added support for 1.0.3rA
* Added Class B
* Removed AutoSleep functionality
* Added Class B
  * Added BeaconRx and BeaconLost events: mDotEvent.h
  * Added BeaconLocked and BeaconData properties to mDotEvent
  * Added getGPSTime to perform DeviceTimeReq
  * Added ServerTimeSeconds and ServerTimeMillis to mDotEvent to return DeviceTimeAns
  * setDeviceClass accepts argument of "B" to enter beacon acquisition state
  * setPingPeriodicity, getPingPeriodicity to control Class B windows
* getNextTxMaxSize returns available payload bytes for next transmission
* Added getFrequencyOffset, setFrequencyOffset for fine tuning of Tx due to crystal variance


## Bug Fixes
* Invalid MAC commands being processed
  * Verify length of last command
* Lock-up if sleep is called during/before Rx Windows
  * State is reset on wake-up
* Join when class C enabled could report false negative response for Rx2
  * Join timeout extended passed end of Rx2 window in Class C mode
* Repeated calls to restoreNetworkSession will flip channel mask in AU915 and US915
  * Channel mask is restored correctly with multiple calls
