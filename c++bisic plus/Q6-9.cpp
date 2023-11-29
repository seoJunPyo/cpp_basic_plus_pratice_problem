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

	cout << "파일 명 입력 : ";
	getline(cin, file_name);

	inFile.open(file_name);
	if (!inFile.is_open())
	{
		cout << file_name << " 파일을 열 수 없습니다." << endl;
		cout << "프로그램을 종료합니다." << endl;
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