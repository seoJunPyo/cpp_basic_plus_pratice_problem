#include "Q2.h"

double LY_to_Au(double LY);
int Q2_6()
{
	double LY;

	cout << "���� ���� �Է��ϰ� Enter Ű�� �����ʽÿ� : ";
	cin >> LY;
	cout << LY << " ������ " << LY_to_Au(LY) << " õ�� �����Դϴ�.";

	return 0;
}

double LY_to_Au(double LY)
{
	return LY * 63240;
}