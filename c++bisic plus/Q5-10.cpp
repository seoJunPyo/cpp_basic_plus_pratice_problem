#include "Q5.h"

int Q5_10()
{
	int row;

	cout << "����� �� ���� �Է��Ͻʽÿ� : ";
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