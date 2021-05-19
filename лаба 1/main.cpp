#include <iostream>
#include "RBTree.h"
#include "list.h"
#include "queue.h"
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

	LinkedList<int> test;
	test = tree.getKeys();

	test.print_to_console();

	test = tree.getValues();
	cout << endl;

	test.print_to_console();

	return 0;
}