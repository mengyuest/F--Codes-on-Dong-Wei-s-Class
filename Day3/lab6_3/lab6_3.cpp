//lab6_3.cpp

#include <iostream>
using namespace std;

int main()
{
	char strA[50], strB[50];
	char strOut[100] = { 0 };
	int i = 0, j = 0;

	cout << "�����һ���ַ�����" << endl;
	cin >> strA;
	cout << "����ڶ����ַ�����" << endl;
	cin >> strB;

	while (strA[i])
	{
		strOut[i] = strA[i];
		i++;
	}
	while (strB[j])
	{
		strOut[i] = strB[j];
		i++;
		j++;
	}
	strB[i] = 0;
	cout << "�ϲ���" << endl;
	cout << strOut << endl;
	system("pause");
}
