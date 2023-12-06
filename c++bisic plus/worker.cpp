#include "worker.h"
#include <iostream>

using namespace std;

void Worker::Data() const
{
	cout << "사원 이름 : " << full_name << endl;
	cout << "사원 번호 : " << id << endl;
}

void Worker::Get()
{
	getline(cin, full_name);
	cout << "사원 번호를 입력하십시오 : ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}

void Waiter::Set()
{
	cout << "웨이터의 이름을 입력하십시오 : ";
	Worker::Get();
	Get();
}

void Waiter::Show() const
{
	cout << "직종 : 웨이터" << endl;
	Worker::Data();
	Data();
}

void Waiter::Data() const
{
	cout << "웨이터 등급 : " << panache << endl;
}

void Waiter::Get()
{
	cout << "웨이터 등급을 입력하세요 : ";
	cin >> panache;
	while (cin.get() != '\n')
		continue;
}

const char* Singer::pv[Singer::Vtype] = { "other", "alto", "contralto", "soprano", "bass", "baritone", "tenor" };

void Singer::Set()
{
	cout << "가수의 이름을 입력하십시오 : ";
	Worker::Get();
	Get();
}

void Singer::Show() const
{
	cout << "직종 : 가수" << endl;
	Worker::Data();
	Data();
}

void Singer::Data() const
{
	cout << "목소리 유형 : " << pv[voice] << endl;
}

void Singer::Get()
{
	cout << "가수의 목소리 유형 번호를 입력하십시오. : " << endl;
	int i;
	for (i = 0; i < Vtype; i++)
	{
		cout << i << " : " << pv[i] << "   ";
		if (i % 4 == 3)
			cout << endl;
	}

	if (i % 4 != 0)
		cout << endl;

	cin >> voice;

	while (cin.get() != '\n')
		continue;
}

void SingingWaiter::Data() const
{
	Singer::Data();
	Waiter::Data();
}

void SingingWaiter::Get()
{
	Waiter::Get();
	Singer::Get();
}

void SingingWaiter::Set()
{
	cout << "가수 겸 웨이터의 이름을 입력하십시오 : ";
	Worker::Get();
	Get();
}

void SingingWaiter::Show() const
{
	cout << "직종 : 가수 겸 웨이터" << endl;
	Worker::Data();
	Data();
}
