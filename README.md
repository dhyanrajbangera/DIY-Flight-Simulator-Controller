# DIY-Flight-Simulator-Controller
DIY USB Flight Simulator Controller built with an Arduino Pro Micro, featuring 4 potentiometer-based flight controls, 4 toggle switches, 1 activation button, and custom 3D-printed enclosure parts.
✈️ DIY USB Flight Simulator Controller
An Arduino-based flight simulator controller with custom hardware, analog flight controls, physical toggle switches, and a 3D-printed enclosure.
�
📌 About the Project
The DIY USB Flight Simulator Controller is a low-cost, custom-built flight control interface designed to bring a more realistic flying experience to flight simulation.
The project uses an Arduino Pro Micro to convert physical control inputs into USB joystick signals that can be recognized by a computer.
It features four potentiometer-based analog controls, four toggle switches, and one activation button, all integrated into a custom-designed 3D-printed enclosure.
The goal is to create an accessible, customizable, and affordable alternative to commercially available flight simulator control hardware.
🎯 Project Objectives
Develop an affordable DIY flight simulator controller.
Implement multiple analog flight control inputs.
Convert physical inputs into USB HID joystick signals.
Design a compact and functional 3D-printed enclosure.
Create an open-source hardware and software project.
Make the design and implementation accessible to other students and hobbyists.
⚙️ Features
Feature
Description
Microcontroller
Arduino Pro Micro
Analog controls
4 potentiometers
Toggle switches
4 physical switches
Activation button
1 push button
USB interface
USB HID joystick
3D enclosure
Custom STL models
Firmware
Arduino C++
Joystick buttons
5
Analog axes
X, Y, Throttle, Brake
Flight Controls
Control
Function
Throttle
Engine throttle
Mixture
Fuel mixture
Roll
Aileron control
Pitch
Elevator control
Physical Switches
The four toggle switches provide additional programmable button inputs for simulator functions.
The activation button provides an additional physical button input.
🧰 Components Required
Component
Quantity
Arduino Pro Micro (ATmega32U4)
1
10kΩ potentiometers
4
3-terminal toggle switches
4
Push button
1
Connecting wires
As required
USB cable
1
3D-printed enclosure parts
3
Additional tools:
Soldering iron
Solder
Computer
3D printer (or access to 3D printing)
🔌 Hardware Connections
1. Potentiometers
Each potentiometer has three terminals.
Potentiometer
Middle terminal (Signal)
Throttle
A0
Mixture
A1
Roll
A6
Pitch
A3
Wiring:
Outer terminal 1 → 5V (VCC)
Middle terminal → Assigned analog pin
Outer terminal 2 → GND
2. Toggle Switches
Switch
Arduino Pin
Joystick Button
Switch 1
D3
Button 2
Switch 2
D5
Button 3
Switch 3
D7
Button 4
Switch 4
D8
Button 5
Wiring for each 3-terminal toggle switch:
Middle terminal (COM) → GND
One outer terminal → Assigned digital pin
Other outer terminal → Leave disconnected
The firmware uses INPUT_PULLUP to detect switch activation.
3. Activation Button
Button Terminal
Connection
One terminal
D2
Other terminal
GND
All components share a common ground.
🧠 Software and Firmware
The controller is programmed using the Arduino IDE and the Joystick library.
The Arduino Pro Micro uses its ATmega32U4 microcontroller to provide native USB HID functionality.
This allows the controller to communicate with a computer as a USB joystick without requiring a separate USB-to-joystick converter.
Software Requirements
Arduino IDE
Arduino Joystick Library by MHeironimus
Arduino Pro Micro board support
Firmware Installation
Install the Arduino IDE.
Install the Joystick library by MHeironimus.
Connect the Arduino Pro Micro to your computer.
Open Firmware/flightsimcode.ino.
Select the appropriate Arduino Pro Micro board and processor.
Select the correct COM port.
Upload the firmware.
Connect the controller and check whether the computer recognizes it as a USB game controller.
How the Firmware Works
The firmware continuously reads the four potentiometers using analog inputs.
The readings are assigned to the joystick axes:
Roll → X Axis
Pitch → Y Axis
Throttle → Throttle Axis
Mixture → Brake Axis
The four toggle switches and activation button are read using digital inputs.
The firmware then updates the joystick button states and transmits the information to the computer through USB.
🖨️ 3D-Printed Enclosure
The project includes three custom 3D model files.
File
Purpose
flightsimbase.stl
Main enclosure base
flightsimlid.stl
Enclosure lid
flightsimcover.stl
Additional enclosure cover
The enclosure is designed to organize and protect the electronic components while providing a physical structure for the flight controls.
The STL files are included in the 3D-Models directory.
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
The project can be expanded with additional features:
Add rudder control using another potentiometer.
Add more programmable switches and buttons.
Improve the enclosure ergonomics.
Add calibration and sensitivity adjustment.
Implement software-based control mapping.
Improve compatibility with different flight simulator applications.
Add a dedicated wiring diagram and assembly guide.
🌍 Open Source Contribution
This project is intended to encourage experimentation, learning, and collaboration in DIY electronics, embedded systems, and flight simulation.
Developers, students, and hobbyists are welcome to explore the design, suggest improvements, and contribute to the project.
📜 License
This project is released under the MIT License.
See the LICENSE file for more information.
👨‍💻 Project Information
Project Name: DIY USB Flight Simulator Controller
Platform: Arduino Pro Micro (ATmega32U4)
Programming Language: C++
Hardware Design: Custom electronics and 3D-printed enclosure
Project Category: Embedded Systems | DIY Electronics | Human-Computer Interaction | Flight Simulation
