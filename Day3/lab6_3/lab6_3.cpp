//lab6_3.cpp

#include <iostream>
using namespace std;

int main()
{
	char strA[50], strB[50];
	char strOut[100] = { 0 };
	int i = 0, j = 0;

	cout << "输入第一个字符串：" << endl;
	cin >> strA;
	cout << "输入第二个字符串：" << endl;
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
	cout << "合并后：" << endl;
	cout << strOut << endl;
	system("pause");
}
