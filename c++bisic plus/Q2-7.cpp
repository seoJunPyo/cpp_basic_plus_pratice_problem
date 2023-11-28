#include "Q2.h"

void Display_Time(int hour, int min);
int Q2_7()
{
	int hour, min;
	cout << "시간 값을 입력하시오 : ";
	cin >> hour;
	cout << "분 값을 입력하시오 : ";
	cin >> min;

	Display_Time(hour, min);

	return 0;
}

void Display_Time(int hour, int min)
{
	cout << "시각 : " << hour << ":" << min;
}