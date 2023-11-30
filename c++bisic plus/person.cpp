#include "person.h"
#include <cstring>
#include <iostream>

using namespace std;

Person::Person(const string& lname, const char* fname)
{
	lname_ = lname;
	strcpy_s(fname_, LIMIT, fname);
}

void Person::Show() const
{
	cout << "¼º : " << lname_ << endl;
	cout << "ÀÌ¸§ : " << fname_<< endl;
}

void Person::FormalShow() const
{
	cout << lname_ << " " << fname_ << endl;
}