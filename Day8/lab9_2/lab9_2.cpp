#include "link.hpp"
#include <iostream>

using namespace std;

int main()
{
	Linkedlist<int> A, B;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		cout << "��������A�ĵ�" << i + 1 << "����" << endl;
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
		cout << "��������B�ĵ�" << i + 1 << "����" << endl;
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

