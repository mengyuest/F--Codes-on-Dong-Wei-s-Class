#ifndef LINK_H
#define LINK_H
#include "Node.hpp"

template<class T>
class Linkedlist
{
private:
	Node<T> *front, *rear;
	Node<T> *prevPtr, *currPtr;
	int size;
	int position;

	Node<T> *newNode(const T &item, Node<T> *ptrNext = NULL);
	void freeNode(Node<T> *p);
	void copy(const Linkedlist<T> &L);
public:
	Linkedlist();
	Linkedlist(const Linkedlist<T> &L);
	~Linkedlist();
	Linkedlist<T> & operator =(const Linkedlist<T> &L);
	int getSize() const;
	bool isEmpty() const;
	void reset(int pos = 0);
	void next();
	bool endOfList() const;
	int currentPosition(void) const;
	void insertFront(const T &item);
	void insertRear(const T &item);
	void insertAt(const T &item);
	void insertAfter(const T &item);
	T deleteFront();
	void deleteCurrent();
	T& data();
	const T& data() const;
	void clear();
};

template<class T>
Node<T>*Linkedlist<T>::newNode(const T&item, Node<T>*ptrNext)
{

	Node<T>*tempPtr = new Node<T>(item, ptrNext);
	return tempPtr;
}
template<class T>
void Linkedlist<T>::freeNode(Node<T>*p)
{
	delete p;
}
template<class T>
Linkedlist<T>::Linkedlist()
{
	size = 0;
	front = rear = new Node<T>(0);
	currPtr = prevPtr = front;
}
template<class T>
int Linkedlist<T>::currentPosition(void) const
{
	Node<T>*tempPtr = front->nextNode();
	position = 0;
	while (tempPtr != currPtr)
	{
		tempPtr = tempPtr->nextNode();
		position++;
	}
	return position;
}

template<class T>
int Linkedlist<T>::getSize() const
{
	return size;
}

template<class T>
T&Linkedlist<T>::data()
{
	return currPtr->data;
}
template<class T>
const T&Linkedlist<T>::data() const
{
	return currPtr->data;
}
template<class T>
void Linkedlist<T>::next()
{
	prevPtr = currPtr;
	currPtr = currPtr->nextNode();
}
template<class T>
bool Linkedlist<T>::endOfList() const
{
	if (currPtr == 0)
		return true;
	else
		return false;
}
template<class T>
bool Linkedlist<T>::isEmpty() const
{
	if (front == rear)
		return true;
	else
		return false;
}
template<class T>
void Linkedlist<T>::reset(int pos)
{
	prevPtr = front;
	currPtr = front->nextNode();
	position = pos;
	for (int i = 0; i < position; i++)
	{
		prevPtr = currPtr;
		currPtr = currPtr->nextNode();
	}
}
template<class T>
void Linkedlist<T>::insertFront(const T&item)
{
	prevPtr = currPtr;
	currPtr = nextNode(item, front->nextNode());
	front->insertAfter(currPtr);
	if (rear == front)
	{
		rear = currPtr;
	}
	size++;
}
template<class T>
void Linkedlist<T>::insertRear(const T&item)
{
	prevPtr = currPtr;
	currPtr = newNode(item, rear->nextNode());
	rear->insertAfter(currPtr);
	rear = currPtr;
	size++;
}
template<class T>
void Linkedlist<T>::insertAfter(const T&item)
{
	prevPtr = currPtr;
	Node<T>*tempPtr = nextNode(item, currPtr->nextNode());
	currPtr->insertAfter(tempPtr);
	if (currPtr == rear)
	{
		rear = tempPtr;
	}
	currPtr = tempPtr;
	size++;
}
template<class T>
void Linkedlist<T>::insertAt(const T&item)
{
	currPtr = nextNode(item, prevPtr->nextNode());
	prevPtr->next = currPtr;
	size++;
}
template<class T>
T Linkedlist<T>::deleteFront()
{
	currPtr = front->nextNode();
	delete front;
	front = currPtr;
	size--;
	return front->data;
}
template<class T>
void Linkedlist<T>::deleteCurrent()
{
	Node<T>*tempPtr = currPtr;
	prevPtr->deleteAfter();
	delete currPtr;
	currPtr = prevPtr;
	size--;
}
template<class T>
void Linkedlist<T>::clear()
{
	Node<T>*tempPtr = front->nextNode();
	while (tempPtr != 0)
	{
		Node<T>*tempQ = tempPtr;
		tempPtr = tempPtr->nextNode();
		delete tempQ;
		size--;
	}
	rear = front;
	currPtr = prevPtr = front;
}
template<class T>
Linkedlist<T>::~Linkedlist()
{
	clear();
	delete front;
}
template<class T>
void Linkedlist<T>::copy(const Linkedlist<T>&L)
{
	L.reset();
	for (int i = 0; i < L.size; i++)
	{
		insertRear(L.data());
		L.next();
	}

}
template<class T>
Linkedlist<T>&Linkedlist<T>::operator =(const Linkedlist<T>&L)
{
	clear();
	front->next = NULL;
	copy(L);
	return *this;
}
template<class T>
Linkedlist<T>::Linkedlist(const Linkedlist<T>&L)
{
	size = 0;
	front = rear = new Node<T>(0);
	currPtr = prevPtr = front;
	copy(L);
}
#endif  
