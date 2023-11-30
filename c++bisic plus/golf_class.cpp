#include "Q10.h"
#include <cstring>

Golf::Golf(char* full_name, int handicap)
{
	strcpy_s(full_name_, LEN, full_name);
	handicap_ = handicap;
}

void Golf::setgolf(const char* name, int hc)
{
	strcpy_s(full_name_, LEN, name);
	handicap_ = hc;
}

void Golf::setgolf()
{
	char temp_name[LEN];
	int temp_hc;

	cout << "�̸� �Է� : ";
	cin.getline(temp_name, LEN);
	cout << "�ڵ�ĸ �Է� : ";
	cin >> temp_hc;
	while (cin.get() != '\n')
		continue;

	*this = Golf(temp_name, temp_hc);
}

void Golf::handicap(int hc)
{
	handicap_ = hc;
}

void Golf::showgolf() const
{
	cout << "�̸� : " << full_name_ << endl;
	cout << "�ڵ�ĸ : " << handicap_ << endl;
}

