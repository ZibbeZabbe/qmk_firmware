# ErgoDox infinity Colemak Configuration

Colemak layout with same layers as default ergodox ez keymap but heavily modified to support nordic language

The Infinity is two completely independent keyboards, and needs to be flashed
for the left and right halves seperately.  To flash them:

  - Make sure you are in the top-level qmk_firmware directory

  - Build the firmware with `make ergodox_infinity:zibbe`

  - Plug in the left hand keyboard only.

  - Press the program button (back of keyboard, above thumb pad).

  - Install the firmware with `sudo make ergodox_infinity:zibbe:dfu-util`

  - Build right hand firmware with `make ergodox_infinity:zibbe MASTER=right`

  - Plug in the right hand keyboard only.

  - Press the program button (back of keyboard, above thumb pad).

  - Install the firmware with `sudo make ergodox_infinity:zibbe:dfu-util MASTER=right`

