#include "Q5.h"

int Q5_3()
{
	int num, sum = 0;

	cout << "더할 숫자 입력 : ";
	while ((cin >> num) && num != 0)
	{
		sum += num;
		cout << "더할 숫자 입력 : ";
	}

	cout << "총 누계는 " << sum << "입니다.\n";

	return 0;
}