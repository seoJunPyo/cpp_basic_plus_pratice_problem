#include "Q6.h"

struct donation
{
	string name;
	double amout = 0;
};

int Q6_6()
{
	int size;

	cout << "����� ����� �� ����� �����մϱ�? : ";
	cin >> size;
	cin.get();

	donation* donation_list = new donation[size];
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << "��° ����� �Է�" << endl;
		cout << "����� �̸� : ";
		getline(cin, donation_list[i].name);
		cout << "��� �ݾ� : ";
		cin >> donation_list[i].amout;
		cin.get();
	}

	if (size == 0)
		cout << "����ڰ� �����ϴ�." << endl;
	else
	{
		cout << "��� �����" << endl;
		for (int i = 0; i < size; i++)
		{
			if (donation_list[i].amout >= 10000)
				cout << donation_list[i].name << " - " << donation_list[i].amout << endl;
		}

		cout << endl;

		cout << "�Ҿ� �����" << endl;
		for (int i = 0; i < size; i++)
		{
			if (donation_list[i].amout < 10000)
				cout << donation_list[i].name << " - " << donation_list[i].amout << endl;
		}
	}

	delete[] donation_list;

	return 0;
}