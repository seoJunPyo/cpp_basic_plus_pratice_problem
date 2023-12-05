#include "cd2.h"
#include <cstring>
#include <iostream>

Cd2::Cd2(const char* s1, const char* s2, int n, double x)
{
	int len = (unsigned int)strlen(s1);
	performers = new char[len + 1];
	strcpy_s(performers, len + 1, s1);

	len = (unsigned int)strlen(s2);
	label = new char[len + 1];
	strcpy_s(label, len + 1, s2);

	selections = n;
	playtime = x;
}

Cd2::Cd2(const Cd2& d)
{
	int len = (unsigned int)strlen(d.performers);
	performers = new char[len + 1];
	strcpy_s(performers, len + 1, d.performers);

	len = (unsigned int)strlen(d.label);
	label = new char[len + 1];
	strcpy_s(label, len + 1, d.label);


	selections = d.selections;
	playtime = d.playtime;
}

Cd2::Cd2()
{
	performers = nullptr;
	label = nullptr;
	selections = 0;
	playtime = 0;
}

Cd2::~Cd2()
{
	delete[] performers;
	delete[] label;
}

void Cd2::Report() const
{
	using namespace std;

	cout << "Performers : " << performers << endl;
	cout << "Label : " << label << endl;
	cout << "Selections : " << selections << endl;
	cout << "Playtime : " << playtime << endl;
}

Cd2& Cd2::operator=(const Cd2& d)
{
	if (this == &d)
		return *this;

	delete[] performers;
	int len = (unsigned int)strlen(d.performers);
	performers = new char[len + 1];
	strcpy_s(performers, len + 1, d.performers);

	delete[] label;
	len = (unsigned int)strlen(d.label);
	label = new char[len + 1];
	strcpy_s(label, len + 1, d.label);

	selections = d.selections;
	playtime = d.playtime;

	return *this;
}

Classic2::Classic2(const char* s1, const char* s2, const char* s3, int n, double x) : Cd2(s1, s2, n, x)
{
	int len = (unsigned int)strlen(s3);
	representative = new char[len + 1];
	strcpy_s(representative, len + 1, s3);
}

Classic2::Classic2(const Classic2& c) : Cd2(c)
{
	int len = (unsigned int)strlen(c.representative);
	representative = new char[len + 1];
	strcpy_s(representative, len + 1, c.representative);
}

Classic2::Classic2() : Cd2()
{
	representative = nullptr;
}

Classic2::~Classic2()
{
	delete[] representative;
}

void Classic2::Report() const
{
	using namespace std;

	Cd2::Report();
	cout << "Representative : " << representative << endl;
}

Classic2& Classic2::operator=(const Classic2& c)
{
	Cd2::operator=(c);

	delete[] representative;
	int len = (unsigned int)strlen(c.representative);
	representative = new char[len + 1];
	strcpy_s(representative, len + 1, c.representative);

	return *this;
}