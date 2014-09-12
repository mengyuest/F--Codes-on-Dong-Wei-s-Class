//Array.hpp

#ifndef ARRAY_H
#define ARRAY_H

template<class T>
class Array
{
private:
	T* list;
	int size;
public:
	Array(int sz = 50);
	Array(const Array<T> &a);
	~Array();
	Array<T>& operator=(const Array<T> &rhs);
	T& operator[](int i);
	const T& operator[](int i) const;
	operator T*();
	operator const T*() const;
	int getSize() const;
	void resize(int sz);
	void insertionSort();
	void swap(T& x, T& y);
	void bubbleSort();
};

template<class T>
Array<T>::Array(int sz)
{
	size = sz;
	list = new T[size];
}

template<class T>
Array<T>::~Array()
{
	delete[] list;
}

template<class T>
Array<T>::Array(const Array<T> &a)
{
	size = a.size;
	list = new T[size];
	for (int i = 0; i < size; i++)
	{
		list[i] = a.list[i];
	}
}

template<class T>
Array<T> &Array<T>::operator=(const Array<T> &rhs)
{
	if (&rhs != this)
	{
		delete[] list;
		size = rhs.size;
		list = new T[size];
	}
	for (int i = 0; i < size; i++)
	{
		list[i] = rhs.list[i];
	}
	return *this;
}

template<class T>
T& Array<T>::operator[](int n)
{
	return list[n];
}

template<class T>
const T& Array<T>::operator[](int n) const
{
	return list[n];
}

template<class T>
Array<T>::operator T*()
{
	return list;
}

template<class T>
Array<T>::operator const T*() const
{
	return list;
}

template<class T>
int Array<T>::getSize() const
{
	return size;
}

template<class T>
void Array<T>::resize(int sz)
{
	if (sz == size)
	{
		return;
	}
	T* newList = new T[sz];
	int n = (sz < size) ? sz : size;
	for (int i = 0; i < n; i++)
	{
		newList[i] = list[i];
	}
	delete[] list;
	list = newList;
	size = sz;
}

template<class T>
void Array<T>::insertionSort()
{
	int i, j;
	T temp;

	for (int i = 1; i < size; i++)
	{
		int j = i;
		T temp = list[i];
		while (j > 0 && temp < list[j - 1])
		{
			list[j] = list[j - 1];
			j--;
		}
		list[j] = temp;
	}
}

template<class T>
void Array<T>::swap(T& x, T& y)
{
	T temp = x;
	x = y;
	y = temp;
}

template<class T>
void Array<T>::bubbleSort()
{
	int i = size - 1;
	while (i > 0)
	{
		int lastExchangeIndex = 0;
		for (int j = 0; j < i; j++)
		{
			if (list[j + 1] < list[j])
			{
				swap(list[j], list[j + 1]);
				lastExchangeIndex = j;
			}
		}
		i = lastExchangeIndex;
	}
}

#endif
