
# OpenVac - a custom motherboard

The goal of this project is to develop a fully functional motherboard to create an open-source autonomous vacuum robot.

 While the current goal is to get a functioning board for the Eufy RoboVac 11, the final goal should be something that can be used/adapted to work in all robot vacuums.

 


## Roadmap
*Nobody: This probably should go in a seperate file.*
### v0: Concept Phase
- **Goals**:
  - Define project objectives.
  - Determine core functionalities.
- **Basic Structure**:
  - Establish an initial project framework.
- **Key Components**:
  - **Motor Drive Circuit**: Design a DIY motor driver/H-bridge.
  - **Brush Control**: Develop circuits for controlling all cleaning brushes.
  - **Vacuum**: Identify and understand the pinout.
  - **Basic Sensing**: 
    - Understand various sensors.
    - Reverse-engineer the main sensor array.
    - Prototype edge sensors to achieve functionality.
- **Status**: **Finished**

### v0.1: Basic Movement
- **Movement Capabilities**:
  - Implement steering and acceleration.
- **PCB Development**:
  - **DIY Motor Drive Circuit**
  - **Side Brush Control Circuit**
  - **Main Brush Control Circuit**
  - **PWM Vacuum Control**
- **Status**: **Finished**

### v0.2: Minimum Viable Product (MVP)
- **Power & Batteries**:
  - Implement a Battery Management System (BMS).
	![BMS Schematic](https://github.com/snaeker58/openVac/blob/main/Images/bms-schematic.png)
	![BMS Schematic](https://github.com/snaeker58/openVac/blob/main/Images/bms-board.png)
	![BMS Schematic](https://github.com/snaeker58/openVac/blob/main/Images/bms-3d-front.png)
  - Integrate lithium-ion batteries.

- **Control**:
  - Enable USB serial control for motors, brushes, and vacuum.
- **Miniaturization**:
  - Utilize off-the-shelf components for motor drive, BMS, and more.
- **Status**: **In progress (order placed)**

### v0.3: Basic Sensing
- **Sensor Development**:
  - Finalize cliff sensors (completed in v0).
  - Collect raw data from the main sensor array.
  - Implement a working bumper bar.
- **Sensing PCB**:
  - Develop basic signal processing to output usable data.

### Future Phases
- **Microprocessor Selection**:
  - Evaluate GPIO, analog input requirements, and performance needs.
- **Integration**:
  - **Hardware Integration**: Combine support circuits required by the microprocessor.
  - **Final PCB**: Connect all previous systems into a comprehensive PCB design.

### Far Future Goals
- **Navigational Software**: Create software for autonomous cleaning capabilities.
- **User Interface**: Develop an intuitive interface for easier and more precise control.

### Estimated Timeline
**3 years to infinity.**

## Contributing

If you're  mad enough to want to contribute then just tell me when I'm doing something wrong. I'm completely balling everything if you haven't noticed already. But hey I'm having fun.

"Start big or don't start!"


## Acknowledgements

 - I hereby acknowledge ChatGPT for having formatted my text and without me wanting it reworded my contents to sound more corporate.
 - I hereby acknowledge [Readme.so](https://readme.so) to have helped me make my readme look less ugly.
