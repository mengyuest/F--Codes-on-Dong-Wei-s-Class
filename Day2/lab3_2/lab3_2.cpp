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
	cout << "��������������";
	cin >> ia >> ib;
	cout << "�ϴ����" << Maxl(ia, ib) << endl;
	cout << "��������������";
	cin >> ia >> ib >> ic;
	cout << "�ϴ����" << Maxl(ia, ib, ic) << endl;
	cout << "��������˫���ȸ�������";
	cin >> da >> db;
	cout << "�ϴ����" << Maxl(da, db) << endl;
	cout << "��������˫���ȸ�������";
	cin >> da >> db >> dc;
	cout << "�ϴ����" << Maxl(da, db, dc) << endl;
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

