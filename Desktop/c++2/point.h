#pragma once
#include<iostream>
using namespace std;
class point
{
public:
	point(float = 0, float = 0);
	void setpoint(float, float);
	float getx()const { return x; }
	float gety()const { return y; }
	friend ostream& operator<<(ostream&, const point&);
	float x, y;

};