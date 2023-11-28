#include "Q3.h"

int Q3_6()
{
	double mile, gallen;

	cout << "주행한 거리는 (마일 단위) : ";
	cin >> mile;
	cout << "소비한 연료는 (갤런 단위) : ";
	cin >> gallen;

	cout << "1갤런당 주행한 거리는 " << mile / gallen << "마일 입니다.";

	return 0;
}