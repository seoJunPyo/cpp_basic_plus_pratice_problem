#include "worker.h"
#include <iostream>

using namespace std;

void Worker::Data() const
{
	cout << "��� �̸� : " << full_name << endl;
	cout << "��� ��ȣ : " << id << endl;
}

void Worker::Get()
{
	getline(cin, full_name);
	cout << "��� ��ȣ�� �Է��Ͻʽÿ� : ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}

void Waiter::Set()
{
	cout << "�������� �̸��� �Է��Ͻʽÿ� : ";
	Worker::Get();
	Get();
}

void Waiter::Show() const
{
	cout << "���� : ������" << endl;
	Worker::Data();
	Data();
}

void Waiter::Data() const
{
	cout << "������ ��� : " << panache << endl;
}

void Waiter::Get()
{
	cout << "������ ����� �Է��ϼ��� : ";
	cin >> panache;
	while (cin.get() != '\n')
		continue;
}

const char* Singer::pv[Singer::Vtype] = { "other", "alto", "contralto", "soprano", "bass", "baritone", "tenor" };

void Singer::Set()
{
	cout << "������ �̸��� �Է��Ͻʽÿ� : ";
	Worker::Get();
	Get();
}

void Singer::Show() const
{
	cout << "���� : ����" << endl;
	Worker::Data();
	Data();
}

void Singer::Data() const
{
	cout << "��Ҹ� ���� : " << pv[voice] << endl;
}

void Singer::Get()
{
	cout << "������ ��Ҹ� ���� ��ȣ�� �Է��Ͻʽÿ�. : " << endl;
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
	cout << "���� �� �������� �̸��� �Է��Ͻʽÿ� : ";
	Worker::Get();
	Get();
}

void SingingWaiter::Show() const
{
	cout << "���� : ���� �� ������" << endl;
	Worker::Data();
	Data();
}
