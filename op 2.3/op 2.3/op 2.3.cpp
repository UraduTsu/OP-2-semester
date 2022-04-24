#include <iostream>
#include <string>
#include <vector>
#include "op 2.3.h"
#include "textObject.h"
using namespace std;

int main()
{
    float maxPerc;
    vector<textObject> vector_of_objects;
    vector_of_objects = vector_of_objectsCreate();
    fullTextOutput(vector_of_objects);
    maxPerc = findMaxPercentage(vector_of_objects);
    cout << "\nMax Percent is: " << maxPerc << "%";
    addStringsCheck(vector_of_objects, maxPerc);
}