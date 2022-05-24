#include "TBall.h"
#include <iostream>
using namespace std;

TBall::TBall(double radius) {
	this->radius = radius;
	this->type = "Ball";
}

double TBall::findVolume() {
	const double pi = 3.14;
	volume = (4. / 3.) * pi * radius * radius * radius;
	return volume;
}

double TBall::findArea() {
	const double pi = 3.14;
	area = 4. * pi * radius * radius;
	return area;
}

void TBall::infoOutput() {
	cout << "Type: " << type << "\tRadius: " << radius << "\tVolume: " << volume << "\t\tArea: " << area << endl;
}

double TBall::getRadius() {
	return radius;
}