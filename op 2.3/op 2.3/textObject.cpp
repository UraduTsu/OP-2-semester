#include "textObject.h"
textObject::textObject(vector<string> vector_of_strings) {
	stringVector = vector_of_strings;
}

void textObject::findPercentage() {
    string prigolosn = "qwrtpsdfghjklzxcvbnmQWRTPSDFGHJKLZXCVBNM";
    int l = 0, k = 0;
    for (int i = 0; i < stringVector.size(); i++)
        for (int j = 0; j < stringVector[i].size(); j++) {
            if (isalpha(stringVector[i][j])) {
                l++;
                if (prigolosn.find(stringVector[i][j]) != string::npos)
                    k++;
            }
        }
    percent = (float(k) * 100) / float(l);
}

float textObject::getPercentage() {
    return percent;
}

vector<string> textObject::getString() {
    return stringVector;
}

void textObject::percentPrint() {
    cout << "\nPercent of this text: " << percent << "%" << endl;
}

void textObject::textOutput(){
    for (int i = 0; i < stringVector.size(); i++)
        cout << stringVector[i] << endl;
}

void textObject::addString() {
    char sym;
    string str;
    do {
        cout << "Enter string: "; cin.ignore(); getline(cin, str);
        stringVector.push_back(str);
        cout << "Enter + if you want to continue: "; cin >> sym;
    } while (sym == '+');
}