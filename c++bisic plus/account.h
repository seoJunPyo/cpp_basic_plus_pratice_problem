#include <string>
using std::string;

class Account
{
	string fullName_;
	string account_number_;
	double amount_;

public :
	Account(string& fullName, string& account_number, double amount = 0);
	void show();
	void withdraw(double amount);
	void deposit(double amount);
};