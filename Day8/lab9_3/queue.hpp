//Queue.h
#ifndef QUEUE_H
#define QUEUE_H
#include "link.hpp"

//类模板的定义
template<class T, int SIZE>
class Queue
{
private:
	Linkedlist<T> list;
public:
	Queue();          //构造函数，初始化队头指针、队尾指针、元素个数
	void insert(const T &item);	//新元素入队
	T remove();	//元素出队
	void clear();	//清空队列
	const T &getFront() const;	//访问队首元素
	int getLength() const;	//求队列长度
	bool isEmpty() const;	//判断队列空否
	bool isFull() const;	//判断队列满否
};
//构造函数，初始化队头指针、队尾指针、元素个数
template<class T, int SIZE>
Queue<T, SIZE>::Queue()
{
}

template<class T, int SIZE>
void Queue<T, SIZE>::insert(const T& item) //向队尾插入元素
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
int Queue<T, SIZE>::getLength() const //返回队列元素个数
{
	return list.getSize();
}
template<class T, int SIZE>
bool Queue<T, SIZE>::isEmpty() const //测试队空否
{
	return list.isEmpty();
}
template<class T, int SIZE>
bool Queue<T, SIZE>::isFull() const 	 //测试队满否
{
	return list.getSize() == SIZE;
}
template<class T, int SIZE>
void Queue<T, SIZE>::clear() 	 //清空队列
{
	list.clear();
}
#endif  //QUEUE_H
