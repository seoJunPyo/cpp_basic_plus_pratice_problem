#include "Q3.h"

int Q3_3()
{
	int angle, min, sec;
	const int ANGLE_PER_MIN = 60;
	const int MIN_PER_SEC = 60;

	cout << "������ ��, ��, �� ������ �Է��Ͻÿ�.\n";
	cout << "����, ������ �Է��Ͻÿ� : ";
	cin >> angle;
	cout << "������, �а��� �Է��Ͻÿ� : ";
	cin >> min;
	cout << "������, �ʰ��� �Է��Ͻÿ� : ";
	cin >> sec;
	cout << angle << "��, " << min << "��, " << sec << "��, = " << angle + ((double)min / ANGLE_PER_MIN) + ((double(sec) / MIN_PER_SEC) / MIN_PER_SEC) << "��\n";

	return 0;
}