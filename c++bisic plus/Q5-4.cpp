#include "Q5.h"

int Q5_4()
{
	const double PRINCIPAL = 100000;
	int year = 0;
	double customerA, customerB;
	customerA = customerB = PRINCIPAL;

	while (!(customerB > customerA))
	{
		customerA += PRINCIPAL * 0.1;
		customerB += customerB * 0.05;
		year++;
	}

	cout << year << "�� ��, A�� " << customerA << "���̰� B�� " << customerB << "������ B�� A�� �ڱ��� �ʰ��Ѵ�.\n";
	
	return 0;
}