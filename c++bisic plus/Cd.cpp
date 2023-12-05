#include "cd.h"
#include <cstring>
#include <iostream>

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
	strncpy_s(performers, 49, s1, 49);
	strncpy_s(label, 19, s2, 19);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd& d)
{
	strncpy_s(performers, 49, d.performers, 49);
	strncpy_s(label, 19, d.label, 19);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	performers[0] = '\0';
	label[0] = '\0';
	selections = 0;
	playtime = 0;
}

Cd::~Cd()
{

}

void Cd::Report() const
{
	using namespace std;

	cout << "Performers : " << performers << endl;
	cout << "Label : " << label << endl;
	cout << "Selections : " << selections << endl;
	cout << "Playtime : " << playtime << endl;
}

Cd& Cd::operator=(const Cd& d)
{
	if (this == &d)
		return *this;

	strncpy_s(performers, 49, d.performers, 49);
	strncpy_s(label, 19, d.label, 19);
	selections = d.selections;
	playtime = d.playtime;

	return *this;
}

Classic::Classic(const char* s1, const char* s2, const char* s3, int n, double x) : Cd(s1, s2, n, x)
{
	strncpy_s(representative, 49, s3, 49);
}

Classic::Classic(const Classic& c) : Cd(c)
{
	strncpy_s(representative, 49, c.representative, 49);
}

Classic::Classic() : Cd()
{
	representative[0] = '\0';
}

Classic::~Classic()
{

}

void Classic::Report() const
{
	using namespace std;

	Cd::Report();
	cout << "Representative : " << representative << endl;
}

Classic& Classic::operator=(const Classic& c) 
{
	if (this == &c)
		return *this;

	Cd::operator=(c);
	strncpy_s(representative, 49, c.representative, 49);

	return *this;
}