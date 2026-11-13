✈️ DIY Flight Simulator Controller

An Arduino-based USB Flight Simulator Controller featuring four potentiometer-based analog controls, four toggle switches, one activation button, and a custom 3D-printed enclosure.

---

📌 About the Project

The DIY USB Flight Simulator Controller is a low-cost, custom-built flight control interface designed to provide a more realistic flying experience in flight simulation applications.

The project uses an Arduino Pro Micro (ATmega32U4) to convert physical control inputs into USB HID joystick signals that can be recognized by a computer.

It features four potentiometer-based analog controls, four physical toggle switches, and one activation button, all integrated into a custom-designed 3D-printed enclosure.

The goal is to create an accessible, customizable, and affordable alternative to commercially available flight simulator control hardware.

🎯 Project Objectives

- Develop an affordable DIY flight simulator controller.
- Implement multiple analog flight control inputs.
- Convert physical inputs into USB HID joystick signals.
- Design a compact and functional 3D-printed enclosure.
- Create an open-source hardware and software project.
- Make the design accessible to students, developers, and hobbyists.

⚙️ Features

Feature| Description
Microcontroller| Arduino Pro Micro (ATmega32U4)
Analog Controls| 4 potentiometers
Toggle Switches| 4 physical switches
Activation Button| 1 push button
USB Interface| USB HID joystick
3D Enclosure| Custom STL models
Firmware| Arduino C++
Joystick Axes| X, Y, Throttle, Brake
Joystick Buttons| 5

Flight Controls

Control| Function
Throttle| Engine throttle
Mixture| Fuel mixture
Roll| Aileron control
Pitch| Elevator control

Physical Switches

The four toggle switches provide additional programmable button inputs for simulator functions.

The activation button provides one additional physical button input.

🧰 Components Required

Component| Quantity
Arduino Pro Micro (ATmega32U4)| 1
10kΩ Potentiometers| 4
3-Terminal Toggle Switches| 4
Push Button| 1
Connecting Wires| As required
USB Cable| 1
3D-Printed Enclosure Parts| 3

Additional Tools

- Soldering iron
- Solder
- Computer
- 3D printer (or access to 3D printing)

🔌 Hardware Connections

1. Potentiometers

Each potentiometer has three terminals.

Potentiometer| Arduino Pin
Throttle| A0
Mixture| A1
Roll| A6
Pitch| A3

Wiring:

- Outer terminal 1 → 5V (VCC)
- Middle terminal → Assigned analog pin
- Outer terminal 2 → GND

2. Toggle Switches

Switch| Arduino Pin| Joystick Button
Switch 1| D3| Button 2
Switch 2| D5| Button 3
Switch 3| D7| Button 4
Switch 4| D8| Button 5

Wiring:

- Middle terminal (COM) → GND
- One outer terminal → Assigned digital pin
- Other outer terminal → Leave disconnected

The firmware uses "INPUT_PULLUP" to detect switch activation.

3. Activation Button

Button Terminal| Connection
Terminal 1| D2
Terminal 2| GND

All components share a common ground.

🧠 Software and Firmware

The controller is programmed using the Arduino IDE and the Joystick library by MHeironimus.

The Arduino Pro Micro uses its ATmega32U4 microcontroller to provide native USB HID functionality. This allows the controller to communicate with a computer as a USB joystick without requiring a separate USB-to-joystick converter.

Software Requirements

- Arduino IDE
- Arduino Joystick Library by MHeironimus
- Arduino Pro Micro board support

Firmware Installation

1. Install the Arduino IDE.
2. Install the Joystick library by MHeironimus.
3. Connect the Arduino Pro Micro to your computer.
4. Open "Firmware/flightsimcode.ino".
5. Select the appropriate Arduino Pro Micro board and processor.
6. Select the correct COM port.
7. Upload the firmware.
8. Connect the controller and check whether the computer recognizes it as a USB game controller.

How the Firmware Works

The controller continuously reads the four potentiometers using analog inputs.

The readings are assigned to the joystick axes:

Physical Control| Joystick Axis
Roll| X Axis
Pitch| Y Axis
Throttle| Throttle Axis
Mixture| Brake Axis

The four toggle switches and activation button are read using digital inputs.

The firmware updates the joystick button states and transmits the information to the computer through USB.

🖨️ 3D-Printed Enclosure

The project includes three custom 3D model files.

File| Purpose
"flightsimbase.stl"| Main enclosure base
"flightsimlid.stl"| Enclosure lid
"flightsimcover.stl"| Additional enclosure cover

The enclosure is designed to organize and protect the electronic components while providing a physical structure for the flight controls.

All STL files are included in the "3D-Models/" directory.

📁 Repository Structure

DIY-Flight-Simulator-Controller/
│
├── Firmware/
│   └── flightsimcode.ino
│
├── 3D-Models/
│   ├── flightsimbase.stl
│   ├── flightsimlid.stl
│   └── flightsimcover.stl
│
├── Documentation/
│   └── wiring-connections.md
│
├── Images/
│   └── project-cover.png
│
├── README.md
├── LICENSE
└── .gitignore

🚀 Future Improvements

Potential improvements and future development ideas include:

- Add rudder control using another potentiometer.
- Add more programmable switches and buttons.
- Improve enclosure ergonomics.
- Add calibration and sensitivity adjustment.
- Implement software-based control mapping.
- Improve compatibility with different flight simulator applications.
- Add a dedicated wiring diagram and assembly guide.

🌍 Open Source Contribution

This project is intended to encourage experimentation, learning, and collaboration in DIY electronics, embedded systems, and flight simulation.

Developers, students, and hobbyists are welcome to explore the design, suggest improvements, and contribute to the project.

Contributions, suggestions, and feedback are welcome!

📜 License

This project is released under the MIT License.

See the "LICENSE" (LICENSE) file for more information.

👨‍💻 Project Information

Category| Details
Project Name| DIY USB Flight Simulator Controller
Platform| Arduino Pro Micro (ATmega32U4)
Programming Language| C++
Hardware Design| Custom electronics and 3D-printed enclosure
Project Category| Embedded Systems, DIY Electronics, Human-Computer Interaction, Flight Simulation
License| MIT License

---

Built with curiosity, electronics, and a passion for aviation. ✈️
