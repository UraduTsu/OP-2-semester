#pragma once
#include <vector>
using namespace std;

class Multiplural
{
	int size;
	vector<int> set;;
public:
	Multiplural(int size, vector<int> set);
	Multiplural(const Multiplural& otherObject);
	Multiplural(int size);
	void belongsToSet(char s);
	int getSize();
	vector<int> getSet();
	Multiplural operator + (const Multiplural& otherObject);
	Multiplural operator * (const Multiplural& otherObject);
	Multiplural operator - (const Multiplural& otherObject);
	void setOutput();
};