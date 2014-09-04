//lab4_2.cpp

#include <iostream>
using namespace std;

enum CPU_Rank
{
	P1=1,
	P2,P3,P4,P5,P6,P7
};
class CPU
{
private:
	CPU_Rank rank;
	int frequency;
	float voltage;
public:
	CPU(CPU_Rank r=P4,int f=2,float v=1.8):rank(r),frequency(f),voltage(v)
	{
		cout<<"构造了一个CPU！"<<endl;
	}
	~CPU()
	{
		cout<<"析构了一个CPU！"<<endl;
	}
	CPU_Rank GetRank() const{return rank;}
	int GetFrequency() const {return frequency;}
	float GetVoltage() const {return voltage;}

	void SetRank(CPU_Rank r){rank=r;}
	void SetFrequency(int f){frequency =f;}
	void SetVoltage(float v){voltage =v;}

	void Run(){cout<<"CPU开始运行！"<<endl;}
	void Stop(){cout<<"CPU停止运行！"<<endl;}
};

class RAM
{
private:
	int volume;
	int frequency;
	float voltage;
public:
	RAM(int vol=4,int f=2,float v=1.8):volume(vol),frequency(f),voltage(v)
	{
		cout<<"构造了一个RAM！"<<endl;
	}
	~RAM()
	{
		cout<<"析构了一个RAM！"<<endl;
	}
	int GetVolume() const {return volume;}
	int GetFrequency() const {return frequency;}
	float GetVoltage() const {return voltage;}
	
	void SetVolume(int v){volume=v;}
	void SetFrequency(int f){frequency=f;}
	void SetVoltage(float v){voltage=v;}

	void Run(){cout<<"RAM开始运行！"<<endl;}
	void Stop(){cout<<"RAM停止运行！"<<endl;}

};

class CDROM
{
private:
	int speed;
public:
	CDROM(int s=64):speed(s)
	{
		cout<<"构造了一个CDROM！"<<endl;
	}
	~CDROM()
	{
		cout<<"析构了一个CDROM！"<<endl;
	}

	int GetSpeed() const {return speed;}
	void SetSpeed(int s) {speed=s;}

	void Run(){cout<<"CDROM开始运行！"<<endl;}
	void Stop(){cout<<"CDROM停止运行！"<<endl;}
};

class Computer
{
private:
	CPU cpu;
	RAM ram;
	CDROM cdrom;
public:
	void Run()
	{
		cpu.Run();
		ram.Run();
		cdrom.Run();
		cout<<"Computer开始运行！"<<endl;
	}
	void Stop()
	{
		cdrom.Stop();
		ram.Stop();
		cpu.Stop();
		cout<<"Computer停止运行！"<<endl;
	}
};

int main()
{
	Computer computer;
	computer.Run();
	computer.Stop();

}