#include "Point.hpp"


Point::Point(void)
{
	_x = 0;
	_y = 0;
}


Point::~Point(void)
{
}

Point& Point::operator ++ ()
{
	_x++;
	_y++;
	return *this;
}

Point Point::operator ++ (int)
{
	return ++(*this);
}

Point& Point::operator -- ()
{
	_x--;
	_y--;
	return *this;
}

Point Point::operator -- (int)
{
	return --(*this);
}

ostream & operator << (ostream &out, const Point &p)
{
	out<<"("<<p._x<<" ,"<<p._y<<")";
	return out;
}

Point::Point(int x, int y)
{
	_x=x;
	_y=y;
}


int Point::GetX(void)
{
	return _x;
}


int Point::GetY(void)
{
	return _y;
}
