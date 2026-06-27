Home Automation using Arduino and Bluetooth

A smart home automation system that allows users to wirelessly control household appliances such as lights and fans using an Android smartphone. The project uses an **Arduino Uno**, **HC-05 Bluetooth Module**, and **Relay Module** to provide a simple, low-cost, and efficient home automation solution.

---

Overview

This project demonstrates how Bluetooth communication can be integrated with an Arduino-based embedded system to remotely control electrical appliances. Commands sent from a smartphone application are received by the HC-05 Bluetooth module, processed by the Arduino, and used to switch appliances ON or OFF through a relay.

---

Features

*  Wireless control using Bluetooth
*  Remote ON/OFF control of home appliances
*  Relay-based switching for electrical loads
*  Low-cost and easy-to-build design
*  Beginner-friendly embedded systems project

---

##  Hardware Components

* Arduino Uno (ATmega328P)
* HC-05 Bluetooth Module
* 1-Channel Relay Module
* Lamp / Electrical Load
* Breadboard
* Jumper Wires
* Power Supply

---

## 💻 Software Requirements

* Arduino IDE
* MIT App Inventor
* Android Smartphone with Bluetooth

---

## ⚙️ System Architecture

```
Android App
      │
 Bluetooth
      │
 HC-05 Module
      │
 Arduino Uno
      │
 Relay Module
      │
 Electrical Appliance (Light/Fan)
```

---

## Working

1. Pair the smartphone with the HC-05 Bluetooth module.
2. Open the mobile application developed using MIT App Inventor.
3. Press the ON/OFF buttons in the application.
4. Bluetooth commands are transmitted to the Arduino.
5. Arduino interprets the received command.
6. The relay switches the connected appliance ON or OFF accordingly.

---


---

##  Project Images



### Circuit Diagram

```markdown
![Circuit Diagram](Images/Csystem_diagram.png)
```




##  Authors

**Padmaprabha T**

**Poovitha S**

Department of Computer Science and Engineering

Mepco Schlenk Engineering College

---


