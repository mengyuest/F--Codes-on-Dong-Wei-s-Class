//lab6_1.cpp

#include <iostream>
using namespace std;

void MatrixTranspose(int MatrixA[3][3]);
int main()
{
	int MatrixA[3][3];
	int row = 0;
	for (row = 0; row < 3; row++)
	{
		cout << "�������;����" << row + 1 << "�У�\n";
		cin >> MatrixA[row][0] >> MatrixA[row][1] >> MatrixA[row][2];
	}
	MatrixTranspose(MatrixA);
	cout << "ת�ú�\n";
	for (row = 0; row < 3; row++)
	{
		cout << MatrixA[row][0] << " " << MatrixA[row][1] << " "
				<< MatrixA[row][2] << "\n";
	}
	system("pause");
	return 0;
}

void MatrixTranspose(int MatrixA[3][3])
{
	int MatrixB[3][3];
	int i = 0, j = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			MatrixB[j][i] = MatrixA[i][j];
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			MatrixA[i][j] = MatrixB[i][j];
		}
	}
}
