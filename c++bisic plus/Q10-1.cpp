#include "Q10.h"

int Q10_1()
{
	string name;
	string acct_num;
	double amount;

	cout << "�̸� �Է� : ";
	getline(cin, name);
	cout << "���� ��ȣ �Է� : ";
	getline(cin, acct_num);
	cout << "�ܾ� �Է� : ";
	cin >> amount;
	while (cin.get() != '\n')
		continue;


	Account account = Account(name, acct_num, amount);
	
	;
	char choice;
	cout << "a) ���� ���� Ȯ��     b)�Ա�    c)���" << endl;
	cout << "���� (�����Ϸ��� q) : ";
	while ((cin >> choice) && choice != 'q')
	{
		double amount;

		switch (choice)
		{
		case 'a' :
			account.show();
			break;
		case 'b' :
			cout << "�Ա��� �ݾ� �Է� : ";
			cin >> amount;
			account.deposit(amount);
			break;
		case 'c' : 
			cout << "����� �ݾ� �Է� : ";
			cin >> amount;
			account.withdraw(amount);
			break;
		default:
			cout << "��ȿ�� ������ �ƴմϴ�." << endl;
			break;
		}

		cout << "a) ���� ���� Ȯ��     b)�Ա�    c)���" << endl;
		cout << "���� (�����Ϸ��� q) : ";
	}

	return 0;
}