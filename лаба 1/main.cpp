#include <iostream>
#include "RBTree.h"
#include <list>
#include <iterator>

using namespace std;

int main()
{
	RBTree<int, int> tree;

	tree.insert(1, 11);
	tree.insert(2, 22);
	tree.insert(3, 33);
	tree.insert(4, 44);
	tree.print();

	tree.remove(2);
	cout << endl;
	tree.print();

	cout << endl << tree.find(3)->value << endl;

	list<int> test;
	list<int>::iterator it;
	test = tree.getKeys();

	for (it = test.begin(); it != test.end(); it++) {
		cout << *it << " ";
	}

	test = tree.getValues();
	cout << endl;
	for (it = test.begin(); it != test.end(); it++) {
		cout << *it << " ";
	}


	return 0;
}