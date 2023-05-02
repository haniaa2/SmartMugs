**Smart Mugs - Drinking Habit Tracker**

ECE 445 Design Document

Team\#56: Srishti Modgil, Siqi Lu, Hani Al Majed

Professor: Olga Mironenko

TA: Selva Subramaniam

Spring 2023

**Contents**

**1 Introduction           3**

1.1 Problem ……………………………………………………………………………… 3

1.2 Solution ……………………………………………………………………………….4

1.3 Visual Aid …………………………………………………………………………….5

1.4 High Level Requirements …………………………………………………………….6

**2 Design           7**

2.1 Block Diagram ………………………………………………………………………..7

2.2 Sensors & LEDs ………………………………………………………………………8

2.3 Control System ……………………………………………………………………….9

2.3.1 Overview ……………………………………………………………………9

2.3.2 Requirements ……………………………………………………………...11

2.4 Battery/ Heating System …………………………………………………………….12

2.5 Android Application ………………………………………………………………...14

**3 Tolerance Analysis         16**

**4 Cost and Schedule      16**

4.1 Cost Analysis ………………………………………………………………………..17

4.1.1 Labor Cost Analysis ……………………………………………………….17

4.1.2 Parts Cost Analysis ………………………………………………………..17

4.2 Schedule ……………………………………………………………………………..19

**5 Ethics and Safety        21**

1.  **Introduction**
    1.  **Problem**

Maintaining the perfect temperature of beverages has been an issue that many people have faced. Hot drinks like coffee or tea can be too hot to consume, causing harm to one's throat and tongue, while cold drinks can quickly lose their taste and enjoyment. This problem is common and has been well-documented in various studies, which have emphasized the importance of maintaining the ideal temperature of beverages for optimal consumption.

One reason why this issue is important is that drinking a beverage at the correct temperature can significantly impact the flavor and taste of the drink. For instance, if coffee is too hot, it can scorch the taste buds, making it difficult to appreciate the unique flavor notes of the coffee. Similarly, if a cold beverage gets warm, it can become flat and lose its fizz, impacting the taste of the drink. Thus, maintaining the desired temperature of a beverage is crucial to ensuring its taste and enjoyment.

Additionally, the issue of maintaining the perfect temperature of beverages is not limited to just coffee and tea. This issue is also relevant in the context of other beverages, such as beer and wine. For example, a warm beer can lose its flavor, while a cold beer that becomes warm can develop an unpleasant taste. Similarly, wine that is served at the incorrect temperature can lose its aroma and flavor, impacting the overall drinking experience. In conclusion, maintaining the ideal temperature of beverages is a significant issue that impacts the taste and enjoyment of the drink.

We conducted research on existing products and found that the Embur Mug is a smart mug capable of detecting the temperature of its contents and keeping them at a desired level. Despite its innovative functionality, the steep cost of 130 dollars renders it inaccessible to the average consumer. By addressing these issues, we can provide practical solutions that benefit both individuals and the environment.

The problem with maintaining the ideal temperature of beverages can significantly impact the taste and enjoyment of the drink. While smart mugs, such as the Ember Mug, offer a solution, the high cost of these products makes them inaccessible to the average consumer. Our mug aims to fix these problems.

1.  **Solution**

Our proposed project entails the development of a cutting-edge smart mug. Our innovative design will offer superior functionality and affordability compared to existing products, particularly the Embur Mug. The smart mug will feature an advanced temperature control system that will automatically maintain the desired temperature of the beverage. In addition, our design will incorporate an intuitive app interface that will enable users to conveniently set their preferred temperature for different beverages and monitor their liquid intake. This smart mug will eliminate the need for time-consuming and wasteful reheating. By leveraging cutting-edge technology and design principles, our project aims to create a smart mug that offers a superior user experience at an affordable cost.

1.  **Visual Aid**

**![](media/d6d1fca99b51781fa4189a74d691888c.png)**

*Figure 1: Visual Aid*

This visual aid depicts a smart mug with six subsystems that work together to provide a high-tech drinking experience. Subsystem 1 is the sensor subsystem, which can detect the temperature of the liquid in the mug. Subsystem 2 is the microcontroller with Wi-Fi transceiver, which enables the mug to connect to the internet and communicate with other devices. Subsystem 3 is the lighting system, which consists of LEDs that can be used to indicate the temperature of the liquid or to create an ambient mood. Subsystem 4 is the heating system, which can be controlled by the user to heat up the liquid to their desired temperature. Subsystem 5 is the charged battery subsystem, which powers the mug and allows it to be used wirelessly. Subsystem 6 is the Android application subsystem, which enables the user to control the mug's settings and receive notifications about the temperature of the liquid. Together, these subsystems create a sophisticated and convenient smart mug that offers an advanced drinking experience.

1.  **High level requirements**

Accurate temperature control: The smart mug must be able to accurately set the temperatures up to 100°C and control the temperature of the liquid it contains up to 100°C. The heating subsystem and sensor subsystem must work together to ensure that the temperature of the liquid is maintained within a small range of the target temperature. The heating system must be able to withstand up to 100°C

Reliable and consistent connectivity: The microcontroller with Wi-Fi transceiver must provide reliable and consistent connectivity to the Android application subsystem. The mug must be able to connect to the internet and communicate with the application without interruption or dropped connections.

Robust and easy-to-maintain design: The smart mug must be designed in a manner that enables easy washing and charging of the device without any damage to its electronic systems.

Competitive pricing: The product must be affordably priced and offered at a cost that is 20% less than other comparable smart mugs in the market.

Safe and user-friendly design: The design of the mug must be safe and user-friendly, with features such as spill-proof lids, easy-to-use controls, and heat-resistant materials. The lighting system and Android application subsystem should provide clear and easy-to-understand feedback to the user about the temperature and status of the mug.

1.  **Design**
    1.  **Block Diagram**![](media/ff2308f10c434867327eb581ef932e8c.png)

*Figure 2: Block Diagram*

The block diagram of the smart mug system consists of several key subsystems that work together to provide a complete solution for temperature monitoring and control. At the heart of the system is the microcontroller, which serves as the control center for all subsystems. The microcontroller is responsible for processing inputs from the temperature sensor and LED modules, controlling the battery/heating system, and communicating with the Android app subsystem via Bluetooth. The temperature sensor and LED modules work in tandem to monitor the temperature of the liquid inside the mug and display the temperature range using different colors of LED lights. The battery/heating system consists of a Qi wireless charging transmitter and receiver module, which wirelessly charges two Samsung 25R 18650 batteries that power a flexible heater plate. The heater plate maintains the temperature of the liquid inside the mug at a user-defined temperature. Finally, the Android app subsystem provides users with an intuitive interface for controlling the temperature settings of the mug wirelessly via Bluetooth, displaying real-time temperature data, and receiving notifications when the beverage reaches the desired temperature. Overall, the system provides a comprehensive and user-friendly solution for temperature monitoring and control in a portable and convenient mug format.

1.  Sensors & LEDs

This subsystem includes two important components: temperature sensor and LED lights which indicate the temperature range of the input liquid. The sensor module will be implemented with the industry standard temperature sensor by Maxim Integrated (DS18B20). This module takes input from the sensors with the detected temperature and delivers the present output to the microcontroller. For the LEDs, the current preferred option is 19-C47/RSG BHC-5V01/2T, which can address three different lights (Red, Green and Blue). For the LED module, it will be implemented through the microcontroller and change to the corresponding color of different range of temperatures.

| Requirements                                                                                                                                                                                                                                                                                                         | Verification                                                                                                                                                            |
|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Temperature sensor must accurately measure the temperature within ±1°C range                                                                                                                                                                                                                                         | Measure the temperature of a known heat source at different temperatures and compare the readings with a calibrated thermometer                                         |
| LED lights must change color according to the temperature range of the input liquid. LEDs change to red if the temperature detected is more than 5% above the desired temperature. LED becomes blue if the temperature detected is over 5% below the desired temperature. The mug will only be able to heat to 80°C. | Observe the color change of the LED lights when the temperature of the input liquid changes and verify that the LED lights change to the correct color.                 |
| The microcontroller must be able to receive the temperature data from the sensor and translate it into the corresponding color of the LED lights accurately and in real-time                                                                                                                                         | Simulate different temperature inputs by hard coding it to the microcontroller and verify that the LED lights change to the correct color in real-time.                 |
| The temperature sensor and LED module must be able to withstand an operating temperature up to 80°C                                                                                                                                                                                                                  | Test the temperature sensor and LED module in an environment with temperature levels up to up to 80°C and verify that they can operate properly under these conditions. |

*Table 1*

1.  **Control System**
    1.  **Overview**

This control system manages all the data from other subsystems. It will control the other subsystems, receiving and delivering data, and send logs to a server that visualizes data and handles possible app notifications.

The microcontroller used in our project is ESP32-WROVER-IE-N8R8, a powerful, generic Wi-Fi + Bluetooth + Bluetooth LE MCU module that targets a wide variety of applications, ranging from low-power sensor networks to the most demanding tasks. It operated in 3 - 3.6 volts. The control system will take input from the temperature sensor and the android application, as well as a battery system. The output of the microprocessor will be connected to the heating system and the android application.

*Image 3:Block diagram of the microcontroller*![](media/25238ebd4aaa2a518a3576e27cd3da00.png)![](media/80993b6a76b987e842ae6d57ea427df2.png)

*Figure 4: Pinout of the microcontroller*

1.  **Requirements**

The control system must satisfy the following requirements:

| Requirements                                                                                                                                                            | Verification                                                                                                                                                           |
|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| The control system must be insensitive to the environment changes like temperature. It shall not be affected by small changes in the certain parameters of the system.  | Operate the heating system and verify the stable running of the system by using an oscilloscope connecting to the output I/O port.                                     |
| The microcontroller must be able to receive data and operation commands from the android application via Wifi transmitter.                                              | Simulate an operation by implementing the microcontroller and connect it to a LED. Verify the functional status by controlling the on and off of the LED on the apps.  |

*Table 2*

1.  **Battery/Heating System**

This subsystem utilizes an Adafruit universal Qi wireless charging [transmitter](https://www.adafruit.com/product/2162) and [receiver](https://www.adafruit.com/product/1901) modules to perform inductive charging of two Samsung 25R 18650 2500mAh 20A Battery cells. These modules can be configured to track battery level and output a discharge cut-off voltage of 5V. The two batteries are connected to a PTC heating element for the purpose of heating the mug and maintaining its temperature. ![](media/3649772ba4cdc8a44a2228b6c4f6fd9b.png)

*Figure 5: The charger transmitter/receiver module connected*

*to the system load (the two Li-ion battery cells  
* The heating element used in this project will be the FIT0845 PTC heating element which operates in 5V. It is expected that the heating subsystem can reach a maximum temperature of 100°C . A positive temperature coefficient heating element (PTC heating element) is an electrical resistance heater whose resistance increases significantly with temperature. With this component, our heating subsystem will be safer to operate with its property of self-regulating.

| Requirements                                                                                                  | Verification                                                                                                                                                 |
|---------------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------|
| The Qi charger transmitter shall be able to handle a 5V input voltage and a 2A input current from a USB port. | Connect the Qi charger transmitter controller board with a USB port and check the IV characteristics of the two terminals of the coil using an oscilloscope. |
| The Qi charger receiver shall be able to output 5 V to charge the two battery cells                           | Do timing analysis of the battery charging cycle by connecting the Qi charger receiver with two batteries with the aid of an oscilloscope                    |
| The two Samsung battery cells shall output a sum of 5 V to the heater film                                    | Upon successful configuration of the batteries, test that the discharge cut-off voltage is reasonably close to 5V                                            |
| The heater film shall keep the temperature of the cup at a maximum of 100°C                                   | Use a calibrated thermometer to test the maximum temperature maintained by the heater film                                                                   |

*Table 3*

1.  **Android apps**

The Android app subsystem of the smart mug will serve as the central control point for the temperature control system. The app will be designed to be compatible with a wide range of Android devices, ensuring that users can easily download and use the app on their smartphones or tablets. To ensure seamless communication between the app and the mug, Bluetooth technology will be utilized. The app will be able to connect to the smart mug wirelessly, allowing users to control the mug's temperature settings and other features with ease. The Bluetooth connection will also enable the app to notify the user when the beverage has reached the desired temperature, ensuring that the user is always aware of the status of their drink. The app will also incorporate the ability to turn off the smart mug, allowing users to conserve battery life when the mug is not in use. This feature will ensure that the mug does not remain active unnecessarily, leading to wasteful use of energy. To implement the app technically, we will use Android Studio to build Android apps. The app will be built using Java and will utilize the Android Bluetooth API to establish a connection with the smart mug and receive data related to the mug's temperature settings and battery status.

| Requirements                                                                                            | Verification                                                                                                                                                                                                 |
|---------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| The Android application shall be able to receive and display data from the microcontroller in real-time | Connect the microcontroller to the Android device via Bluetooth and send data. Verify that the data is received and displayed correctly and with minimal delay.                                              |
| The Android application shall be compatible with a wide range of Android devices                        | Test the Android application on a variety of devices with different screen sizes, operating system versions, and hardware specifications. Ensure that the application works correctly on all devices tested. |
| The app shall be able to connect to the smart mug via Bluetooth                                         | The app will display a message indicating successful connection to the mug                                                                                                                                   |
| The app shall be able to notify the user when the beverage has reached the desired temperature          | The app will display a message and/or send a push notification to the user when the temperature of the beverage in the mug reaches the desired temperature                                                   |
| The app shall be able to turn off the smart mug                                                         | The app will send a signal to the smart mug to turn off when the user taps the "turn off" button in the app                                                                                                  |
| The app shall allow users to adjust the temperature of the smart mug.                                   | User is able to easily adjust the temperature of the smart mug through the app and the temperature of the beverage in the mug reflects the desired temperature setting.                                      |

*Table 4*

1.  **Tolerance Analysis**

The heating time ultimately depends on the substance being heated. The PTC heating element has a maximum temperature of 100°C with a power less than 5W. The following theoretical analysis shows the expected time required to maintain a temperature of 100°C with a fully charged battery subsystem that can draw continuous 4.8 - 5.2V of voltage to the element. The underlying (not necessarily realistic) assumption here is that no dissipation of temperature occurs due to the interaction with the mug’s surface. This oversimplified model will undergo further investigation.

m \* C \* ΔT = E = (5W)/time (1s)

time = m \* C \* ΔT = (10 oz) \* (0.03L/1oz) \* (4.186 kJ/L°C) \* (100°C) = 125.58 min

1.  **Cost and Schedule**
    1.  **Cost Analysis**
        1.  **Labor Cost Analysis**

Our group consists of two electrical engineers and one computer engineer. Average pay for electrical engineers with a bachelor’s degree is \$80,296 and \$105,352 for computer engineers according to the Grainger College of Engineering.

| **Tasks**                         | **Hours Estimated** |                |                |
|-----------------------------------|---------------------|----------------|----------------|
|                                   | Hani                | Siqi           | Srishti        |
| Circuit Design                    | 20                  | 5              | 5              |
| Board Layout and Components Check | 15                  | 15             | 5              |
| Software Development              | 10                  | 10             | 30             |
| Soldering                         | 5                   | 20             | 5              |
| Prototype and Debug               | 60                  | 60             | 60             |
| Documentation and Logistic        | 25                  | 25             | 25             |
| **Total Hours**                   | **135**             | **135**        | **130**        |
| **Labor Cost**                    | **\$4,851.90**      | **\$4,851.90** | **\$5,033.60** |

1.  **Parts Cost Analysis**

The following table indicates all the part costs for the circuit design and the total cost is \$69.56. This table may be edited within the design progress.

| Description                                                                                        | Manufacturer                                       | Quantity  | Extended Price | Link                                                                                                                                                                                                                                                                                                                                                                                                |
|----------------------------------------------------------------------------------------------------|----------------------------------------------------|-----------|----------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| **Wireless power Li-ion charger Receiver compliant with Qi (WPC) with RT1650 Chip**                | Adafruit                                           | 1         | \$14.95        | [Link](https://www.adafruit.com/product/1901?gclid=Cj0KCQiAutyfBhCMARIsAMgcRJROEvAGalTlNkncwATV1zyQGdCJwq8vbyW9F8dectzWagtw7C9oAwEaAnrcEALw_wcB)                                                                                                                                                                                                                                                    |
| **Universal Qi Wireless Charging Transmitter**                                                     | Adafruit                                           | 1         | \$26.95        | [Link](https://www.digikey.com/en/products/detail/adafruit-industries-llc/2162/6827104)                                                                                                                                                                                                                                                                                                             |
| **TP4056 Type-C USB 5V 1A Battery Charger Module Charging Board with Dual Protection Functions**   | Adafruit                                           | 1         | \$8.99         | [Link](https://www.amazon.com/Lithium-Battery-Charging-Protection-Functions/dp/B07MDPLQ18?th=1)                                                                                                                                                                                                                                                                                                     |
| **PTC HEATING ELEMENT - 5V 100C**                                                                  | DFRobot                                            | 2         | \$5.00         | [Link](https://www.digikey.com/en/products/detail/dfrobot/FIT0845/15848056)                                                                                                                                                                                                                                                                                                                         |
| Panasonic NCR18650B 3400mAh 4.9A Battery                                                           | Panasonic                                          | 2         | \$8.99         | [Link](https://www.18650batterystore.com/products/panasonic-ncr18650b?utm_campaign=859501437&utm_source=g_c&utm_medium=cpc&utm_content=201043132925&utm_term=_&adgroupid=43081474946&gclid=Cj0KCQjww4-hBhCtARIsAC9gR3bzBxcEt1U6la_C_MdS3FJWy6GOcIT7z-qU6Pdq6DOTuLAs1LDwFSsaAiHhEALw_wcB)                                                                                                            |
| **Battery Holder (Open) 18650 2 Cell SMD (SMT) Tab**                                               | Eoutstanding                                       | 1         | \$8.99         | [Link](https://www.digikey.com/en/products/detail/keystone-electronics/1048P/4499389?utm_medium=aggregator&utm_source=snapeda&utm_campaign=buynow)                                                                                                                                                                                                                                                  |
| **ESP32-WROVER-IE-N8R8**                                                                           | HiLetgo                                            | 1         | \$3.60         | [Link](https://www.digikey.com/en/products/detail/espressif-systems/ESP32-WROVER-IE-N8R8/11613139)                                                                                                                                                                                                                                                                                                  |
| **USB - micro B USB 2.0 Receptacle Connector 5 Position Surface Mount, Right Angle; Through Hole** | Molex                                              | 1         | \$1.01         | [Link](https://www.digikey.com/en/products/detail/molex/1050170001/2350885?utm_adgroup=USB%2C%20DVI%2C%20HDMI%20Connectors&utm_source=google&utm_medium=cpc&utm_campaign=Shopping_Product_Connectors%2C%20Interconnects&utm_term=&utm_content=USB%2C%20DVI%2C%20HDMI%20Connectors&gclid=CjwKCAjw5pShBhB_EiwAvmnNVzUqA_q5mfb28xi0c3YQ04DKhzJ9Aipyh51ErKjq_5NI3mgaoVlVEhoCiFUQAvD_BwE)                |
| **5.6V 18.6V 5V Bi-Directional SOD-523 ESD Protection Devices ROHS**                               | LRC                                                | 3         | \$0.02         | [Link](https://www.lcsc.com/product-detail/Diodes-ESD_LRC-LESD5D5-0CT1G_C383211.html)                                                                                                                                                                                                                                                                                                               |
| **25V 300mW 120@100mA,1V 1.5A NPN SOT-23 Bipolar Transistors - BJT ROHS**                          | Jiangsu Changjing Electronics Technology Co., Ltd. | 2         | \$ 0.0197      | [Link](https://www.lcsc.com/product-detail/Bipolar-Transistors-BJT_Jiangsu-Changjing-Electronics-Technology-Co-Ltd-SS8050-G_C164886.html)                                                                                                                                                                                                                                                           |
| **LDO Voltage Regulators 800mA & 1A LDO**                                                          | Texas Instruments                                  | 1         | \$3.07         | [Link](https://www.digikey.com/en/products/detail/texas-instruments/REG1117-3-3/251212)                                                                                                                                                                                                                                                                                                             |
| **USB Interface IC USBXpress - USB to UART Bridge QFN20**                                          | Silicon Labs                                       | 1         | \$4.66         | [Link](https://www.mouser.com/ProductDetail/Silicon-Labs/CP2102N-A02-GQFN20?qs=u16ybLDytRaG8WdlP0fT2g%3D%3D)                                                                                                                                                                                                                                                                                        |
| **Tactile Switches 6.0X8.35MM R/A 160G**                                                           | E-Switch                                           | 2         | \$0.44         | [Link](https://www.mouser.com/ProductDetail/E-Switch/TL1105SF160Q?qs=YXf4ACKMM4yEpzg7%2Fzl0PQ%3D%3D&mgh=1&gclid=Cj0KCQjwiZqhBhCJARIsACHHEH94ZoXHDweNJFXjRoR4i2AAUEtxhbDfhWuHwD41Q42Gih207wgL-owaAohxEALw_wcB)                                                                                                                                                                                       |
| **Programmable Resolution** **1-Wire Digital Thermometer**                                         | Analog Devices Inc./Maxim Integrated               | 1         | \$7.78         | [Link](https://www.digikey.com/en/products/detail/analog-devices-inc.-maxim-integrated/DS18B20%2BT%26R/3478852?utm_adgroup=Sensors%2C%20Transducers&utm_source=google&utm_medium=cpc&utm_campaign=Shopping_Supplier_Maxim%20Integrated_8022_Co-op&utm_term=&utm_content=Sensors%2C%20Transducers&gclid=CjwKCAiAleOeBhBdEiwAfgmXf-hIaZj1YjASEiDZOg5dMMVtSrDlfEeoC1fjx_hQg3LjqtbzHDXz3xoCAXYQAvD_BwE) |
| **Addressable Lighting - 1 LED Serial Red, Green, Blue (RGB) 1.80mm L x 1.80mm W**                 | Everlight Electronics Co Ltd                       | 1         | \$0.92         | [Link](https://www.digikey.com/en/products/detail/everlight-electronics-co-ltd/19-C47-RSGHBHC-5V01-2T/9962978)                                                                                                                                                                                                                                                                                      |
| Red LED                                                                                            |                                                    | 4         | \$1.12         | [Link](https://www.digikey.com/en/products/detail/liteon/LTST-C171KRKT/386801)                                                                                                                                                                                                                                                                                                                      |
| 5.6V 18.6V 5V Bi-Directional SOD-523 ESD Protection Devices ROHS                                   | LRC                                                | 3         | \$0.79         | [Link](https://www.lcsc.com/product-detail/Diodes-ESD_LRC-LESD5D5-0CT1G_C383211.html)                                                                                                                                                                                                                                                                                                               |
| **Total**                                                                                          |                                                    |           | \$97.30        |                                                                                                                                                                                                                                                                                                                                                                                                     |

1.  **Schedule**

**Week 1 (2/28 - 3/6):**

-   All: Review the project requirements and divide tasks between team members.
-   All: Purchase necessary components such as the temperature sensor, LED lights, ESP8266 NodeMCU board, Adafruit universal Qi wireless charging transmitter and receiver modules, Samsung 25R 18650 2500mAh 20A Battery cells, ICStation 5V 1W 30mmx40mm flexible Polyimide heater plate film, etc.
-   All: Familiarize ourselves with programming tools required to develop the mug's software.

**Week 2 (3/7 - 3/13):**

-   Siqi & Hani: Integrate the temperature sensor, LED lights, and control system with the NodeMCU board, ensuring they are properly connected and functioning.
-   All: Begin testing the communication between subsystems and identifying any issues.

**Week 3 (3/14 - 3/20):**

-   Siqi & Hani: Integrate the battery and heating system into the mug and test their functionality.
-   Srishti: Begin designing the Android app and identify the features and functionalities that will be included.

**Week 4 (3/21 - 3/27):**

-   Srishit: Finalize the Android app design and begin development.
-   All: Continue testing and troubleshooting the mug's subsystems and communication.

**Week 5 (3/28 - 4/3):**

-   Srishti: Continue developing the Android app and ensure it can communicate with the mug through Bluetooth technology.
-   All: Conduct testing and debugging to ensure all subsystems are functioning properly and the mug is operating as expected.

**Week 6 (4/4 - 4/10):**

-   All: Finalize the Android app and conduct thorough testing to identify and fix any issues.
-   All: Finalize the design of the smart mug and make any necessary improvements.

**Week 7 (4/11 - 4/14):**

-   All: Finalize the project and conduct a comprehensive test to ensure all subsystems are functioning as expected.
-   All: Prepare the final report and presentation for the project.
1.  **Ethics and Safety:**

The IEEE Code of Ethics expected us, as future engineers, to commit ourselves to the highest ethical and professional conduct. We are highly aware our responsibility as engineers and we all agree:

1.  *To uphold the highest standards of integrity, responsible behavior, and ethical conduct in professional activities*
    1.  **As a group we will make sure that we do not take ideas from others or online without correctly citing them. We will make sure that we hold each other accountable and double check everyone’s work. We will make sure we take in consideration the help that the TAs and other students provide us and properly implement them while also citing them.**
        1.  to hold paramount the safety, health, and welfare of the public, to strive to comply with ethical design and sustainable development practices, to protect the privacy of others, and to disclose promptly factors that might endanger the public or the environment;
1.  to improve the understanding by individuals and society of the capabilities and societal implications of conventional and emerging technologies, including intelligent systems;
    1.  to avoid real or perceived conflicts of interest whenever possible, and to disclose them to affected parties when they do exist;
        1.  to avoid unlawful conduct in professional activities, and to reject bribery in all its forms;
        2.  to seek, accept, and offer honest criticism of technical work, to acknowledge and correct errors, to be honest and realistic in stating claims or estimates based on available data, and to credit properly the contributions of others;
        3.  to maintain and improve our technical competence and to undertake technological tasks for others only if qualified by training or experience, or after full disclosure of pertinent limitations;
2.  *To treat all persons fairly and with respect, to not engage in harassment or discrimination, and to avoid injuring others.*
    1.  **As a group we will make sure that we are respectful to others. We will make sure to use respectful language and never hurt anyone else. We will all hold each other accountable. We will never discriminate or judge another person in the lab or outside the lab. We will treat all persons fairly. We will also make sure we respect one another and to never use hurtful language. We will communicate with each other effectively and hold each other responsible for our actions.**
        1.  to treat all persons fairly and with respect, and to not engage in discrimination based on characteristics such as race, religion, gender, disability, age, national origin, sexual orientation, gender identity, or gender expression;
        2.  to not engage in harassment of any kind, including sexual harassment or bullying behavior;
        3.  to avoid injuring others, their property, reputation, or employment by false or malicious actions, rumors or any other verbal or physical abuses;
3.  *To strive to ensure this code is upheld by colleagues and co-workers.*
    1.  **As a group we will make every effort to uphold this code of conduct and hold each other accountable for this code. We will make sure none of us break this code. We will respect each other and make sure we are also respected.**
        1.  to support colleagues and co-workers in following this code of ethics, to strive to ensure the code is upheld, and to not retaliate against individuals reporting a violation.
4.  *Personnel shall be trained and qualified to work on or near electrical equipment and conductors, and shall use appropriate protective equipment and procedures to minimize the risk of injury.*
    1.  **As a group we established safety procedures for handling electrical components and ensured that all members are familiar with these procedures. We will make sure that everyone has access to appropriate personal protective equipment such as insulated gloves, safety glasses, etc.**
        1.  We will be working with electrical components such as sensors, heating elements, and batteries. All of our members are properly trained and qualified to work with these components to avoid the risk of electrical hazards as we all have completed the safety training.
5.  *Appliances shall be so constructed and installed as to minimize electrical shock and fire hazards to persons and property.*
    1.  **It is important to ensure that all electrical components are properly installed and insulated to minimize the risk of electrical shock or fire. As a group we will consider factors such as the voltage and current requirements of our components, the type of insulation needed for any wiring, and how the electrical components will be housed within the mug.**
        1.  Following the NEC guidelines will help ensure that our smart mug is safe for use and meets electrical safety standards.

We are committed to have personal standards of conduct consistent with the IEEE and ACM Code of Ethics, but also beyond it.

**Resources**

1.  Ember Mug: <https://ember.com/products/ember-mug-2?variant=30843977826389&a=1&a=1&a=1&a=1&gclid=CjwKCAiAleOeBhBdEiwAfgmXf_lS8_LxedMdbgWazgfJ_4wzhcjqQ7uzlqpE1mobNka8gJXf2WwC5xoCeGAQAvD_BwE>
2.  Industry standard temperature sensor by Maxim Integrated: <https://www.digikey.com/en/products/detail/analog-devices-inc.-maxim-integrated/DS18B20%2BT%26R/3478852?utm_adgroup=Sensors%2C%20Transducers&utm_source=google&utm_medium=cpc&utm_campaign=Shopping_Supplier_Maxim%20Integrated_8022_Co-op&utm_term=&utm_content=Sensors%2C%20Transducers&gclid=CjwKCAiAleOeBhBdEiwAfgmXf-hIaZj1YjASEiDZOg5dMMVtSrDlfEeoC1fjx_hQg3LjqtbzHDXz3xoCAXYQAvD_BwE>
3.  Samsung 25R 18650 2500mAh 20A Battery - INR18650-25R

    <https://www.18650batterystore.com/products/samsung-25r-18650?utm_campaign=859501437&utm_source=g_c&utm_medium=cpc&utm_content=201043132925&utm_term=_&adgroupid=43081474946&gclid=CjwKCAiA0JKfBhBIEiwAPhZXD4K0buQB4llCTCdtCz7RvFwBTh2EiDKCG829OV8GOinTmFSQxTqOxBoCbw0QAvD_BwE>

4.  IEEE Code of Ethics:

    <https://www.ieee.org/about/corporate/governance/p7-8.html>

5.  National Electrical Safety Code (NESC)

    <https://standards.ieee.org/products-programs/nesc/>

6.  NodeMCU pinout and Datasheet

    <https://circuits4you.com/2017/12/31/nodemcu-pinout/>
