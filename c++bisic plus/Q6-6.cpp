#include "Q6.h"

struct donation
{
	string name;
	double amout = 0;
};

int Q6_6()
{
	int size;

	cout << "기부자 목록을 몇 명까지 관리합니까? : ";
	cin >> size;
	cin.get();

	donation* donation_list = new donation[size];
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << "번째 기부자 입력" << endl;
		cout << "기부자 이름 : ";
		getline(cin, donation_list[i].name);
		cout << "기부 금액 : ";
		cin >> donation_list[i].amout;
		cin.get();
	}

	if (size == 0)
		cout << "기부자가 없습니다." << endl;
	else
	{
		cout << "고액 기부자" << endl;
		for (int i = 0; i < size; i++)
		{
			if (donation_list[i].amout >= 10000)
				cout << donation_list[i].name << " - " << donation_list[i].amout << endl;
		}

		cout << endl;

		cout << "소액 기부자" << endl;
		for (int i = 0; i < size; i++)
		{
			if (donation_list[i].amout < 10000)
				cout << donation_list[i].name << " - " << donation_list[i].amout << endl;
		}
	}

	delete[] donation_list;

	return 0;
}