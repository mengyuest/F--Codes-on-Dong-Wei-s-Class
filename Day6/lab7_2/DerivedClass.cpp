#include "DerivedClass.hpp"
#include <iostream>
using namespace std;

DerivedClass::DerivedClass(void)
{
	cout<<"构造了一个DerivedClass"<<endl;
}


DerivedClass::~DerivedClass(void)
{
	cout<<"析构了一个DerivedClass"<<endl;
}
