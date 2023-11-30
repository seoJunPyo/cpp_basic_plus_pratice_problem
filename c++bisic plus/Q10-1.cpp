#include "Q10.h"

int Q10_1()
{
	string name;
	string acct_num;
	double amount;

	cout << "이름 입력 : ";
	getline(cin, name);
	cout << "계좌 번호 입력 : ";
	getline(cin, acct_num);
	cout << "잔액 입력 : ";
	cin >> amount;
	while (cin.get() != '\n')
		continue;


	Account account = Account(name, acct_num, amount);
	
	;
	char choice;
	cout << "a) 계좌 정보 확인     b)입금    c)출금" << endl;
	cout << "선택 (종료하려면 q) : ";
	while ((cin >> choice) && choice != 'q')
	{
		double amount;

		switch (choice)
		{
		case 'a' :
			account.show();
			break;
		case 'b' :
			cout << "입금할 금액 입력 : ";
			cin >> amount;
			account.deposit(amount);
			break;
		case 'c' : 
			cout << "출금할 금액 입력 : ";
			cin >> amount;
			account.withdraw(amount);
			break;
		default:
			cout << "유효한 선택이 아닙니다." << endl;
			break;
		}

		cout << "a) 계좌 정보 확인     b)입금    c)출금" << endl;
		cout << "선택 (종료하려면 q) : ";
	}

	return 0;
}