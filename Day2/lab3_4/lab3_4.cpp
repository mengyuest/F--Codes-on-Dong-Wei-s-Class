//lab3_4.cpp

#include <iostream>
using namespace std;

int fib(int n);
int main()
{
	int n, answer;
	cout << "Enter number:";
	cin >> n;
	cout << "\n\n";
	answer = fib(n);
	cout << answer << " is the " << n << " th Fibonacci number\n";
	system("pause");
	return 0;
}

int fib(int n)
{
	cout << "Processing fib{" << n << "}...";
	if (n < 3)
	{
		cout << "Return 1!\n";
		return (1);
	}
	else
	{
		cout << "Call fib{" << n - 2 << "} and fib{" << n - 1 << "}.\n";
		return (fib(n - 1) + fib(n - 2));
	}
}
