#include "Q3.h"

int Q3_1()
{
	int tall_cm;
	const double CM_PER_MITER = 0.01;

	cout << "Ű�� ��Ƽ���� ������ �Է� : ___\b\b\b";
	cin >> tall_cm;
	cout << tall_cm << "��Ƽ���ʹ� " << tall_cm * CM_PER_MITER << "�����Դϴ�.";

	return 0;
}