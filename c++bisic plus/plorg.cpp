#include <iostream>
#include <cstring>
#include "plorg.h"

Plorg::Plorg(const char* str, int ci)
{
	strncpy_s(name, LEN , str , LEN - 1);
	CI = ci;
}

void Plorg::setCI(int new_CI)
{
	CI = new_CI;
}

void Plorg::show()
{
	using namespace std;

	cout << "ÀÌ¸§ : " << name << endl;
	cout << "CI : " << CI << endl;
}