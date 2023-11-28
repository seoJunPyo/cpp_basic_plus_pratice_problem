#include "Q2.h"

double LY_to_Au(double LY);
int Q2_6()
{
	double LY;

	cout << "광년 수를 입력하고 Enter 키를 누르십시오 : ";
	cin >> LY;
	cout << LY << " 광년은 " << LY_to_Au(LY) << " 천문 단위입니다.";

	return 0;
}

double LY_to_Au(double LY)
{
	return LY * 63240;
}