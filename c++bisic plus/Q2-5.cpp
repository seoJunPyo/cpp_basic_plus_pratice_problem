#include "Q2.h"

static double C_To_F(double C);

int Q2_5()
{
	int C;

	cout << "���� �µ��� �Է��ϰ� Enter Ű�� �����ʽÿ� : ";
	cin >> C;
	cout << "���� " << C << "���� ȭ���� " << C_To_F(C) << "�� �Դϴ�.";

	return 0;
}

static double C_To_F(double C)
{
	return 1.8 * C + 32.0;
}