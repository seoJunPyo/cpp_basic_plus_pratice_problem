#include "Q7.h"


const int Seasons = 4;
const char* Sname[Seasons] = { "Spring", "Summer", "Fall", "Winter" };

struct Expenses
{
	double list[Seasons];
};

static void fill(Expenses* expenses);
static void show(Expenses expenses);

int Q7_8()
{
	Expenses expenses;
	fill(&expenses);
	show(expenses);
	return 0;
}

static void fill(Expenses *expenses)
{
	for (int i = 0; i < Seasons; i++)
	{
		cout << Sname[i] << "에 소요되는 비용 : ";
		cin >> expenses->list[i];
	}
}

static void show(Expenses expenses)
{
	double total = 0.0;
	cout << endl << "계절별 비용" << endl;
	for (int i = 0; i < Seasons; i++)
	{
		cout << Sname[i] << " :  " << expenses.list[i] << endl;
		total += expenses.list[i];
	}

	cout << "총 비용 : " << total << endl;
}