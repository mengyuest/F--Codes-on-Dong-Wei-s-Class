#include "array.hpp"
#include <iostream>
using namespace std;

int main()
{
	Array<int> arrayA(10);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		cout << "���������" << i + 1 << "������" << endl;
		cin >> arrayA[i];
	}
	Array<int> arrayB = arrayA;
	arrayA.insertionSort();
	arrayB.bubbleSort();
	cout << "insertionSort" << endl;
	for (i = 0; i < 10; i++)
	{
		cout << arrayA[i] << " ";
	}
	cout << endl << "bubbleSort" << endl;
	for (i = 0; i < 10; i++)
	{
		cout << arrayB[i] << " ";
	}
	cout << endl;
}
