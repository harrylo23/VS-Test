#include"point.h"
point::point(float a, float b) {
	x = a;
	y = b;
}
void point::setpoint(float a, float b) {
	x = a;
	y = b;
}
ostream& operator<<(ostream &)