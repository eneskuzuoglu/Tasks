#pragma once
#include <iostream>
#define _USE_MATH_DEFINE // M_PI
#include <cmath>

class Regularpolygon
{
private: 
	int n;
	double angle;
	static int count;


public:
	Regularpolygon(int sides) : n(sides), angle(3.142 *(sides - 2) / sides) {
		count++;
	}
	~Regularpolygon() {
		count--; 
	}
	double area(double sidelength) const {
		return(n * sidelength * sidelength) / (4 * tan(3.142 / n));
	}
	double length(double area) const {
		return sqrt((area * 4 * tan(3.142 / n)) / n);
	}
	static int getCount() {
		return count;
	}
};

