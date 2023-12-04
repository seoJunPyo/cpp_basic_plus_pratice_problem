#include <iostream>

class myString
{
private :
	char* string;

public : 
	myString();
	myString(const char* str);
	myString(const myString& mStr);
	~myString();
	void stringlow();
	void stringup();
	int has(char ch);

	myString operator+(myString& sub);
	myString operator=(const myString& sub);
	bool operator==(const myString& sub);

	friend myString operator+(const char * str, const myString& mStr);
	friend std::ostream& operator<<(std::ostream& os, const myString& mStr);
	friend std::istream& operator>>(std::istream& is, myString& mStr);
};