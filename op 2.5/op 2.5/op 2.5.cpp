#include <iostream>
#include <vector>
#include "op 2.5.h"
using namespace std;

int main()
{
    vector <TBall> vector_of_balls;
    vector <TParallelepiped> vector_of_pars;
    int number, number_of_balls = 0, number_of_pars = 0;
    cout << "Enter number of objects you want to create: "; cin >> number;
    if (number == 0 || number == 1)
        cout << "No\n";
    else {
        calculatingNumberOfObjects(number, number_of_balls, number_of_pars);
        vector_of_balls = createVectorOfBalls(number_of_balls);
        vector_of_pars = createVectorOfPars(number_of_pars);
        ballVectorOutput(number_of_balls, vector_of_balls);
        parVectorOutput(number_of_pars, vector_of_pars);
    }
}