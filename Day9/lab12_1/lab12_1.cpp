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
	cout<<"��fn1()�д����쳣"<<endl;
	throw(Exception("fn1()�з����쳣"));
}