#ifndef __TANK__
#define __TANK__

#include<pigpio.h>
class Tank
{
	public:
		Tank();
		~Tank();
		void setPulseWide(int,int,int,int);
		void setMotorSpeed(int,int);
		void stop();
		void delay(int);
	private:
		int pwmRange;
		int pulseWidth;
		int speedR,speedL;
		int pwRA,pwRB,pwLA,pwLB;
		int pinRA,pinRB,pinLA,pinLB;
};
#endif
