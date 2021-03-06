# CASE STUDY 1 
# SOLAR TRACKING SYSTEM
![solar tracking system](https://user-images.githubusercontent.com/98837668/155691189-760870d5-e2e5-4502-8362-8500179de898.png)

# COSTRUCTION
* The Sun tracking solar panel consists of two LDRs, solar panel and a servo motor and ATmega328 Micro controller.Two light dependent resistors are arranged on the edges of the solar panel.LDRs produce low resistance when light falls on them. The servo motor connected to the panel rotates the panel in the direction of Sun.Panel is arranged as that light on two LDRs is compared and panel rotated towards LDR which have high intensity and  low resistance compared to other.Servo motor rotates the panel at certain angle.When the intensity of the light falling on right LDR is more, panel slowly movestowards right and if intensity on the left LDR is more, panel slowly moves towards left. In the noon time, intensity of light on both the panels is same and panel stops rotation and remains constant.
# COMPONENTS REQUIRED
* ATmega328 micro controller
* Solar panel
* Light Dependent resistors 
* Servo Motor
# SENSOR
* LDR sensor sense the light and sends flag to microcontroller.
Light Dependent Resistors which are placed on a common plate with solar panel. Light from a source strikes on them by different amounts. Due to their property 
of decreasing resistance with increasing incident light intensity, i.e. photoconductivity, the value of resistances of all the LDRs is not always same.
LDR sends equivalent signal of  resistance value to the Microcontroller. The values are compared with each other by keeping a particular LDR value as reference.
# MICRO CONTROLLER
* Based on the input signals received from the LDRs the microcontroller sends  signals to the servo motors . One servo motor is used for tracking along x-axis and the other is for y-axis tracking.
# ADRUINO UNO
![arduino_uno](https://user-images.githubusercontent.com/98837668/155691433-a74ffe73-b474-43de-84fb-a7b7bc89f18a.jpg)


* The Arduino Uno is a microcontroller board based on the ATmega328. Arduino is an open-source, prototyping platform and its simplicity makes it ideal for hobbyists to use as 
well as professionals. The Arduino Uno has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz crystal oscillator, a USB connection, 
a power jack, an ICSP header, and a reset button. It contains everything needed to support the microcontroller; simply connect it to a computer with a USB cable or power it 
with a AC-to-DC adapter or battery to get started.

# ACTUATORS(MOTORS)
* One dc servo motors is mechanically attached with the driving axle of the another one so that the other motor will move with rotation of the axle of latter one. The axle 
 of the former servo motor is used to drive a solar panel. Two-servo motors are arranged in a way that the solar panel can move along X-axis as well as Y-axis.


# MOTOR DRIVER
 * Motor driver is used to drive motors(Actuators)
# SOLAR CHARGE FLOW CONTROLLER
* Monitors the battery voltage
* Opens the circuit 
* when the battery voltage ascends to a certain Level it stops charging
* Prevent the DC power streams back to sun based board - during  evening, when sun based boards are not producing power, power can really stream in reverse from the batteries through the sunlight based boards, depleting the batteries.More seasoned sun based charge controllers utilized a mechanical hand-off to open or close the circuit, ceasing or beginning force heading off to the batteries
# FEATURES
* can be used to power the traffic lights and streetlights <br />
* can be used in home to power the appliances using solar power <br />
* can be used in industries as more energy can be saved by rotating the panel <br />

# REQUIREMENT MODELLING

# Table : High level test plan
|Test ID| 	Description|
|---|----|
|H_01|	The sensor senses the intensity of light |
|H_02|	The panel shall moves towards the region where the intensity of light is more|
|H_03|	The panel stops moving when there is no light|

# Table : Low level test plan
|Test ID| 	Description|
|---|---|
|L_01 |	LDR sensor is used to sense intensity of light|
|L_02 |	One servo motor is used for tracking along x-axis and the other is for y-axis tracking|
|L_03 |	There is no light falls on LDR during night the motors stops rotating |

# Limitations 
* Though this system is more useful it has low efficiency in rainy season<br />
* As they are expensive they required to change from time to time<br />
