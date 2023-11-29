#include "Q6.h"

int Q6_5()
{
	double income, tax;

	cout << "당신의 소득은 : ";
	while ((cin >> income) && income > 0)
	{
		if (income <= 5000)
			tax = income * 0.0;
		else if (income <= 10000)
			tax = (income - 5000) * 0.1 + 5000 * 0.0;
		else if (income <= 20000)
			tax = (income - 10000 - 5000) * 0.15 + 10000 * 0.1 + 5000 * 0.0;
		else
			tax = (income - 20000 - 10000 - 5000) * 0.2 + 20000 * 0.15 + 10000 * 0.1 + 5000 * 0.0;

		cout << "당신의 소득세는 " << tax << "트바프입니다." << endl;
		cout << "당신의 소득은 : ";
	}

	cout << "종료" << endl;

	return 0;
}