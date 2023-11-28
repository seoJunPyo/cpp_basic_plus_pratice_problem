#include "Q2.h"

static double C_To_F(double C);

int Q2_5()
{
	int C;

	cout << "섭씨 온도를 입력하고 Enter 키를 누르십시오 : ";
	cin >> C;
	cout << "섭씨 " << C << "도는 화씨로 " << C_To_F(C) << "도 입니다.";

	return 0;
}

static double C_To_F(double C)
{
	return 1.8 * C + 32.0;
}