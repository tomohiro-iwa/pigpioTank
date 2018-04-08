#include"Tank.h"
#include"unistd.h"

int main()
{
	Tank tank;	
	tank.setMotorSpeed(200,200);
	tank.delay(500);
	sleep(2);
}
