#pragma once
#include <string>
using namespace std;

class TBody
{
protected:
	string type;
	double area;
	double volume;
public:
	virtual void infoOutput() = 0;
	virtual double findArea() = 0;
	virtual double findVolume() = 0;
	double getArea();
	double getVolume();
};