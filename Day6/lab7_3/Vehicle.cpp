#include "Vehicle.hpp"
#include <iostream>
using namespace std;

Vehicle::Vehicle(void)
{
	maxSpeed = 0;
	weight = 0;
}


Vehicle::~Vehicle(void)
{
}


void Vehicle::SetMaxSpeed(int s)
{
	maxSpeed = s;
}


void Vehicle::SetWeight(int w)
{
	weight = w;
}


int Vehicle::GetMaxSpeed(void)
{
	return maxSpeed;
}


int Vehicle::GetWeight(void)
{
	return weight;
}


void Vehicle::Run(void)
{
	cout<<"³µÁ¾Æô¶¯"<<endl;

}


void Vehicle::Stop(void)
{
	cout<<"³µÁ¾Í£Ö¹"<<endl;
}


Bicycle::Bicycle(void)
{
	height = 0;
}


Bicycle::~Bicycle(void)
{
}


MotorCar::MotorCar(void)
{
	seatNum = 0;
}


MotorCar::~MotorCar(void)
{
}


void Bicycle::SetHeight(int h)
{
	height = h;
}


int Bicycle::GetHeight(void)
{
	return height;
}


void MotorCar::SetSeatNum(int n)
{
	seatNum = n;
}


int MotorCar::GetSeatNum(void)
{
	return seatNum;
}


MotorCycle::MotorCycle(void)
{
}


MotorCycle::~MotorCycle(void)
{
}
