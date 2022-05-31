#pragma once
#include <string>
#include <vector>
using namespace std;

class Tree
{
    string value;
    int count;
    Tree* left;
    Tree* right;
public:
    Tree(string);
    string getRoot() { return value; }
    Tree* getLeft() { return left; }
    Tree* getRight() { return right; }
    void insertRight(string);
    void insertLeft(string);
    void countplus() { count++; }
    int getcount() { return count; }
};