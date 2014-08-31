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
	cout << "输入年：";
	cin >> time.year;
	cout << "输入月：";
	cin >> time.month;
	cout << "输入日：";
	cin >> time.day;
	cout << "输入小时：";
	cin >> time.hour;
	cout << "输入分钟：";
	cin >> time.minute;
	cout << "输入秒：";
	cin >> time.second;

	cout << "输入的时间是" << time.year << "年" << time.month << "月" << time.day << "日"
			<< time.hour << "时" << time.minute << "分" << time.second << "秒"
			<< endl;
	return 0;
}
