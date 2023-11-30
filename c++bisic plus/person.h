#include <string>

using std::string;

class Person
{
	static const int LIMIT = 25;
	string lname_;
	char fname_[LIMIT];

public :
	Person() { lname_ = ""; fname_[0] = '\0'; };
	Person(const string& lname, const char* fname = "Heyyou");
	void Show() const;
	void FormalShow() const;
};