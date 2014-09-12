//Queue.h
#ifndef QUEUE_H
#define QUEUE_H
#include "link.hpp"

//��ģ��Ķ���
template<class T, int SIZE>
class Queue
{
private:
	Linkedlist<T> list;
public:
	Queue();          //���캯������ʼ����ͷָ�롢��βָ�롢Ԫ�ظ���
	void insert(const T &item);	//��Ԫ�����
	T remove();	//Ԫ�س���
	void clear();	//��ն���
	const T &getFront() const;	//���ʶ���Ԫ��
	int getLength() const;	//����г���
	bool isEmpty() const;	//�ж϶��пշ�
	bool isFull() const;	//�ж϶�������
};
//���캯������ʼ����ͷָ�롢��βָ�롢Ԫ�ظ���
template<class T, int SIZE>
Queue<T, SIZE>::Queue()
{
}

template<class T, int SIZE>
void Queue<T, SIZE>::insert(const T& item) //���β����Ԫ��
{
	list.insertRear(item);
}

template<class T, int SIZE>
T Queue<T, SIZE>::remove()
{
	list.reset();
	T temp = list.data();
	list.deleteFront();
	return (temp);
}
template<class T, int SIZE>
const T &Queue<T, SIZE>::getFront() const
{
	return (list.front->data);
}
template<class T, int SIZE>
int Queue<T, SIZE>::getLength() const //���ض���Ԫ�ظ���
{
	return list.getSize();
}
template<class T, int SIZE>
bool Queue<T, SIZE>::isEmpty() const //���Զӿշ�
{
	return list.isEmpty();
}
template<class T, int SIZE>
bool Queue<T, SIZE>::isFull() const 	 //���Զ�����
{
	return list.getSize() == SIZE;
}
template<class T, int SIZE>
void Queue<T, SIZE>::clear() 	 //��ն���
{
	list.clear();
}
#endif  //QUEUE_H
