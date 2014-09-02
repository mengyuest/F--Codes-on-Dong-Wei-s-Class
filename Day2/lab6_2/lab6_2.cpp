//lab6_1.cpp

#include <iostream>
using namespace std;

void MatrixTranspose(int* MatrixA);
int main()
{
	int *MatrixA = new int[9];
	int row = 0;
	for (row = 0; row < 3; row++)
	{
		cout << "输入整型矩阵第" << row + 1 << "行：\n";
		cin >> MatrixA[row * 3 + 0] >> MatrixA[row * 3 + 1]
				>> MatrixA[row * 3 + 2];
	}
	MatrixTranspose(MatrixA);
	cout << "转置后：\n";
	for (row = 0; row < 3; row++)
	{
		cout << MatrixA[row * 3 + 0] << " " << MatrixA[row * 3 + 1] << " "
				<< MatrixA[row * 3 + 2] << "\n";
	}
	delete MatrixA;
	system("pause");
	return 0;
}

void MatrixTranspose(int* MatrixA)
{
	int *MatrixB = new int[9];
	int i = 0, j = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			MatrixB[j * 3 + i] = MatrixA[i * 3 + j];
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			MatrixA[i * 3 + j] = MatrixB[i * 3 + j];
		}
	}
	delete MatrixB;
}
