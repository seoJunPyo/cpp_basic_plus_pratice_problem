#include "Q8.h"

struct CandyBar
{
	string maker;
	double weight;
	int calorie;
};

static void create_CandyBar(CandyBar& CB, const char* maker = "Millennium Munch", double weight = 2.85, int calorie = 350);
static void show_CandyBar(const CandyBar& CB);

int Q8_2()
{
	CandyBar CB1;
	CandyBar CB2;

	create_CandyBar(CB1);
	create_CandyBar(CB2, "candy", 2.2);

	show_CandyBar(CB1);
	show_CandyBar(CB2);

	create_CandyBar(CB2);

	show_CandyBar(CB2);

	return 0;
}

static void create_CandyBar(CandyBar& CB, const char* maker, double weight, int calorie)
{
	CB.maker = maker;
	CB.weight = weight;
	CB.calorie = calorie;
}

static void show_CandyBar(const CandyBar& CB)
{
	cout << "상표 : " << CB.maker << endl;
	cout << "중량 : " << CB.weight << endl;
	cout << "칼로리 : " << CB.calorie << endl;
}