#include "Q3.h"

int Q3_5()
{
	long long population;
	long long population_USA;

	cout << "���� �α����� �Է��Ͻÿ� : ";
	cin >> population;
	cout << "�̱��� �α��� �Է��Ͻÿ� : ";
	cin >> population_USA;
	cout << "���� �α������� �̱��� �����ϴ� ������ " << ((long double)population_USA / population) * 100 << "%�̴�";

	return 0;
}