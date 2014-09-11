#include "Vehicle.hpp"
#include <iostream>

using namespace std;

int main()
{
	Vehicle vehicle;
	MotorCar motorCar;
	Bicycle bicycle;
	MotorCycle motorCycle;

	Vehicle *p_vehicle = &vehicle;
	Vehicle *p_motorCar = &motorCar;
	Vehicle *p_bicycle = &bicycle;
	Vehicle *p_motorCycle = &motorCycle;

	cout<<"�������"<<endl;
	vehicle.Run();
	motorCar.Run();
	bicycle.Run();
	motorCycle.Run();

	cout<<"ָ�����"<<endl;
	p_vehicle->Run();
	p_bicycle->Run();
	p_motorCar->Run();
	p_motorCycle->Run();

	cout<<"�������"<<endl;
	vehicle.Stop();
	motorCar.Stop();
	bicycle.Stop();
	motorCycle.Stop();

	cout<<"ָ�����"<<endl;
	p_vehicle->Stop();
	p_bicycle->Stop();
	p_motorCar->Stop();
	p_motorCycle->Stop();
}