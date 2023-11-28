#include "Q3.h"

int Q3_3()
{
	int angle, min, sec;
	const int ANGLE_PER_MIN = 60;
	const int MIN_PER_SEC = 60;

	cout << "위도를 도, 분, 초 단위로 입력하시오.\n";
	cout << "먼저, 도각을 입력하시오 : ";
	cin >> angle;
	cout << "다음에, 분각을 입력하시오 : ";
	cin >> min;
	cout << "끝으로, 초각을 입력하시오 : ";
	cin >> sec;
	cout << angle << "도, " << min << "도, " << sec << "도, = " << angle + ((double)min / ANGLE_PER_MIN) + ((double(sec) / MIN_PER_SEC) / MIN_PER_SEC) << "도\n";

	return 0;
}