#include <iostream>
#include <string>
#include <vector>
#include "textObject.h"
using namespace std;

vector<string> stringInput(int i) {
	vector<string> stringvector;
	string string_for_input;
	char sym;
	cout << "\n" << i + 1 << " text:\n\n";
	do {
		cout << "Enter string: "; cin.ignore(); getline(cin, string_for_input);
		stringvector.push_back(string_for_input);
		cout << "Enter + if you want to continue: "; cin >> sym;
	} while (sym == '+');
	return stringvector;
}

vector<textObject> vector_of_objectsCreate() {
	vector<string> vector_of_strings;
	vector<textObject> vector_of_texts;
	int number_of_texts;
	cout << "How many texts do you want?\n"; cin >> number_of_texts;
	for (int i = 0; i < number_of_texts; i++) {
		vector_of_strings = stringInput(i);
		textObject filledObject(vector_of_strings);
		vector_of_texts.push_back(filledObject);
	}
	return vector_of_texts;
}

float findMaxPercentage(vector<textObject> vector_of_texts) {
	float maxPercent = 0;
	for (int i = 0; i < vector_of_texts.size(); i++) {
		vector_of_texts[i].findPercentage();
	}
	for (int i = 0; i < vector_of_texts.size() - 1; i++) {
		if (vector_of_texts[i + 1].getPercentage() > vector_of_texts[i].getPercentage())
			maxPercent = vector_of_texts[i + 1].getPercentage();
		else
			maxPercent = vector_of_texts[i].getPercentage();
	}
	return maxPercent;	
}

void fullTextOutput(vector<textObject> vector_of_texts) {
	for (int i = 0; i < vector_of_texts.size(); i++) {
		cout << "\n" << i + 1 << " text: \n\n";
		vector_of_texts[i].textOutput();
		for (int i = 0; i < vector_of_texts.size(); i++) {
			vector_of_texts[i].findPercentage();
		}
		vector_of_texts[i].percentPrint();
	}
}

void addStringsCheck(vector<textObject> vector_of_texts, float maxPerc) {
	char yes;
	int textPos;
	do {
		cout << "\n\nDo you want to add more strings to texts? y/n: "; cin >> yes;
		if (yes == 'y') {
			cout << "Enter number of text: "; cin >> textPos;
			vector_of_texts[textPos - 1].addString();
			fullTextOutput(vector_of_texts);
			maxPerc = findMaxPercentage(vector_of_texts);
			cout << "\nMax Percent is: " << maxPerc << "%";
		}
		else
			break;
	} while (yes == 'y');
}