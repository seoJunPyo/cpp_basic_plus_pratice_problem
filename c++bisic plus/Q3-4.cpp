#include "Q3.h"

int Q3_4()
{
	long sec;

	const int MIN_PER_SEC = 60;
	const int HOUR_PER_MIN = 60;
	const int DAY_PER_HOUR = 24;

	cout << "�� ���� �Է��Ͻÿ� : ";
	cin >> sec;

	int day = sec / (MIN_PER_SEC * HOUR_PER_MIN * DAY_PER_HOUR);
	sec %= (MIN_PER_SEC * HOUR_PER_MIN * DAY_PER_HOUR);

	int hour = sec / (MIN_PER_SEC * HOUR_PER_MIN);
	sec %= (MIN_PER_SEC * HOUR_PER_MIN);

	int min = sec / MIN_PER_SEC;
	sec %= MIN_PER_SEC;


	cout << sec << "�� = " << day << "��, " << hour << "�ð�, " << min << "��, " << sec << "��";

	return 0;
}