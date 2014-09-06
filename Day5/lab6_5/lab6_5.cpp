#include "Employee.hpp"
using namespace std;

int main()
{
	Employee Zhang("Zhang San","Nan Jing Rd.","Beijing","100010");
	Employee Li("Li Si","He Ping Rd.","Shanghai","100021");
	Zhang.Display();
	Li.Display();
	Li.ChangeName("Li Wu");
	Li.Display();
}