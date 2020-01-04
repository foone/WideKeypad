## Wide-Keypad library for Arduino

**Authors:**  *Mark Stanley*, *Alexander Brevig*, *Foone Turing*

This is a variant of the (Arduino Keypad library)[https://github.com/Chris--A/Keypad], which changes the main datatype to be a 16-bit integer instead of a 8-bit one.
This makes it match the data types used by the Teensy keyboard library, so you don't need an additional layer of indirection to implement keypad-based USB keboards. 

## Original README from upstream

This repository is a copy of the code found here [[Arduino Playground]](http://playground.arduino.cc/Code/Keypad).

The source and file structure has been modified to conform to the newer `1.5r2` library specification and is not compatible with legacy IDE's.
For these IDE's, visit the link above to grab the pre `1.0` compatible version, or download it directly here:  [[pre `1.0` version]](http://playground.arduino.cc/uploads/Code/keypad.zip).