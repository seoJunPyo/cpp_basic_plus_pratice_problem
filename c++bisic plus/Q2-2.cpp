#include "Q2.h"

int Q2_2()
{
	double mile;
	const double KM_PER_MILE = 1.60934;

	cout << "마일 단위로 거리 입력 : ";
	cin >> mile;
	cout << mile << "마일은 " << mile * KM_PER_MILE << "킬로미터이다.\n";

	return 0;
}