#include "mystring.h"
#include <cstring>
#include <cctype>

myString::myString()
{
	string = nullptr;
}

myString::myString(const char* str)
{
	int len = (int)strlen(str);
	string = new char[len + 1];
	strcpy_s(string, len + 1, str);
}

myString::myString(const myString& mStr)
{
	int len = (int)strlen(mStr.string);
	string = new char[len + 1];
	strcpy_s(string, len + 1, mStr.string);
}

myString::~myString()
{
	delete[] string;
}

void myString::stringlow()
{
	int idx = 0;
	while (string[idx])
	{
		if (isupper(string[idx]))
			string[idx] = tolower(string[idx]);

		idx++;
	}
}

void myString::stringup()
{
	int idx = 0;
	while (string[idx])
	{
		if (islower(string[idx]))
			string[idx] = toupper(string[idx]);

		idx++;
	}
}

int myString::has(char ch)
{
	int count = 0;
	int idx = 0;

	while (string[idx])
	{
		if (string[idx] == ch)
			count++;

		idx++;
	}

	return count;
}

myString myString::operator+(myString& sub)
{
	myString result = string;

	int size = (int)strlen(result.string) + (int)strlen(sub.string) + 2;
	strcat_s(result.string, size, sub.string);

	return result;
}

myString myString::operator=(const myString& sub)
{
	if (this == &sub)
		return *this;

	delete[] string;

	int size = (int)strlen(sub.string);
	string = new char[size + 1];
	strcpy_s(string, size + 1, sub.string);

	return *this;
}

bool myString::operator==(const myString& sub)
{
	myString A = string;
	myString B = sub;

	A.stringlow();
	B.stringlow();

	return strcmp(A.string, B.string) == 0;
}

myString operator+(const char* str, const myString& mStr)
{
	myString result = str;

	int size = (int)strlen(result.string) + (int)strlen(mStr.string) + 2;
	strcat_s(result.string, size, mStr.string);

	return result;
}


std::ostream& operator<<(std::ostream& os, const myString& mStr)
{
	os << mStr.string;

	return os;
}

std::istream& operator>>(std::istream& is, myString& mStr)
{
	char temp[256];
	int idx = 0;

	while ((temp[idx] = is.get()) && temp[idx] != '\n')
		idx++;
	temp[idx] = '\0';

	mStr = temp;

	return is;
}