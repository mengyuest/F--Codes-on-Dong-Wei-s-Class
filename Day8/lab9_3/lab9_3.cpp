#include "queue.hpp"
#include <iostream>

using namespace std;

int main()
{
	Queue<int, 10> queue;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		cout << "输入进入队列的第" << i + 1 << "个数" << endl;
		int data;
		cin >> data;
		queue.insert(data);
	}
	for (i = 0; i < 5; i++)
	{
		cout << "出队列的第" << i + 1 << "个数" << endl;
		cout << queue.remove() << endl;
	}
}
