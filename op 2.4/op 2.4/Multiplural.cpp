#include "Multiplural.h"
#include <vector>
#include <iostream>
using namespace std;

Multiplural::Multiplural(int size, vector<int> set) {
	this->size = size;
	this->set = set;
}

Multiplural::Multiplural(const Multiplural& otherObject) {
	size = otherObject.size;
	for (int i = 0; i < otherObject.size; i++)
		set.push_back(otherObject.set[i]);
}

Multiplural::Multiplural(int size) :size(size) {
	for (int i = 0; i < size; i++)
		set.push_back(i);
}

vector<int> Multiplural::getSet() {
	return set;
}

int Multiplural::getSize() {
	return size;
}

Multiplural Multiplural::operator+(const Multiplural& otherObject) {
	vector<int> resultSet;
	for (int i = 0; i < size; i++)
		resultSet.push_back(set[i]);
	for (int i = 0; i < otherObject.size; i++) {
		bool flag = true;
		for (int j = 0; j < size; j++)
			if (otherObject.set[i] == set[j])
				flag = false;
		if (flag)
			resultSet.push_back(otherObject.set[i]);
	}
	Multiplural helpObject(resultSet.size(), resultSet);
	return helpObject;
}

Multiplural Multiplural::operator*(const Multiplural& otherObject) {
	vector<int> resultSet;
	for (int i = 0; i < otherObject.size; i++) {
		bool flag = false;
		for (int j = 0; j < size; j++)
			if (otherObject.set[i] == set[j]) {
				flag = true;
				break;
			}
		if (flag)
			resultSet.push_back(otherObject.set[i]);
	}
	Multiplural helpObject(resultSet.size(), resultSet);
	return helpObject;
}

Multiplural Multiplural::operator-(const Multiplural& otherObject) {
	vector<int> resultSet;
	for (int i = 0; i < size; i++) {
		bool flag = true;
		for (int j = 0; j < otherObject.size; j++)
			if (set[i] == otherObject.set[j]) {
				flag = false;
				break;
			}
		if (flag)
			resultSet.push_back(set[i]);
	}
	Multiplural helpObject(resultSet.size(), resultSet);
	return helpObject;
}

void Multiplural::setOutput() {
	for (int i = 0; i < size; i++)
		cout << set[i] << " ";
	cout << endl << endl;
}

void Multiplural::belongsToSet(char s) {
	int number;
	bool flag = false;
	cout << "You are checking " << s << " set:\n" << "Enter your number: "; cin >> number;
	for (int i = 0; i < size; i++)
		if (set[i] == number) {
			flag = true;
			break;
		}
	if (flag)
		cout << "This number belongs to this set!\n";
	else
		cout << "This number does NOT belong to this set!\n";
}