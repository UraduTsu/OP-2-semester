#pragma once
#include <vector>
#include "TBody.h"
#include "TBall.h"
#include "TParallelepiped.h"
using namespace std;

void calculatingNumberOfObjects(int number, int &num_of_balls, int &num_of_pars);
vector<TBall> createVectorOfBalls(int number);
vector<TParallelepiped> createVectorOfPars(int number);
void ballVectorOutput(int number, vector <TBall> & ballVector);
void parVectorOutput(int number, vector <TParallelepiped>& parVector);