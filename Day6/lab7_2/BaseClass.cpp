#include "BaseClass.hpp"
#include <iostream>
using namespace std;


BaseClass::BaseClass(void)
{
	cout<<"构造了一个BaseClass"<<endl;
	Number = 0;
}


BaseClass::~BaseClass(void)
{
	cout<<"析构了一个BaseClass"<<endl;
}
