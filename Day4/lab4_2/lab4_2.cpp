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
		cout<<"������һ��CPU��"<<endl;
	}
	~CPU()
	{
		cout<<"������һ��CPU��"<<endl;
	}
	CPU_Rank GetRank() const{return rank;}
	int GetFrequency() const {return frequency;}
	float GetVoltage() const {return voltage;}

	void SetRank(CPU_Rank r){rank=r;}
	void SetFrequency(int f){frequency =f;}
	void SetVoltage(float v){voltage =v;}

	void Run(){cout<<"CPU��ʼ���У�"<<endl;}
	void Stop(){cout<<"CPUֹͣ���У�"<<endl;}
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
		cout<<"������һ��RAM��"<<endl;
	}
	~RAM()
	{
		cout<<"������һ��RAM��"<<endl;
	}
	int GetVolume() const {return volume;}
	int GetFrequency() const {return frequency;}
	float GetVoltage() const {return voltage;}
	
	void SetVolume(int v){volume=v;}
	void SetFrequency(int f){frequency=f;}
	void SetVoltage(float v){voltage=v;}

	void Run(){cout<<"RAM��ʼ���У�"<<endl;}
	void Stop(){cout<<"RAMֹͣ���У�"<<endl;}

};

class CDROM
{
private:
	int speed;
public:
	CDROM(int s=64):speed(s)
	{
		cout<<"������һ��CDROM��"<<endl;
	}
	~CDROM()
	{
		cout<<"������һ��CDROM��"<<endl;
	}

	int GetSpeed() const {return speed;}
	void SetSpeed(int s) {speed=s;}

	void Run(){cout<<"CDROM��ʼ���У�"<<endl;}
	void Stop(){cout<<"CDROMֹͣ���У�"<<endl;}
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
		cout<<"Computer��ʼ���У�"<<endl;
	}
	void Stop()
	{
		cdrom.Stop();
		ram.Stop();
		cpu.Stop();
		cout<<"Computerֹͣ���У�"<<endl;
	}
};

int main()
{
	Computer computer;
	computer.Run();
	computer.Stop();

}