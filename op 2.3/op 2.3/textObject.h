#pragma once
#include <vector>
#include <string>
#include <iostream>
using namespace std;
class textObject
{
	float percent;
	vector <string> stringVector;
public:
	textObject(vector<string> vector_of_strings);
	void addString();
	void textOutput();
	void findPercentage();
	float getPercentage();
	vector<string> getString();
	void percentPrint();
};