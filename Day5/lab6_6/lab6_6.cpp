#include "Employee.hpp"
using namespace std;

int main()
{
	Employee emp[5]={Employee("Zhang San","Nan Jing Rd.","Beijing","100010"),
		Employee("Li Si","He Ping Rd.","Shanghai","100021"),
		Employee("Wang Wu","Jie Fang Rd.","Wuhan","100054"),
		Employee("Zhao Liu","Ren Ming Rd.","Chongqing","210000"),
		Employee("Sun Qi","Yong Jiu Rd.","Dongguan","214000")};

	for(int i=0;i<5;i++)
	{
		emp[i].Display();
	}

}
