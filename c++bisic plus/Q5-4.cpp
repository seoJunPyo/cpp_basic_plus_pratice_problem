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

	cout << year << "년 뒤, A는 " << customerA << "원이고 B는 " << customerB << "원으로 B가 A의 자금을 초과한다.\n";
	
	return 0;
}