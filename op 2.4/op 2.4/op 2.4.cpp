#include <iostream>
#include <vector>
#include "op 2.4.h"
#include "Multiplural.h"
using namespace std;

int main()
{
    vector<int> setOfNumbers;
    int aSize, cSize;
    cout << "Enter size of A: "; cin >> aSize;
    setOfNumbers = setFill(aSize);
    Multiplural pluralA(aSize, setOfNumbers);
    pluralA.setOutput();

    cout << "B is a set of numbers from 0 to n - 1. Enter size of B:  "; cin >> cSize;
    Multiplural pluralB(cSize);
    pluralB.setOutput();

    cout << "C is a copy of A: " << endl;
    Multiplural pluralC(pluralA);
    pluralC.setOutput();

    cout << "A + B = ";
    Multiplural pluralApB = pluralA + pluralB;
    pluralApB.setOutput();

    cout << "C * B = ";
    Multiplural pluralCxB = pluralA * pluralB;
    pluralCxB.setOutput();

    cout << "D is a (A + B) - (C * B): " << endl;
    Multiplural pluralD = pluralApB - pluralCxB;
    pluralD.setOutput();

    belongCheck(pluralA, pluralB, pluralC, pluralD);
}