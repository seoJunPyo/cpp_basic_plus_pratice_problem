#include "Q7.h"

static double harmory_average(double, double);

int Q7_1()
{
	double numA, numB;

	cout << "두 수 입력 : ";
	while ((cin >> numA) && numA != 0 && (cin >> numB) && numB != 0)
	{
		cout << numA << "와 " << numB << "의 조화 평균은 " << harmory_average(numA, numB) << "입니다" << endl;
		cout << "두 수 입력 : ";
	}

	cout << "종료!" << endl;

	return 0;
}

static double harmory_average(double numA, double numB)
{
	return 2.0 * numA * numB / (numA + numB);
}