#include "wine.h"

Wine::Wine(const char* l, int y) : bottles(ArrayInt(0, y), ArrayInt(0, y))
{
	name = l;
	years = y;
}

Wine::Wine(const char* l, int y, const int yr[], const int st[]) : bottles(ArrayInt(yr, y), ArrayInt(st, y))
{
	name = l;
	years = y;
}

Wine::Wine(const char* l, const ArrayInt& yr, const ArrayInt& st) : bottles(yr, st)
{
	name = l;
	years = (unsigned int)yr.size();
}
Wine::Wine(const char* l, const PairArray& yr_st) : bottles(yr_st)
{
	name = l;
	years = (unsigned int)yr_st.first().size();
}


void Wine::GetBottles()
{
	for (int i = 0; i < years; i++)
	{
		cout << "수확 년도 입력 : ";
		cin >> bottles.first()[i];
		cout << "생산된 수량 입력 : ";
		cin >> bottles.second()[i];
	}
}

int Wine::sum()
{
	int result = 0;
	
	for (int i = 0; i < bottles.second().size(); i++)
		result += bottles.second()[i];
	
	return result;
}

void Wine::Show()
{
	cout << "와인 명 : " << name << endl;
	for (int i = 0; i < bottles.first().size(); i++)
		cout << bottles.first()[i] << " - " << bottles.second()[i] << endl;
}