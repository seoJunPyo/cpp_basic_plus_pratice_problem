#include "Q5.h"

int Q5_1()
{
	int numA, numB;
	int sum = 0;

	cout << "�� ���� ���� �Է� : ";
	cin >> numA >> numB;
	
	for (int i = numA; i <= numB; i++)
		sum += i;

	cout << numA << "�� " << numB << " ������ �ִ� ��� ������ ���� " << sum << "�̴�\n";

	return 0;
}