#include "Q5.h"

int Q5_10()
{
	int row;

	cout << "출력할 행 수를 입력하십시오 : ";
	cin >> row;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row - i - 1; j++)
			cout << ".";
		for (int j = 0; j < i + 1; j++)
			cout << "*";

		cout << endl;
	}

	return 0;
}