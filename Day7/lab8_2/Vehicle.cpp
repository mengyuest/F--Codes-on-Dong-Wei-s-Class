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
	cout<<"Vehicle::Run"<<endl;

}


void Vehicle::Stop(void)
{
	cout<<"Vehicle::Stop"<<endl;
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


void Bicycle::Run(void)
{
	cout<<"Bicycle::Run"<<endl;
}


void Bicycle::Stop(void)
{
	cout<<"Bicycle::Stop"<<endl;
}


void MotorCar::Run(void)
{
	cout<<"MotorCar::Run"<<endl;
}


void MotorCar::Stop(void)
{
	cout<<"MotorCar::Stop"<<endl;
}


void MotorCycle::Run(void)
{
	cout<<"MotorCycle::Run"<<endl;
}


void MotorCycle::Stop(void)
{
	cout<<"MotorCycle::Stop"<<endl;
}
