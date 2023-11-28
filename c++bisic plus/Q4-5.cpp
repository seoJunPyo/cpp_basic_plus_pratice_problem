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
	cout << "상표명 : " << snack.name << endl;
	cout << "중량 : " << snack.weight << endl;
	cout << "칼로리 : " << snack.cal << endl;

	return 0;
}