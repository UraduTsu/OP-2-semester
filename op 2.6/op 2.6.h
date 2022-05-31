#pragma once
#include <vector>
#include <string>
#include "Tree.h"
using namespace std;

vector<string> readFile();
bool banwordCheck(string word);
Tree* makeTree(vector<string>);
void treeOutput(string, Tree*, bool);
void alphaOutput(Tree*);