#include "Q10.h"

Account::Account(string& fullName, string& account_number, double amount)
{
	fullName_ = fullName;
	account_number_ = account_number;
	amount_ = amount;
}

void Account::show()
{
	cout << "고객명 : " << fullName_ << endl;
	cout << "계좌 번호 : " << account_number_ << endl;
	cout << "잔액 : " << amount_ << endl;
}

void Account::withdraw(double amount)
{
	if (amount > amount_)
	{
		cout << "잔액이 부족합니다." << endl;
		return;
	}

	amount_ -= amount;
	cout << amount << "원이 정상적으로 출금되었습니다." << endl;
	cout << "잔액 : " << amount_ << endl;
}

void Account::deposit(double amount)
{
	amount_ += amount;
	cout << amount << "원이 정상적으로 입금되었습니다." << endl;
	cout << "잔액 : " << amount_ << endl;
}