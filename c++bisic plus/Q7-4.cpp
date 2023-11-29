#include "Q7.h"

static long double probability(unsigned numbers, unsigned picks);

int Q7_4()
{
	long double first, second;
	unsigned total, choice;

	cout << "첫 번째 범위와 뽑을 수 있는 횟수를 입력하세요. : ";
	while ((cin >> total >> choice) && choice <= total)
	{
		first = probability(total, choice);

		cout << "두 번째 범위와 뽑을 수 있는 횟수를 입력하세요. : ";
		while (!((cin >> total >> choice) && choice <= total))
			cout << "잘못된 입력입니다. 다시 입력 : ";

		second = probability(total, choice);

		cout << "당신이 이길 확률은 " << (first * second) * 100 << "%입니다." << endl;
		cout << "첫 번째 범위와 뽑을 수 있는 횟수를 입력하세요. : ";
 	}

	cout << "종료";
	
	return 0;
}

static long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * (p / n);

	return result;
}