#include <iostream>
#include <fstream>
#include <string>
#include "op 2.6.h"
#include "Tree.h"
using namespace std;

int main()
{
    vector<string> wordVector;
    wordVector = readFile();
    Tree* newTree = makeTree(wordVector);
    cout << "Tree: " << endl << endl;
    treeOutput("", newTree, false);
    alphaOutput(newTree);
}