# CASE STUDY 1 
# AUTOMATED SOLAR TRACKING SYSTEM
![Block diagram for Solar tracker](https://user-images.githubusercontent.com/98837668/154851858-09042167-69b2-47ac-b3c8-86707f2ae9cb.png)

# COSTRUCTION
* The Sun tracking solar panel consists of two LDRs, solar panel and a servo motor and ATmega328 Micro controller.Two light dependent resistors are arranged on the edges of the solar panel.
Light dependent resistors produce low resistance when light falls on them. The servo motor connected 
to the panel rotates the panel in the direction of Sun.Panel is arranged as that light on two LDRs is compared and panel rotated towards LDR which have high 
intensity and  low resistance compared to other.Servo motor rotates the panel at certain angle.When the intensity of the light falling on right LDR is more, panel slowly moves
towards right and if intensity on the left LDR is more, panel slowly moves towards left. In the noon time, intensity of light on both the panels is same. 
so, panel stops rotation and remains remains constant.
# COMPONENTS REQUIRED
* ATmega328 micro controller
* Solar panel
* Light Dependent resistors 
* Servo Motor
# SENSOR
* LDR sensor sense the light and sends flag to microcontroller.
Light Dependent Resistors (LDRs) which are placed on a common plate with solar panel. Light from a source strikes on them by different amounts. Due to their inherent property 
of decreasing resistance with increasing incident light intensity, i.e. photoconductivity, the value of resistances of all the LDRs is not always same.
LDR sends equivalent signal of  resistance value to the Microcontroller which is configured by required programming logic. The values are compared with each 
other by keeping a particular LDR value as reference.
# MICRO CONTROLLER
* Based on the input signals received from the LDRs the microcontroller sends  signals to the servo motors . One servo motor is used for tracking along x-axis and the other is for y-axis tracking.
# ADRUINO UNO
![arduino_uno](https://user-images.githubusercontent.com/98837668/155139213-97d6a10b-872e-42d7-931b-23f224f6c8ed.jpg)

* The Arduino Uno is a microcontroller board based on the ATmega328. Arduino is an open-source, prototyping platform and its simplicity makes it ideal for hobbyists to use as 
well as professionals. The Arduino Uno has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz crystal oscillator, a USB connection, 
a power jack, an ICSP header, and a reset button. It contains everything needed to support the microcontroller; simply connect it to a computer with a USB cable or power it 
with a AC-to-DC adapter or battery to get started.

# ACTUTORS(MOTORS)
* One of the two dc servo motors is mechanically attached with the driving axle of the other one so that the other motor will move with rotation of the axle of latter one. The axle 
 of the former servo motor is used to drive a solar panel. These two-servo motors are arranged in such a way that the solar panel can move along X-axis as well as Y-axis.


# MOTOR DRIVER
 * Motor driver is used to drive motors(Actutors)
# SOLAR CHARGE FLOW CONTROLLER
:pushpin: Monitors the battery voltage
:pushpin: Opens the circuit 
:pushpin:when the battery voltage ascends to a certain Level it stops charging
:pushpin: Prevent the DC power streams back to sun based board - during the evening, when sun based boards are not producing power, power can really stream in reverse from the batteries through the sunlight based boards, depleting the batteries.More seasoned sun based charge controllers utilized a mechanical hand-off to open or close the circuit, ceasing or beginning force heading off to the batteries
# FEATURES
:pushpin: can be used to power the traffic lights and streetlights <br />
:pushpin: can be used in home to power the appliances using solar power <br />
:pushpin: can be used in industries as more energy can be saved by rotating the panel <br />

# REQUIREMENT MODELLING

# Table : High level test plan
|Test ID| 	Description|
|---|----|
|H_01|	The sensor senses the intensity of light|
|H_02|	The panel moves towards the region where the intensity of light is more|
|H_03|	The panel stops moving when there is no light|

# Table : Low level test plan
|Test ID| 	Description|
|---|---|
|L_01 |	LDR sensor is used to sense the light  |
|L_02 |	One servo motor is used for tracking along x-axis and the other is for y-axis tracking|
|L_03 |	There is no light falls on LDR during night the motors stops rotating |

# Limitations 
:pushpin: Though this system is more useful it has low efficiency in rainy season
:pushpin: As they are expensive they required to change from time to time
