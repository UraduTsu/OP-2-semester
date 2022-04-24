#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "textObject.h"
using namespace std;

vector<string> stringInput(int);
vector<textObject> vector_of_objectsCreate();
float findMaxPercentage(vector<textObject>);
void fullTextOutput(vector<textObject>);
void addStringsCheck(vector<textObject>, float);