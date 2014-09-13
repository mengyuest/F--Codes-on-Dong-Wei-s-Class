#include "Exception.h"

void fn1();

int main()
{
	try
	{
		fn1();
	}
	catch(Exception& e)
	{
		e.Reason();
	}
}

void fn1(void)
{
	cout<<"在fn1()中触发异常"<<endl;
	throw(Exception("fn1()中发生异常"));
}