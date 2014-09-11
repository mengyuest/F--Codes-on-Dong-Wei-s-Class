#pragma once
class Vehicle
{
public:
	Vehicle(void);
	~Vehicle(void);
private:
	int maxSpeed;
public:
	int weight;
	void SetMaxSpeed(int s);
	void SetWeight(int w);
	int GetMaxSpeed(void);
	int GetWeight(void);
	virtual void Run(void);
	virtual void Stop(void);
};

class Bicycle :
	virtual public Vehicle
{
public:
	Bicycle(void);
	~Bicycle(void);
private:
	int height;
public:
	void SetHeight(int h);
	int GetHeight(void);
	void Run(void);
	void Stop(void);
};

class MotorCar :
	virtual public Vehicle
{
public:
	MotorCar(void);
	~MotorCar(void);
private:
	int seatNum;
public:
	void SetSeatNum(int n);
	int GetSeatNum(void);
	void Run(void);
	void Stop(void);
};

class MotorCycle :
	public Bicycle, public MotorCar
{
public:
	MotorCycle(void);
	~MotorCycle(void);
	void Run(void);
	void Stop(void);
};

