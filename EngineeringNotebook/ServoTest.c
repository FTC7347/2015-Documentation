#include "JoystickDriver.c"

task main() {
	while(true) {
		getJoystickSettings(joystick);
		
		if(joy1Btn(1)) {
			servo[servo1] = 255;
		}
		if(joy1Btn(2)) {
			servo[servo1] = 0;
		}
	}
}
