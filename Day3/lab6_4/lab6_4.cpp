//lab6_4.cpp

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str_A, str_B;
	cout << "输入第一个字符串：" << endl;
	cin >> str_A;
	cout << "输入第二个字符串：" << endl;
	cin >> str_B;
	str_A += str_B;
	cout << "合并后：" << endl;
	cout << str_A << endl;
	system("pause");
}
