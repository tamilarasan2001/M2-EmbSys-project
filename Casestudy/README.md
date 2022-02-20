# CASE STUDY 1 : AUTOMATED SOLAR TRACKER SYSTEM
![SOLAR TRACKER ](https://user-images.githubusercontent.com/98837668/154837128-5da70435-09e9-4000-84c4-903b5941984b.png)
# SENSOR
* LDR sensor sense the light and sends flag to microcontroller.
Light Dependent Resistors (LDRs) which are placed on a common plate with solar panel. Light from a source strikes on them by different amounts. Due to their inherent property of decreasing resistance with increasing incident light intensity, i.e. photoconductivity, the value of resistances of all the LDRs is not always same.
LDR sends equivalent signal of their respective resistance value to the Microcontroller which is configured by required programming logic. The values are compared with each other by considering a particular LDR value as reference.
# MICRO CONTROLLER
* The microcontroller sends appropriate signals to the servo motors based on the input signals received from the LDRs. One servo motor is used for tracking along x-axis and the other is for y-axis tracking.

# ACTUTORS(MOTORS)
* One of the two dc servo motors is mechanically attached with the driving axle of the other one so that the former will move with rotation of the axle of latter one. The axle of the former servo motor is used to drive a solar panel. These two-servo motors are arranged in such a way that the solar panel can move along X-axis as well as Y-axis.
#MOTOR DRIVER
 Motor driver is used to drive motors(Actutors)
# ABSTRACT
The utilization of non-renewable energy sources and the ozone depleting substances emanation is a developing worry of the universal group. Thus, the innovative work of elective sources are constraining down the expenses related with sustainable power sources.
The Sun tracking solar panel consists of two LDRs, solar panel and a servo motor and ATmega328 Micro controller.
Two light dependent resistors are arranged on the edges of the solar panel. Light dependent resistors produce low resistance when light falls on them. The servo motor connected to the panel rotates the panel in the direction of Sun. Panel is arranged in such a way that light on two LDRs is compared and panel is rotated towards LDR which have high intensity i.e. low resistance compared to other. Servo motor rotates the panel at certain angle.When the intensity of the light falling on right LDR is more, panel slowly moves towards right and if intensity on the left LDR is more, panel slowly moves towards left. In the noon time, Sun is ahead and intensity of light on both the panels is same. In such cases, panel is constant and there is no rotation.

# COMPONENTS REQUIRED
* ATmega328 micro controller,
* Solar panel, 
* Light Dependent resistors 
* Servo Motor.

# FEATURES
* can be used to power the traffic lights and streetlights
*  can be used in home to power the appliances using solar power.
* These can be used in industries as more energy can be saved by rotating the panel.
# Limitations of Sun Tracking Solar Panel Circuit
* Though this system is more useful it has low effects in rainy season.
* they are required to change from time to time.They are expensive.
