#include "Q2.h"

void Display_Time(int hour, int min);
int Q2_7()
{
	int hour, min;
	cout << "�ð� ���� �Է��Ͻÿ� : ";
	cin >> hour;
	cout << "�� ���� �Է��Ͻÿ� : ";
	cin >> min;

	Display_Time(hour, min);

	return 0;
}

void Display_Time(int hour, int min)
{
	cout << "�ð� : " << hour << ":" << min;
}