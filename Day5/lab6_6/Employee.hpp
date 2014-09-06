#pragma once
#include <iostream>
using namespace std;

class Employee
{
public:
	Employee(void);
	Employee(string name, string address, string city, string postCode);
	~Employee(void);
	void Display(void);
	void ChangeName(string name);
private:
	string m_name;
	string m_address;
	string m_city;
	string m_postCode;
};

