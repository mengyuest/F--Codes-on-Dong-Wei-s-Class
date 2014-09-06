#include "Employee.hpp"
#include <string>

using namespace std;

Employee::Employee(void)
{
}


Employee::~Employee(void)
{
}


void Employee::Display(void)
{
	cout<<"Name="<<m_name<<endl;
	cout<<"City="<<m_city<<endl;
	cout<<"Address="<<m_address<<endl;
	cout<<"Postcode="<<m_postCode<<endl;
}


void Employee::ChangeName(string name)
{
	m_name=name;
}



Employee::Employee(string name, string address, string city, string postCode)
{
	m_name=name;
	m_address=address;
	m_city=city;
	m_postCode=postCode;
}
