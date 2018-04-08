#include"Tank.h"
Tank::Tank()
{
	pinRA=22;
	pinRB=27;
	pinLA=17;
	pinLB=4;
	gpioInitialise();
	gpioSetMode(pinRA,PI_OUTPUT);
	gpioSetMode(pinRB,PI_OUTPUT);
	gpioSetMode(pinLA,PI_OUTPUT);
	gpioSetMode(pinLB,PI_OUTPUT);
	int range = 255;
	gpioSetPWMrange(pinRA,range);
	gpioSetPWMrange(pinRB,range);
	gpioSetPWMrange(pinLA,range);
	gpioSetPWMrange(pinLB,range);
}
Tank::~Tank()
{
	stop();
	gpioTerminate();
}
void Tank::setPulseWide(int ra,int rb,int la,int lb)
{
	gpioPWM(pinRA,ra);
	gpioPWM(pinRB,rb);
	gpioPWM(pinLA,la);
	gpioPWM(pinLB,lb);
}

void Tank::setMotorSpeed(int r,int l)
{
	int ra=0,rb=0,la=0,lb=0;
	if (r>0){
		ra = r;
	}else{
		rb = -1*r;
	}
	if (l>0){
		la = l;
	}else{
		lb = -1*l;
	}

	setPulseWide(ra,rb,la,lb);
}
void Tank::stop()
{
	setPulseWide(0,0,0,0);
}
void Tank::delay(int ms)
{
	gpioDelay(ms);
}
