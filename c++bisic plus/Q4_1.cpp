#include "Q4.h"

int Q4_1()
{
	string first_name;
	string last_name;
	char grade;
	int age;

	cout << "영문 퍼스트 네임 (이름) : ";
	getline(cin, first_name);
	cout << "영문 라스트 네임 (성) : ";
	getline(cin, last_name);
	cout << "학생이 원하는 학점 : ";
	cin >> grade;
	cout << "나이 : ";
	cin >> age;

	cout << "나이 : " << age << endl;
	cout << "성명 : " << last_name << ", " << first_name << endl;
	cout << "학점 : " << (char)(grade + 1) << endl;
	cout << "나이 : " << age << endl;

	return 0;
}