#include "Q5.h"

struct Car
{
	char maker[50];
	int production_year;
};

int Q5_7()
{
	int size;

	cout << "몇 대의 차를 목록을 관리하시겠습니까? : ";
	cin >> size;
	cin.get();

	Car *car_list = new Car[size];

	for (int i = 0; i < size; i++)
	{
		cout << "자동차 #" << i + 1 << " : \n";
		cout << "제작 업체 : ";
		cin.getline(car_list[i].maker, 50);
		cout << "제작 년도 : ";
		cin >> car_list[i].production_year;
		cin.get();
	}

	cout << "현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다.\n";
	for (int i = 0; i < size; i++)
		cout << car_list[i].production_year << "년형 " << car_list[i].maker << endl;

	delete[] car_list;

	return 0;
}