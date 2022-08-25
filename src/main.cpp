#include "main.h"
void on_center_button() {
}
void initialize() {
}

void disabled() {}

void competition_initialize() {}

void autonomous() {}

void opcontrol() {
	pros::Controller master(pros::E_CONTROLLER_MASTER);
	pros::Motor left_front(13);
	pros::Motor left_back(20);
	pros::Motor right_front(3);
	pros::Motor right_back(7); 


	while (true) {
		int left = master.get_analog(ANALOG_LEFT_Y);
		int right = master.get_analog(ANALOG_RIGHT_Y);
		left_front.move(left);
		left_back.move(left);
		right_front.move(right);
		right_back.move(right);

		pros::delay(20);
	}
}
