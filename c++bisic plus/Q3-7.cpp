#include "Q3.h"

int Q3_7()
{
	const double KM_PER_MILE = 0.6214;
	const double GALLEN_PER_LITER = 3.874;
	double km, liter;


	cout << "������ �Ÿ��� (ų�ι��� ����) : ";
	cin >> km;
	cout << "�Һ��� ����� (���� ����) : ";
	cin >> liter;

	double mile = km * KM_PER_MILE;
	double gallen = liter / GALLEN_PER_LITER;

	cout << "1������ ������ �Ÿ��� " << mile / gallen << "���� �Դϴ�.";

	return 0;
}