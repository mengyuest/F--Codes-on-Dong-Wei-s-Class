#include "Vehicle.hpp"
#include <iostream>
using namespace std;

int main()
{
	MotorCycle motorCycle;
	motorCycle.SetHeight(5);
	motorCycle.SetMaxSpeed(40);
	motorCycle.SetSeatNum(3);
	motorCycle.SetWeight(20);
	motorCycle.Run();
	cout<<"motorCycle MaxSpeed="<<motorCycle.GetMaxSpeed()<<endl;
	motorCycle.Stop();
	return 0;
}