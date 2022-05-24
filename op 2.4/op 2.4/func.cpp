#include <vector>
#include <iostream>
#include "op 2.4.h"
#include "Multiplural.h"
using namespace std;

vector<int> setFill(int size) {
	vector<int> setOfNumbers;
	int el;
	cout << "Enter numbers that do NOT match!\n";
	for (int i = 0; i < size; i++) {
		cin >> el;
		setOfNumbers.push_back(el);
	}
	return setOfNumbers;
}

void belongCheck(Multiplural a, Multiplural b, Multiplural c, Multiplural d) {
	char s = 'A';
	a.belongsToSet(s);
	s = 'B';
	b.belongsToSet(s);
	s = 'C';
	c.belongsToSet(s);
	s = 'D';
	d.belongsToSet(s);
}