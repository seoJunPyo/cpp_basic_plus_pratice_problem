#include "Q7.h"

static double harmory_average(double, double);

int Q7_1()
{
	double numA, numB;

	cout << "�� �� �Է� : ";
	while ((cin >> numA) && numA != 0 && (cin >> numB) && numB != 0)
	{
		cout << numA << "�� " << numB << "�� ��ȭ ����� " << harmory_average(numA, numB) << "�Դϴ�" << endl;
		cout << "�� �� �Է� : ";
	}

	cout << "����!" << endl;

	return 0;
}

static double harmory_average(double numA, double numB)
{
	return 2.0 * numA * numB / (numA + numB);
}