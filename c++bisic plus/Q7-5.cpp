#include "Q7.h"
static unsigned long long factorial(int n);

int Q7_5()
{
	int n;

	cout << "팩토리얼을 구하고 싶은 정수 : ";
	while ((cin >> n) && n >= 0)
	{
		cout << n << "! = " << factorial(n) << endl;
		cout << "팩토리얼을 구하고 싶은 정수 : ";
	}

	return 0;
}

static unsigned long long factorial(int n)
{
	unsigned long long result = 1;

	for (int i = 2; i <= n; i++)
		result *= i;

	return result;
}