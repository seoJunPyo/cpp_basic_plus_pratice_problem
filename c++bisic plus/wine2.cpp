#include "wine2.h"

Wine2::Wine2(const char* l, int y) : string(l), years(y), PairArray(ArrayInt(0, y), ArrayInt(0, y))
{
}

Wine2::Wine2(const char* l, int y, const int yr[], const int st[]) : string(l), years(y), PairArray(ArrayInt(yr, y), ArrayInt(st, y))
{
}

Wine2::Wine2(const char* l, const ArrayInt& yr, const ArrayInt& st) : string(l), years((unsigned int)yr.size()), PairArray(yr, st)
{
}

Wine2::Wine2(const char* l, const PairArray& yr_st) : string(l), years((unsigned int)yr_st.first().size()), PairArray(yr_st)
{
}

void Wine2::GetBottles()
{
	for (int i = 0; i < years; i++)
	{
		cout << "��Ȯ �⵵ �Է� : ";
		cin >> PairArray::first()[i];
		cout << "����� ���� �Է� : ";
		cin >> PairArray::second()[i];
	}
}

int Wine2::sum()
{
	int result = 0;

	for (int i = 0; i < PairArray::second().size(); i++)
		result += PairArray::second()[i];

	return result;
}

void Wine2::Show()
{
	cout << "���� �� : " << Label() << endl;
	for (int i = 0; i < PairArray::first().size(); i++)
		cout << PairArray::first()[i] << " - " << PairArray::second()[i] << endl;
}