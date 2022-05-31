#include "op 2.6.h"
#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

vector<string> readFile() {
	ifstream file("codeFile.txt");
	string s, word;
	vector<string> helpVector;
	while (getline(file, s)) {
		while (s.find(' ') != string::npos) {
			word = s.substr(0, s.find(' '));
			s = s.substr(s.find(' ') + 1);
			if (banwordCheck(word))
				helpVector.push_back(word);
		}
		if (s[s.size() - 1] == ';')
			s = s.substr(0, s.size() - 1);
		if (banwordCheck(s))
			helpVector.push_back(s);
	}
	file.close();
	return helpVector;
}

bool banwordCheck(string word) {
	string listofbans = "+!-/{}%*?:<<==>>=||&&'1234567890.,\" ()";
	string listofbanwords = "unsigned int double long short char bool true false void auto float new";
	vector<string> helpVector;
	while (listofbanwords.find(' ') != string::npos) {
		string s = listofbanwords.substr(0, listofbanwords.find(' '));
		listofbanwords = listofbanwords.substr(listofbanwords.find(' ') + 1);
		helpVector.push_back(s);
	}
	helpVector.push_back(listofbanwords);
	if (listofbans.find(word[0]) == string::npos
		&& find(helpVector.begin(), helpVector.end(), word) == helpVector.end())
		return true;
	return false;
}

Tree* makeTree(vector<string> wordVector) {
	Tree* wordTree = new Tree(wordVector[0]);
	for (int i = 1; i < wordVector.size(); i++) {
		int compare = strcmp(wordVector[0].c_str(), wordVector[i].c_str());
		if (compare == 0)
			wordTree->countplus();
		if (compare > 0)
			wordTree->insertRight(wordVector[i]);
		if (compare < 0)
			wordTree->insertLeft(wordVector[i]);
	}
	return wordTree;
}

void treeOutput(string prefix, Tree* tree, bool isLeft) {
	if (tree != NULL)
	{
		cout << prefix << "---" << tree->getRoot() << endl;
		treeOutput(prefix + (isLeft ? "    " : "    "), tree->getLeft(), true);
		treeOutput(prefix + (isLeft ? "    " : "    "), tree->getRight(), false);
	}
	
}

void alphaOutput(Tree* tree) {
	if (tree != NULL) {
		alphaOutput(tree->getRight());
		cout << tree->getRoot() << ": " << tree->getcount() << " times" << endl;
		alphaOutput(tree->getLeft());
	}
}