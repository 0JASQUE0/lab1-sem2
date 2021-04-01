#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Прога 4 сем лабы\лаба 1\лаба 1\RBTree.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(findTest1)
		{
			RBTree<int, int> tree;
			tree.insert(1, 11);
			tree.insert(2, 22);
			Assert::IsTrue(tree.find(1)->value == 11);
			Assert::IsTrue(tree.find(2)->value == 22);
		}

		TEST_METHOD(findTest2)
		{
			RBTree<int, int> tree;
			try
			{
				tree.insert(1, 11);
				tree.find(2);
			}
			catch (const char* exception)
			{
				Assert::AreEqual(exception, "There is no such element");
			}
		}

		TEST_METHOD(insertTest)
		{
			RBTree<int, int> tree;
			tree.insert(1, 11);
			tree.insert(2, 22);
			tree.insert(3, 33);
			Assert::IsTrue(tree.find(2)->leftChild->value == 11);
			Assert::IsTrue(tree.find(2)->rightChild->value == 33);
		}

		TEST_METHOD(removeTest)
		{
			RBTree<int, int> tree;
			try
			{
				tree.insert(1, 11);
				tree.remove(1);
				tree.find(1);
			}
			catch (const char* exception)
			{
				Assert::AreEqual(exception, "There is no such element");
			}
		}

		TEST_METHOD(get_keysTest1)
		{
			RBTree<int, int> tree;
			tree.insert(1, 11);
			tree.insert(2, 22);
			list<int> test;
			test = tree.getKeys();
			Assert::IsTrue(test.front() == 1);
			Assert::IsTrue(test.back() == 2);
		}

		TEST_METHOD(get_keysTest2)
		{
			RBTree<int, int> tree;
			try
			{
				list<int> test;
				test = tree.getKeys();
			}
			catch (const char* exception)
			{
				Assert::AreEqual(exception, "There is no element");
			}
		}

		TEST_METHOD(get_valuesTest1)
		{
			RBTree<int, int> tree;
			tree.insert(1, 11);
			tree.insert(2, 22);
			list<int> test;
			test = tree.getValues();
			Assert::IsTrue(test.front() == 11);
			Assert::IsTrue(test.back() == 22);
		}

		TEST_METHOD(get_valuesTest2)
		{
			RBTree<int, int> tree;
			try
			{
				list<int> test;
				test = tree.getValues();
			}
			catch (const char* exception)
			{
				Assert::AreEqual(exception, "There is no element");
			}
		}
	};
}
