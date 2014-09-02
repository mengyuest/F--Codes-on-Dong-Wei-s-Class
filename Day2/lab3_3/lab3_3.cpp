//lab3_3.cpp

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x, y;
	cout << "输入两个整数：";
	cin >> x >> y;
	cout << x << "的" << y << "次方是：" << pow(x, y) << endl;
	system("pause");
	return 0;
}
