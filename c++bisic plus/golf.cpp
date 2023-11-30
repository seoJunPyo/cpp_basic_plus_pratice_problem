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
	cout << "이름 입력 : ";
	cin.getline(g.full_name, Len);
	cout << "핸디캡 입력 : ";
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
	cout << "이름 : " << g.full_name << endl;
	cout << "핸디캡 : " << g.handicap << endl;
}
