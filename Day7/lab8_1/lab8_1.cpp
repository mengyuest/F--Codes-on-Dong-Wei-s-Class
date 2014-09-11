#include "Point.hpp"
#include <iostream>

using namespace std;

int main()
{
	Point point(10,20);
	cout<<point<<endl;
	cout<<"point ++"<<endl;
	point ++;
	cout<<point<<endl;
	cout<<"point --"<<endl;
	point --;
	cout<<point<<endl;
}