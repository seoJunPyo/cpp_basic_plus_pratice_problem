#include "Q5.h"

struct Car
{
	char maker[50];
	int production_year;
};

int Q5_7()
{
	int size;

	cout << "�� ���� ���� ����� �����Ͻðڽ��ϱ�? : ";
	cin >> size;
	cin.get();

	Car *car_list = new Car[size];

	for (int i = 0; i < size; i++)
	{
		cout << "�ڵ��� #" << i + 1 << " : \n";
		cout << "���� ��ü : ";
		cin.getline(car_list[i].maker, 50);
		cout << "���� �⵵ : ";
		cin >> car_list[i].production_year;
		cin.get();
	}

	cout << "���� ���ϰ� �����ϰ� �ִ� �ڵ��� ����� ������ �����ϴ�.\n";
	for (int i = 0; i < size; i++)
		cout << car_list[i].production_year << "���� " << car_list[i].maker << endl;

	delete[] car_list;

	return 0;
}