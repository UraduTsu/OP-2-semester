#include "Tree.h"

Tree::Tree(string value_of_word) :left(NULL), right(NULL), value(value_of_word), count(1) {};

void Tree::insertLeft(string word) {
	if (left == NULL)
		left = new Tree(word);
	else {
		int compare = strcmp(left->getRoot().c_str(), word.c_str());
		if (compare == 0)
			left->countplus();
		if (compare > 0)
			left->insertRight(word);
		if (compare < 0)
			left->insertLeft(word);
	}
}

void Tree::insertRight(string word) {
	if (right == NULL)
		right = new Tree(word);
	else {
		int compare = strcmp(right->getRoot().c_str(), word.c_str());
		if (compare == 0)
			right->countplus();
		if (compare > 0)
			right->insertRight(word);
		if (compare < 0)
			right->insertLeft(word);
	}
}