#include "person_der.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void Person_Base::Show() const
{
	cout << "이름 : " << last_name << ", " << first_name << endl;
}

void Person_Base::Set()
{
	cout << "성 입력 : ";
	getline(cin, last_name);
	cout << "이름 입력 : ";
	getline(cin, first_name);
}

double Gunslinger::Draw() const
{
	return draw_time;
}

void Gunslinger::Data() const
{
	cout << "드로우 시간 : " << draw_time << endl;
	cout << "노치 수 : " << notch_count << endl;
}

void Gunslinger::Get()
{
	cout << "드로우 시간 입력 : ";
	cin >> draw_time;
	cout << "노치 수 입력 : ";
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
	cout << "뽑은 카드 : " << CDraw() << endl;
}