#include "op laba 2 cpp.h"
using namespace std;

int main()
{
    char s = ' ';                                   //допом≥жна зм≥нна
    do {                                            
        inpt(s);
        cout << "Your vnz info: " << endl;
        otpt();
        maxstud();
        newf();
        cout << "\nVnz with 3 and 4 level of akreditation: ";
        otpt2();
        cout << "\nIf you want to continue program type + : "; cin >> s;        //визначенн€ к≥нц€ програми
    } while (s == '+');
}