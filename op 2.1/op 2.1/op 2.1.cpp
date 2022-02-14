#include <iostream>
#include <fstream>
#include <string>
#include "op 2.1.h"
using namespace std;

int main()
{
    char sym = '+';
    string f1 = "file1.txt", f2 = "file2.txt";
    inpt(f1);
    otpt(f1);
    newf(f1, f2);
    otpt(f2);
    while (sym == '+') {
        cout << "Enter + if you want to continue writing: "; cin >> sym;
        if (sym == '+') {
            app(f1);
            otpt(f1);
            newf(f1, f2);
            otpt(f2);
        }
    }
}