#include "Q4.h"

struct CandyBar
{
	string name;
	double weight;
	int cal;
};

int Q4_9()
{
	CandyBar* snacks = new CandyBar[3];
	snacks[0] = { "Mocha Munch", 2.3, 350 };
	
	cout << "상표명 : " << snacks[0].name << endl;
	cout << "중량 : " << snacks[0].weight << endl;
	cout << "칼로리 : " << snacks[0].cal << endl;

	return 0;
}