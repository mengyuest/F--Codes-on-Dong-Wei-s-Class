#include "link.hpp"
#include <iostream>

using namespace std;

int main()
{
	Linkedlist<int> A, B;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		cout << "输入链表A的第" << i + 1 << "个数" << endl;
		int data;
		cin >> data;
		A.insertRear(data);
	}
	cout << "A:" << endl;
	A.reset();
	while (!A.endOfList())
	{
		cout << A.data() << " ";
		A.next();
	}
	cout << endl;

	for (i = 0; i < 5; i++)
	{
		cout << "输入链表B的第" << i + 1 << "个数" << endl;
		int data;
		cin >> data;
		B.insertRear(data);
	}

	cout << "B:" << endl;
	B.reset();
	while (!B.endOfList())
	{
		cout << B.data() << " ";
		B.next();
	}
	cout << endl;

	B.reset();
	do
	{
		A.insertRear(B.data());
		B.next();
	} while (!B.endOfList());

	cout << "A+B:" << endl;
	A.reset();
	while (!A.endOfList())
	{
		cout << A.data() << " ";
		A.next();
	}
	cout << endl;
}

