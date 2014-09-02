//lab3_2.cpp

#include <iostream>
using namespace std;

int Maxl(int a, int b);
int Maxl(int a, int b, int c);
double Maxl(double a, double b);
double Maxl(double a, double b, double c);

int main()
{
	int ia, ib, ic;
	double da, db, dc;
	cout << "输入两个整数：";
	cin >> ia >> ib;
	cout << "较大的是" << Maxl(ia, ib) << endl;
	cout << "输入三个整数：";
	cin >> ia >> ib >> ic;
	cout << "较大的是" << Maxl(ia, ib, ic) << endl;
	cout << "输入两个双精度浮点数：";
	cin >> da >> db;
	cout << "较大的是" << Maxl(da, db) << endl;
	cout << "输入三个双精度浮点数：";
	cin >> da >> db >> dc;
	cout << "较大的是" << Maxl(da, db, dc) << endl;
	system("pause");
	return 0;
}

int Maxl(int a, int b)
{
	if (a > b)
	{
		return (a);
	}
	else
	{
		return (b);
	}
}

int Maxl(int a, int b, int c)
{
	if ((a >= b) && (a >= c))
	{
		return (a);
	}
	else if ((b >= a) && (b >= c))
	{
		return (b);
	}
	else
	{
		return (c);
	}
}

double Maxl(double a, double b)
{
	if (a > b)
	{
		return (a);
	}
	else
	{
		return (b);
	}
}

double Maxl(double a, double b, double c)
{
	if ((a >= b) && (a >= c))
	{
		return (a);
	}
	else if ((b >= a) && (b >= c))
	{
		return (b);
	}
	else
	{
		return (c);
	}
}

