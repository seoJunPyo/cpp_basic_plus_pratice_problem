#include "Q2.h"

int Q2_4()
{
	int age;
	int AGE_PER_MONTH = 12;

	cout << "Enter your age : ";
	cin >> age;
	cout << "이때 당산의 나이를 월수로 나태낼 경우 " << age * AGE_PER_MONTH << "입니다.";

	return 0;
}