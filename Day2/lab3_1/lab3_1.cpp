//lab3_1.cpp

#include <iostream>
using namespace std;

float Convert(float TempFer);

int main()
{
	float TempFer, TempCelsius;
	cout << "���뻪���¶ȣ�";
	cin >> TempFer;
	TempCelsius = Convert(TempFer);
	cout << "��Ӧ�������¶��ǣ�" << TempCelsius << endl;
	system("pause");
	return 0;
}

float Convert(float TempFer)
{
	float TempCelsius;
	TempCelsius = (TempFer - 32) * 5 / 9;
	return TempCelsius;
}
