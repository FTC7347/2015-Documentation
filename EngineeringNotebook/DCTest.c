#include "JoystickDriver.c"

task main()
{
	while(true)
	{
		//each stick controls a motor
		getJoystickSettings(joystick);

		if(joystick.joy1_y1 < 20 && joystick.joy1_y1>-20)
		{
			motor[dc1] = 0;
		}
		else
		{
			motor[dc1] = joystick.joy1_y1;
		}
	}
}
