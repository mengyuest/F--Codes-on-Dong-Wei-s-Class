#include "node.hpp"
#include <iostream>
using namespace std;

int main()
{
	Node<int>* head = new Node<int>;
	Node<int>* p = head;
	Node<int>* q = head;

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		q = new Node<int>;
		cout << "输入第" << i + 1 << "节点数据" << endl;
		cin >> q->data;
		p->insertAfter(q);
		p = q;
	}

	p = head->nextNode();
	do
	{
		cout << p->data << "->";
		p = p->nextNode();
	} while (p);
	cout << "END" << endl;

	cout << "输入待查找的整数：" << endl;
	int num;
	cin >> num;
	p = head;
	do
	{
		q = p->nextNode();
		if (q->data == num)
		{
			p->deleteAfter();
			delete q;
		}
		else
		{
			p = p->nextNode();
		}
	} while (p->nextNode());

	p = head->nextNode();
	do
	{
		cout << p->data << "->";
		p = p->nextNode();
	} while (p);
	cout << "END" << endl;

	p = head;
	do
	{
		q = p->nextNode();
		delete p;
		p = q;
	} while (p);
	cout << "END" << endl;
}
