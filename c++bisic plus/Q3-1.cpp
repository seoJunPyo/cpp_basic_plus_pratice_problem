#include "Q3.h"

int Q3_1()
{
	int tall_cm;
	const double CM_PER_MITER = 0.01;

	cout << "키를 센티미터 단위로 입력 : ___\b\b\b";
	cin >> tall_cm;
	cout << tall_cm << "센티미터는 " << tall_cm * CM_PER_MITER << "미터입니다.";

	return 0;
}