#include "Q9.h"

void strcount(const string);

int Q9_2()
{
	string input;

	cout << "�������� �� ���� �Է��Ͻʽÿ�. : " << endl;
	while (getline(cin, input) && input != "")
	{
		strcount(input);

		cout << "�������� �� ���� �Է��Ͻʽÿ�. (�������� ������ �Է�) : " << endl;
	}

	cout << "����!" << endl;

	return 0;
}

void strcount(const string str)
{
	static int total = 0;
	total += (int)str.size();

	cout << "\"" << str << "\"���� " << str.size() << "���� ���ڰ� �ֽ��ϴ�." << endl;
	cout << "���ݱ��� �� " << total << "���� ������ �Է��ϼ̽��ϴ�." << endl;
}