# Wiring reference

## Analog controls

| Potentiometer | Signal pin | Function |
|---|---|---|
| Throttle | A0 | Engine throttle |
| Mixture | A1 | Mixture (firmware maps this to USB Brake axis) |
| Roll | A6 / D4 | Ailerons / X axis |
| Pitch | A3 | Elevator / Y axis |

For every potentiometer: outer leg 1 → VCC (5 V); middle leg → signal pin; outer leg 2 → GND.

## Digital controls

| Component | Pro Micro pin | Firmware input mode | USB button |
|---|---:|---|---:|
| Activation button | D2 | INPUT_PULLUP | 1 |
| Toggle 1 | D3 | INPUT_PULLUP | 2 |
| Toggle 2 | D5 | INPUT_PULLUP | 3 |
| Toggle 3 | D7 | INPUT_PULLUP | 4 |
| Toggle 4 | D8 | INPUT_PULLUP | 5 |

Pushbutton: one terminal → D2; other terminal → GND.

Each 3-terminal toggle: COM/middle → GND; one outer terminal → assigned digital pin; remaining outer terminal left disconnected.

All grounds are common. Inputs are active-low because the firmware uses internal pull-ups.

## Source references

The original screenshots are retained in `../Images/`. Pin labels can vary across Pro Micro clones and board variants; confirm the pinout for your exact board before wiring.
