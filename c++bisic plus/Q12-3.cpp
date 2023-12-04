#include "Q12.h"

const int STKS = 4;
int Q12_3()
{
	Stock stocks[STKS] =
	{
		Stock("NanoSmart", 12, 20.0),
		Stock("Boffo Objects", 200, 2.0),
		Stock("Monolighic Obelisks", 130, 3.25),
		Stock("Fleep Enterprises", 60, 6.5),
	};

	cout << "���� �ֽ� ����Ʈ : " << endl;
	for (int st = 0; st < STKS; st++)
		cout << stocks[st];

	const Stock* top = &stocks[0];
	for (int st = 1; st < STKS; st++)
		top = &top->topval(stocks[st]);

	cout << endl << "�ְ� ��ġ�� �ֽ� : " << endl;
	cout << *top;

	return 0;
}