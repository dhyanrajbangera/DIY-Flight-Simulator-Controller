
#include <Joystick.h>

// =================================
// POTENTIOMETER CONNECTIONS
// =================================

const int PIN_THROTTLE = A0;
const int PIN_MIXTURE  = A1;
const int PIN_ROLL     = A6;
const int PIN_PITCH    = A3;

// =================================
// BUTTON CONNECTIONS
// =================================

const int PIN_BUTTON = 2;

const int SWITCH_1 = 3;
const int SWITCH_2 = 5;
const int SWITCH_3 = 7;
const int SWITCH_4 = 8;

// =================================
// USB JOYSTICK CONFIGURATION
// =================================

Joystick_ FlightYoke(
  JOYSTICK_DEFAULT_REPORT_ID,
  JOYSTICK_TYPE_JOYSTICK,
  5,      // 5 buttons
  0,      // No hat switches
  true,   // X Axis
  true,   // Y Axis
  false,  // Z Axis
  false,  // Rx Axis
  false,  // Ry Axis
  false,  // Rz Axis
  false,  // Rudder
  true,   // Throttle
  false,  // Accelerator
  true,   // Brake
  false   // Steering
);

// =================================
// SETUP
// =================================

void setup() {

  pinMode(PIN_BUTTON, INPUT_PULLUP);

  pinMode(SWITCH_1, INPUT_PULLUP);
  pinMode(SWITCH_2, INPUT_PULLUP);
  pinMode(SWITCH_3, INPUT_PULLUP);
  pinMode(SWITCH_4, INPUT_PULLUP);

  // Axis ranges
  FlightYoke.setXAxisRange(0, 1023);
  FlightYoke.setYAxisRange(0, 1023);
  FlightYoke.setThrottleRange(0, 1023);
  FlightYoke.setBrakeRange(0, 1023);

  // Start USB joystick
  FlightYoke.begin(false);
}

// =================================
// MAIN LOOP
// =================================

void loop() {

  // Read potentiometers
  int throttle = analogRead(PIN_THROTTLE);
  int mixture  = analogRead(PIN_MIXTURE);
  int roll     = analogRead(PIN_ROLL);
  int pitch    = analogRead(PIN_PITCH);

  // Assign flight axes
  FlightYoke.setXAxis(roll);
  FlightYoke.setYAxis(pitch);
  FlightYoke.setThrottle(throttle);
  FlightYoke.setBrake(mixture);

  // Activation button
  FlightYoke.setButton(
    0, digitalRead(PIN_BUTTON) == LOW
  );

  // Four toggle switches
  FlightYoke.setButton(
    1, digitalRead(SWITCH_1) == LOW
  );

  FlightYoke.setButton(
    2, digitalRead(SWITCH_2) == LOW
  );

  FlightYoke.setButton(
    3, digitalRead(SWITCH_3) == LOW
  );

  FlightYoke.setButton(
    4, digitalRead(SWITCH_4) == LOW
  );

  // Send joystick data
  FlightYoke.sendState();

  delay(5);
}
