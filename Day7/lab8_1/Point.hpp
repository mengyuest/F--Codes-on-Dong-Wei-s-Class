#pragma once
#include <iostream>
using namespace std;

class Point
{
public:
	Point(void);
	~Point(void);
	Point& operator ++ ();
	Point operator ++ (int);
	Point& operator -- ();
	Point operator -- (int);
	friend ostream & operator << (ostream &out, const Point &p);
	Point(int x, int y);
	int GetX(void);
	int GetY(void);

private:
	int _x;
	int _y;

};

