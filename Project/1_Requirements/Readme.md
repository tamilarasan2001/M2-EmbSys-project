
# SOLAR TRACKING SYSTEM
# INTRODUCTION
* Solar tracking system which can be used as a power generating method from sunlight. This method of power generation is simple and is taken from natural resource. This needs only maximum sunlight to generate power. This project helps for power generation by setting the equipment to get maximum sunlight automatically. This system is tracking for maximum intensity of light. When there is decrease in intensity of light, this system automatically changes its direction to get maximum intensity of light. 
# RESEARCH
* Renewable energy sources are the most important sources environmentally friendly, clean, and sustainable and meets additional energy needs .Energy production 
has been increasing rapidly with the use of renewable energy sources in the world in recent years.Solar energy has an important place among renewable energy sources. 
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

# DESCRIPTION 
* The Sun tracking solar panel consists of two LDRs, solar panel and a servo motor and ATmega328 Micro controller.
Two light dependent resistors are arranged on the edges of the solar panel.
Light dependent resistors produce low resistance when light falls on them. The servo motor connected 
to the panel rotates the panel in the direction of Sun. Panel is arranged as that light on two LDRs is compared and panel  rotated towards LDR which have high 
intensity and  low resistance compared to other. 
Servo motor rotates the panel at certain angle.When the intensity of the light falling on right LDR is more, panel slowly moves towards
 right and if intensity on the left LDR is more, panel slowly moves towards left. In the noon time, Sun is ahead and intensity of light on both the panels is same. 
In such cases, panel is constant and there is no rotation.
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
![arduino_uno](https://user-images.githubusercontent.com/98837668/155003074-f5221b39-b07a-462e-8def-85b0489a5005.jpg)
* The Arduino Uno is a microcontroller board based on the ATmega328. Arduino is an open-source, prototyping platform and its simplicity makes it ideal for hobbyists to use as 
well as professionals. The Arduino Uno has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz crystal oscillator, a USB connection, 
a power jack, an ICSP header, and a reset button. It contains everything needed to support the microcontroller; simply connect it to a computer with a USB cable or power it 
with a AC-to-DC adapter or battery to get started.

# ACTUATORS(MOTORS)
* One of the two dc servo motors is mechanically attached with the driving axle of the other one so that the former will move with rotation of the axle of latter one. The axle 
* of the former servo motor is used to drive a solar panel. These two-servo motors are arranged in such a way that the solar panel can move along X-axis as well as Y-axis.
# MOTOR DRIVER
 * Motor driver is used to drive motors(Actuators)
# SOLAR CHARGE FLOW CONTROLLER
* Monitors the battery voltage
* Opens the circuit 
* when the battery voltage ascends to a certain Level it stops charging
* Prevent the DC power streams back to sun based board - during the evening, when sun based boards are not producing power, power can really stream in reverse from the batteries 
through the sunlight based boards, depleting the batteries.
More seasoned sun based charge controllers utilized a mechanical hand-off to open or close the circuit, ceasing or beginning force heading off to the batteries
# BLOCK DIAGRAM
![solar tracking system](https://user-images.githubusercontent.com/98837668/155649958-59f65842-9067-4fa1-b866-06850e218a82.png)
# 4W's and 1'H
# Who
This is useful for generating solar energy all over the world
# What
* To power the traffic lights and streetlights
* To power home appliances using solar power
# When
* when user wants to save energy and user wants to obtain renewable source of energy
# WHERE
* There is lot of industries recommonding solar energy all over the world
# HOW
* This issue can solved by creating a dual axis solar system where we can get sufficient sources of solar energy
# SWOT ANALYSIS
# FEATURES
* Can be used to power the traffic lights and streetlights
* Can be used in home to power the home appliances using solar power
* These can be used in industries as more energy can be saved by rotating the panel
# Limitations of Sun Tracking Solar Panel Circuit
* Though this system is more useful it has low efficiency in rainy season
* As they are expensive they required to change from time to time



