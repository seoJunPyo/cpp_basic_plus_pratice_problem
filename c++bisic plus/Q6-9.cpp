#include "Q6.h"

struct donation
{
	string name;
	double amout;
};

int Q6_9()
{
	int size;
	ifstream inFile;
	string file_name;

	cout << "���� �� �Է� : ";
	getline(cin, file_name);

	inFile.open(file_name);
	if (!inFile.is_open())
	{
		cout << file_name << " ������ �� �� �����ϴ�." << endl;
		cout << "���α׷��� �����մϴ�." << endl;
		exit(EXIT_FAILURE);
	}

	inFile >> size;
	inFile.get();

	donation* donation_list = new donation[size];
	for (int i = 0; i < size; i++)
	{
		getline(inFile, donation_list[i].name);
		inFile >> donation_list[i].amout;
		inFile.get();
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