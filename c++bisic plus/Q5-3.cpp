#include "Q5.h"

int Q5_3()
{
	int num, sum = 0;

	cout << "���� ���� �Է� : ";
	while ((cin >> num) && num != 0)
	{
		sum += num;
		cout << "���� ���� �Է� : ";
	}

	cout << "�� ����� " << sum << "�Դϴ�.\n";

	return 0;
}