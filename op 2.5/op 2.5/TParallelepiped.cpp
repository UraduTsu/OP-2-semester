#include "TParallelepiped.h"
#include <iostream>
using namespace std;

TParallelepiped::TParallelepiped(double height, double length, double width) {
	this->height = height;
	this->length = length;
	this->width = width;
	this->type = "Parallelepiped";
}

double TParallelepiped::findArea() {
	area = (height * width * 2) + (height * length * 4);
	return area;
}

double TParallelepiped::findVolume() {
	volume = height * length * width;
	return volume;
}

void TParallelepiped::infoOutput() {
	cout << "Type: " << type 
		<< "\tHeight: " << height 
		<< "\tLength: " << length 
		<< "\tWidth: " << width 
		<< "\tVolume: " << volume 
		<< "\tArea: " << area <<endl;
}

double TParallelepiped::getHeight() {
	return height;
}

double TParallelepiped::getLength() {
	return length;
}

double TParallelepiped::getWidth() {
	return width;
}