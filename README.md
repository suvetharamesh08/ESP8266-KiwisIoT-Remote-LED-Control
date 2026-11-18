# ESP8266 KiwisIoT Remote LED Control

## **1. PROJECT OVERVIEW**

This project demonstrates remote control of three LEDs using the ESP8266 NodeMCU and KiwisIoT platform. The ESP8266 connects to a Wi-Fi network and receives ON/OFF commands from the KiwisIoT dashboard. Each LED can be controlled independently through a separate communication channel.

## **2. PROJECT OBJECTIVES**

- Establish Wi-Fi connectivity using ESP8266.
- Integrate ESP8266 with the KiwisIoT platform.
- Control three LEDs remotely through an IoT dashboard.
- Implement callback-based command reception.
- Understand cloud-based IoT communication.

## **3. HARDWARE REQUIREMENTS**

| Component | Purpose |
|---|---|
| ESP8266 NodeMCU | Main controller |
| LEDs | Output indicators |
| Resistors | Limit LED current |
| Breadboard | Circuit connections |
| Jumper Wires | Component connections |
| USB Cable | Programming and power supply |

## **4. SOFTWARE REQUIREMENTS**

- Arduino IDE
- ESP8266WiFi Library
- KiwisIoT Library
- KiwisIoT Platform

## **5. CIRCUIT CONNECTIONS**

| LED | ESP8266 Pin | KiwisIoT Channel |
|---|---|---|
| LED 1 | D1 | Channel 0 |
| LED 2 | D2 | Channel 1 |
| LED 3 | D3 | Channel 2 |

**Connection:** Connect each LED anode to its respective GPIO pin through a current-limiting resistor and connect the cathode to GND.

## **6. WORKING PRINCIPLE**

1. ESP8266 initializes and connects to the Wi-Fi network.
2. KiwisIoT initializes cloud communication.
3. The dashboard sends ON/OFF commands.
4. ESP8266 receives commands through a callback function.
5. The corresponding LED switches ON or OFF.
6. The `kiwisiot.run()` function maintains cloud communication and processes incoming commands.

## **7. KIWISIOT PLATFORM INTEGRATION**

The KiwisIoT platform enables wireless control of three LEDs through separate dashboard channels.

| Channel | LED | Value 1 | Value 0 |
|---|---|---|---|
| 0 | LED 1 | ON | OFF |
| 1 | LED 2 | ON | OFF |
| 2 | LED 3 | ON | OFF |

Each channel controls its corresponding LED independently.

## **8. ADVANTAGES**

- Remote LED operation through Wi-Fi.
- Independent control of three LEDs.
- Wireless cloud-based communication.
- Simple hardware implementation.
- Demonstrates IoT-based automation.

## **9. APPLICATIONS**

- Smart Home Automation
- Wireless Lighting Control
- Remote Device Switching
- Industrial IoT Systems
- Smart Building Automation

## **10. FUTURE ENHANCEMENTS**

- Integrate relay modules to control electrical appliances.
- Add more output devices and control channels.
- Develop mobile application-based control.
- Implement voice-controlled automation.
- Add device status monitoring.

## **11. SOURCE CODE**

[ESP8266_Three_LED_Control.ino](ESP8266_Three_LED_Control.ino)

 **## 📸 Project Output

![ESP8266 Three LED Control](ESP8266%20Three%20LED%20CONTROL.jpeg)
