# ECE445 Siqi Lu Notebooks

# Week 02/06
- Project topics determined.
- Researching the design of smart mugs.
- Initial Project Proposal Finalized

# Week 02/13
- Researching the design of our smart mugs.

# Week 02/20
- Design document original version completed.
- We updated our proposal this week as well.

# Week 03/06
- We met with the professor and TAs to discuss our design document and our project. They gave us some valuable suggestions.

# Week 03/13
- Spring break

# Week 03/20
- This week we are focusing on completing the schematics and pcb design. I designed the heating, sensor and LED module and write the basic code for them.
![heating_sch](https://user-images.githubusercontent.com/106114777/236340469-6a2c0830-6d8d-444f-b7e8-9f9180dd0c5f.png)
![LED_sch](https://user-images.githubusercontent.com/106114777/236340911-590f8080-4ea1-407d-a75f-03cc7506315e.png)
![Sensor_sch](https://user-images.githubusercontent.com/106114777/236340922-9278431a-11c8-45f5-bc59-2a2e5048be11.png)
- I also did some circuirt simulation for the design
![heating_test_1](https://user-images.githubusercontent.com/106114777/236341374-86aae0ff-26c1-4baa-9b91-6b64b6c68b38.png)
![heating_test_2](https://user-images.githubusercontent.com/106114777/236341387-655011ca-8085-434a-a259-6c45274c0fe8.png)

# Week 03/27
- I ordered the PCB and other part. It will arrive in a week.

# Week 04/03
- This week I soldered the PCB and most of the components are on the pcb board now. Unfortunately we had to ordered more parts, which will take another week. 

# Week 04/10
- I completed soldereing the PCB except for the programmer. After talked to our TA Selva, we decided to give up the PCB since it would take long time to test and we decided to build the breadboard circuit. 
- Parts for the breadboard circuit are ordered.

# Week 04/17
- Building the circuit on the breadboard using the ESP32 Dev Board.
- 4/22: Demonstration the functionality of the circuit. Unfortunately the ESP32 Dev Board broke during our process of testing, we purchased the board immediately but shipping may take long. 
- 4/23: Testing and building the heating and sensor subsystem seperately in order to meet some expectation to those subsystems. A new dev board is considered to apply for demonstration.

# Week 04/24
- Mock presentation slides making and script writing.
- 4/29: Me and Srishti met in the morning and finish most of the integration. The MOSFET we need to use for the heating system is not arrived yet. The temperature sensor works perfectly can display temp through the serial monitor. The esp32 sucessfully received user input temp from the designed web and compare it with the sensed temp. The LED was turned on sucessfully when the user temp is higher than the sensed temp.
- 4/30: Final prensentation preparation. Me and Srishti also took some pictures and videos about what we go for the circuit so far. 

# Week 05/01
- 5/1: Final Presentation on May 1st, 8:30am. I think we did a pretty good job in presenting.
- 5/2: Whole breadboard circuit is completed (YES!!!).  
![IMG_4990](https://user-images.githubusercontent.com/106114777/236340328-50a4f610-4f81-47f2-9c11-6fe5d38e9deb.jpg)
I obtained some data and pictures that can verify the functionality of the circuit. The only unfortunate thing left is that our heating element are too small to heat up a cup of water quickly and the sensor was exposed to a open environment which may caused some errors when detected temperatures.  
![voltage_verification_1](https://user-images.githubusercontent.com/106114777/236341431-8eb669f6-62b7-4cfa-aee2-05019d4ccafe.png)
![voltage_verification_2](https://user-images.githubusercontent.com/106114777/236341487-28389bea-e39a-4774-8db6-91ab408ea812.png)
![sensor_verification](https://user-images.githubusercontent.com/106114777/236341782-4a4d6724-30eb-49b6-8195-5b8e8054096a.png)
I also added the RGB LED system to the whole design which was one of our original expectation.  
Although the battery we used had some trouble powering the heating element (may solved by charging it), we eventually used a power source which can provided both 5V and 3.3V voltage to power the heating element with the IRIB8721 n-channel MOSFET. The heating element is now successfully integrated to the main system.
- 5/3: We had our second final demo on 9am and it went really good! 
- 5/4: Checked out everything and finished this notes. This class is officially over!
