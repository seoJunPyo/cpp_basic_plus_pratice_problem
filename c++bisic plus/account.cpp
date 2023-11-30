#include "Q10.h"

Account::Account(string& fullName, string& account_number, double amount)
{
	fullName_ = fullName;
	account_number_ = account_number;
	amount_ = amount;
}

void Account::show()
{
	cout << "���� : " << fullName_ << endl;
	cout << "���� ��ȣ : " << account_number_ << endl;
	cout << "�ܾ� : " << amount_ << endl;
}

void Account::withdraw(double amount)
{
	if (amount > amount_)
	{
		cout << "�ܾ��� �����մϴ�." << endl;
		return;
	}

	amount_ -= amount;
	cout << amount << "���� ���������� ��ݵǾ����ϴ�." << endl;
	cout << "�ܾ� : " << amount_ << endl;
}

void Account::deposit(double amount)
{
	amount_ += amount;
	cout << amount << "���� ���������� �ԱݵǾ����ϴ�." << endl;
	cout << "�ܾ� : " << amount_ << endl;
}