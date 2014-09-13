#include "Exception.h"


Exception::Exception(string reason):reason(reason)
{
}


Exception::~Exception(void)
{
}


void Exception::Reason(void)
{
	cout<<"reason:"<<reason<<endl;
}
