#include <Servo.h>
//defining Servos
Servo servo1;
int servo = 0;
int servoLimitHigh = 150;
int servoLimitLow = 10;

Servo servo2; 
int servov = 0; 
int servovLimitHigh = 150;
int servovLimitLow = 10;

//Assigning LDRs
int ldrtopleft = 2; //top left LDR
int ldrtopright = 1; //top right LDR 
int ldrbottomleft = 3; //bottom left LDR 
int ldrbottomright = 0; //bottom right LDR 

 void setup () 
 {
  servo1.attach(10);
  servo1.write(0);
  servo2.attach(9);
  servo2.write(0);
  delay(500);
 }

void loop()
{
  servo = servo1.read();
  servov = servo2.read();
  //capturing analog values of each LDR
  int topl = analogRead(ldrtopleft);
  int topr = analogRead(ldrtopright);
  int botl = analogRead(ldrbottomleft);
  int botr = analogRead(ldrbottomright);
 
  // calculating average
  int averagetop = (topl + topr) / 2; //average of top LDRs
  int averagebottom = (botl + botr) / 2; //average of bottom LDRs
  int averageleft = (topl + botl) / 2; //average of left LDRs
  int averageright = (topr + botr) / 2; //average of right LDRs

  if (averagetop < averagebottom)
  {
    servo2.write(servov +1);
    if (servov > servovLimitHigh) 
     { 
      servov = servovLimitHigh;
     }
    delay(10);
  }
  else if (averagebottom < averagetop)
  {
    servo2.write(servov -1);
    if (servov < servovLimitLow)
  {
    servov = servovLimitLow;
  }
    delay(10);
  }
  else 
  {
    servo2.write(servov);
  }
  
  if (averageleft > averageright)
  {
    servo1.write(servo +1);
    if (servo > servoLimitHigh)
    {
    servo = servoLimitHigh;
    }
    delay(10);
  }
  else if (averageright > averageleft)
  {
    servo1.write(servo -1);
    if (servo < servoLimitLow)
     {
     servo = servoLimitLow;
     }
    delay(10);
  }
  else 
  {
    servo1.write(servo);
  }
  delay(50);
}
