=Release 3.2.0=

* Added support for 1.0.3rA
* Added Class B
* Removed AutoSleep functionality
* Added Class B
** Added BeaconRx and BeaconLost events: mDotEvent.h
** Added BeaconLocked and BeaconData properties to mDotEvent
** Added getGPSTime to perform DeviceTimeReq
** Added ServerTimeSeconds and ServerTimeMillis to mDotEvent to return DeviceTimeAns
** setDeviceClass accepts argument of "B" to enter beacon acquisition state
** setPingPeriodicity, getPingPeriodicity to control Class B windows
** getNextTxMaxSize returns available payload bytes for next transmission
* Added getFrequencyOffset, setFrequencyOffset for fine tuning of Tx due to crystal variance
