//lab2_4.cpp

#include <iostream>
using namespace std;

typedef struct time
{
	short year;
	short month;
	short day;
	short hour;
	short minute;
	short second;
} Time;

int main()
{
	Time time;
	cout << "�����꣺";
	cin >> time.year;
	cout << "�����£�";
	cin >> time.month;
	cout << "�����գ�";
	cin >> time.day;
	cout << "����Сʱ��";
	cin >> time.hour;
	cout << "������ӣ�";
	cin >> time.minute;
	cout << "�����룺";
	cin >> time.second;

	cout << "�����ʱ����" << time.year << "��" << time.month << "��" << time.day << "��"
			<< time.hour << "ʱ" << time.minute << "��" << time.second << "��"
			<< endl;
	return 0;
}
