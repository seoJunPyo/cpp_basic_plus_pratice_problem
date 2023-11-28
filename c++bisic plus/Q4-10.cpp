#include "Q4.h"

int Q4_10()
{
	const int SIZE = 3;
	array<double, SIZE> records;
	double sum = 0;

	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << "번째 기록 입력 : ";
		cin >> records[i];
		sum += records[i];
	}

	cout << SIZE << "회 측정 결과의 평균은 " << sum / SIZE << "입니다.\n";

	return 0;
}