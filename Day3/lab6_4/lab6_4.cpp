//lab6_4.cpp

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str_A, str_B;
	cout << "�����һ���ַ�����" << endl;
	cin >> str_A;
	cout << "����ڶ����ַ�����" << endl;
	cin >> str_B;
	str_A += str_B;
	cout << "�ϲ���" << endl;
	cout << str_A << endl;
	system("pause");
}
