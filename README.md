# Line Following Robot

## Project Overview

This project focuses on the design and implementation of a **Line Following Robot** using basic electronic components, an ESP32 microcontroller, an infrared (IR) sensor, and an L293D motor driver. The robot is capable of detecting and following a predefined black line on a lighter surface by continuously monitoring surface reflectivity and adjusting its motion accordingly.

---

## Abstract

The objective of this project was to understand how autonomous mobile robots operate and how simple sensing techniques can be used to guide a machine along a predefined path. The robot detects surface contrast using IR sensors and sends real-time feedback to the ESP32 microcontroller, which processes the data and generates control signals for the L293D motor driver.

This continuous loop of sensing, processing, and actuation demonstrates the core principles of embedded systems, sensor interfacing, feedback control, and autonomous navigation. Despite its simplicity, the design is scalable and can be extended to more advanced robotics applications.

---

## Introduction

Mobile robots have gained significant importance due to their ability to automate repetitive and precise tasks in industries such as logistics, manufacturing, and warehousing. This project implements a simple yet effective line-following robot to demonstrate the fundamentals of robotics, control systems, and embedded programming.

The ESP32 microcontroller was selected for its cost-effectiveness, built-in connectivity, and ease of programming. The L293D motor driver handles motor control, while IR sensors detect contrast between the black line and the lighter surface.

---

## Principle of Operation

The robot operates on the principle of infrared reflectivity. IR sensors emit infrared light onto the surface and measure the amount of reflected light. Light surfaces reflect more IR light, whereas dark surfaces absorb most of it. This contrast enables the robot to distinguish between the path and the background.

The ESP32 continuously processes these sensor readings and adjusts the motor speed and direction accordingly, allowing the robot to follow the path autonomously.

---

## Block Diagram

**Flow:**  
![Block Diagram](assets/fo2.jpeg)

---

## Circuit Diagram

![Circuit Diagram](assets/fo3.jpeg)

---

## Components Used

| No. | Component                      |
| --- | ------------------------------ |
| 1   | ESP32                          |
| 2   | L293D Motor Driver             |
| 3   | DC Motors (2)                  |
| 4   | TPS63020 3.3V Buck Converter   |
| 5   | IR Sensor                      |
| 6   | Toggle Switch                  |
| 7   | Breadboard                     |
| 8   | Connecting Wires               |
| 9   | 1N5819 Schottky Diode          |
| 10  | Tape                           |
| 11  | 3.3V Lithium-ion Batteries (2) |
| 12  | Battery Holder                 |
| 13  | Castor Wheel                   |


---

## Working

The IR sensor emits infrared light and measures the reflected intensity from the surface. White surfaces reflect more light, while black lines reflect less. The ESP32 continuously reads this data and compares it with a predefined threshold.

- If white surface is detected → Motors move forward
- If black line is detected → Motors stop

The ESP32 communicates with the L293D motor driver to control the motors. A buck-boost converter ensures stable voltage, while a Schottky diode protects against reverse current flow.

---

## Final Project Image

![Final Project Image](assets/fo.jpeg)

## Problems and Future Scope

### Current Limitations

- Unstable mechanical structure
- Single IR sensor limits directional control
- No turning mechanism
- No PID control
- Jerky motion due to simple on/off logic

### Future Improvements

- Use multiple IR sensors for better tracking
- Implement PID control
- Add turning and curve-following logic
- Integrate obstacle detection
- Add maze-solving algorithms (DFS, BFS, Dijkstra, Flood-Fill)
- Enable warehouse automation features
