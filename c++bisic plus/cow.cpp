#include "cow.h"
#include <cstring>
#include <iostream>

Cow::Cow()
{
	name[0] = '\0';
	hobby = nullptr;
	weight = 0;
}

Cow::Cow(const char* nm, const char* ho, double wt)
{
	strncpy_s(name, 20, nm, 19);
	
	int len = strlen(ho);
	hobby = new char[len + 1];
	strncpy_s(hobby, len + 1, ho, len + 1);

	weight = wt;
}

Cow::Cow(const Cow& c)
{
	strncpy_s(name, 20, c.name, 19);

	int len = strlen(c.hobby);
	hobby = new char[len + 1];
	strncpy_s(hobby, len + 1, c.hobby, len + 1);

	weight = c.weight;
}

Cow::~Cow()
{
	delete[] hobby;
}

Cow& Cow::operator=(const Cow& c)
{
	if (this == &c)
		return *this;

	strncpy_s(name, 20, c.name, 19);

	delete[] hobby;
	int len = strlen(c.hobby);
	hobby = new char[len + 1];
	strncpy_s(hobby, len + 1, c.hobby, len + 1);

	weight = c.weight;

	return *this;
}

void Cow::ShowCow() const
{
	std::cout << "이름 : " << name << std::endl;
	std::cout << "취미 : " << hobby << std::endl;
	std::cout << "무게 : " << weight << std::endl;
}

