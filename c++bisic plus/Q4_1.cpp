#include "Q4.h"

int Q4_1()
{
	string first_name;
	string last_name;
	char grade;
	int age;

	cout << "���� �۽�Ʈ ���� (�̸�) : ";
	getline(cin, first_name);
	cout << "���� ��Ʈ ���� (��) : ";
	getline(cin, last_name);
	cout << "�л��� ���ϴ� ���� : ";
	cin >> grade;
	cout << "���� : ";
	cin >> age;

	cout << "���� : " << age << endl;
	cout << "���� : " << last_name << ", " << first_name << endl;
	cout << "���� : " << (char)(grade + 1) << endl;
	cout << "���� : " << age << endl;

	return 0;
}