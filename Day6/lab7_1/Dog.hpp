#pragma once
#include "animal.hpp"
class Dog :
	public Animal
{
public:
	Dog(void);
	~Dog(void);
	void SetAge(int Age);
};

