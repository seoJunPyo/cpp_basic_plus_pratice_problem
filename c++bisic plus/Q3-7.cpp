#include "Q3.h"

int Q3_7()
{
	const double KM_PER_MILE = 0.6214;
	const double GALLEN_PER_LITER = 3.874;
	double km, liter;


	cout << "주행한 거리는 (킬로미터 단위) : ";
	cin >> km;
	cout << "소비한 연료는 (리터 단위) : ";
	cin >> liter;

	double mile = km * KM_PER_MILE;
	double gallen = liter / GALLEN_PER_LITER;

	cout << "1갤런당 주행한 거리는 " << mile / gallen << "마일 입니다.";

	return 0;
}