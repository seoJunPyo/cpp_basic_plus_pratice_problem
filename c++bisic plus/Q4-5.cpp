#include "Q4.h"

struct CandyBar
{
	string name;
	double weight;
	int cal;
};

int Q4_5()
{
	CandyBar snack = { "Mocha Munch", 2.3, 350 };
	cout << "��ǥ�� : " << snack.name << endl;
	cout << "�߷� : " << snack.weight << endl;
	cout << "Į�θ� : " << snack.cal << endl;

	return 0;
}