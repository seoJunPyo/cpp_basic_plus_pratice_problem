#include "Q4.h"

int Q4_10()
{
	const int SIZE = 3;
	array<double, SIZE> records;
	double sum = 0;

	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << "��° ��� �Է� : ";
		cin >> records[i];
		sum += records[i];
	}

	cout << SIZE << "ȸ ���� ����� ����� " << sum / SIZE << "�Դϴ�.\n";

	return 0;
}