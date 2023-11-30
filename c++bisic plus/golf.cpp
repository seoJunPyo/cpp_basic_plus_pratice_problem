#include "Q9.h"
#include <cstring>

extern const int Len;

void setgolf(golf& g, const char* name, int hc)
{
	strcpy_s(g.full_name, Len, name);
	g.handicap = hc;
}

void setgolf(golf& g)
{
	cout << "�̸� �Է� : ";
	cin.getline(g.full_name, Len);
	cout << "�ڵ�ĸ �Է� : ";
	cin >> g.handicap;
	while (cin.get() != '\n')
		continue;
}

void handicap(golf& g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf& g)
{
	cout << "�̸� : " << g.full_name << endl;
	cout << "�ڵ�ĸ : " << g.handicap << endl;
}
