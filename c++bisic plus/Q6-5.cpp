#include "Q6.h"

int Q6_5()
{
	double income, tax;

	cout << "����� �ҵ��� : ";
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

		cout << "����� �ҵ漼�� " << tax << "Ʈ�����Դϴ�." << endl;
		cout << "����� �ҵ��� : ";
	}

	cout << "����" << endl;

	return 0;
}