#include "person_der.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void Person_Base::Show() const
{
	cout << "�̸� : " << last_name << ", " << first_name << endl;
}

void Person_Base::Set()
{
	cout << "�� �Է� : ";
	getline(cin, last_name);
	cout << "�̸� �Է� : ";
	getline(cin, first_name);
}

double Gunslinger::Draw() const
{
	return draw_time;
}

void Gunslinger::Data() const
{
	cout << "��ο� �ð� : " << draw_time << endl;
	cout << "��ġ �� : " << notch_count << endl;
}

void Gunslinger::Get()
{
	cout << "��ο� �ð� �Է� : ";
	cin >> draw_time;
	cout << "��ġ �� �Է� : ";
	cin >> notch_count;
}

void Gunslinger::Show() const
{
	cout << "Gunslinger" << endl;
	Person_Base::Show();
	Data();
}

void Gunslinger::Set()
{
	Person_Base::Set();
	Get();
}

int PokerPlayer::Draw() const
{
	srand((unsigned int)time(0));
	return rand() % 52 + 1;
}

double BadDude::GDraw() const
{
	return Gunslinger::Draw();
}

int BadDude::CDraw() const
{
	return PokerPlayer::Draw();
}

void BadDude::Show() const
{
	Person_Base::Show();
	Gunslinger::Data();
	cout << "���� ī�� : " << CDraw() << endl;
}