#include "op 2.5.h"
#include <iostream>
using namespace std;

void calculatingNumberOfObjects(int number, int &num_of_balls, int &num_of_pars) {
	num_of_balls = num_of_pars = number / 2;
	if (num_of_balls + num_of_pars != number)
		num_of_balls++;
}

vector<TBall> createVectorOfBalls(int number) {
	vector <TBall> vector_of_balls;
	double radius;
	cout << endl;
	for (int i = 0; i < number; i++) {
		cout << "Enter " << i + 1 << " ball radius: "; cin >> radius;
		TBall ballObject(radius);
		ballObject.findVolume();
		ballObject.findArea();
		vector_of_balls.push_back(ballObject);
	}
	return vector_of_balls;
}

vector<TParallelepiped> createVectorOfPars(int number) {
	vector <TParallelepiped> vector_of_pars;
	double height, length, width;
	cout << endl;
	for (int i = 0; i < number; i++) {
		cout << "Enter " << i + 1 << " par height: "; cin >> height;
		cout << "Enter " << i + 1 << " par length: "; cin >> length;
		cout << "Enter " << i + 1 << " par width: "; cin >> width;
		TParallelepiped parObject(height, length, width);
		parObject.findArea();
		parObject.findVolume();
		vector_of_pars.push_back(parObject);
	}
	return vector_of_pars;
}

void ballVectorOutput(int number, vector <TBall>& ballVector) {
	double fullVolume = 0;
	cout << endl;
	for (int i = 0; i < number; i++) {
		ballVector[i].infoOutput();
		fullVolume += ballVector[i].getVolume();
	}
	cout << endl << "Full volume: " << fullVolume << endl << endl;
}

void parVectorOutput(int number, vector <TParallelepiped>& parVector) {
	double fullArea = 0;
	for (int i = 0; i < number; i++) {
		parVector[i].infoOutput();
		fullArea += parVector[i].getArea();
	}
	cout << endl << "Full area: " << fullArea << endl;
}