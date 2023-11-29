#include "Q5.h"

int Q5_1()
{
	int numA, numB;
	int sum = 0;

	cout << "두 개의 정수 입력 : ";
	cin >> numA >> numB;
	
	for (int i = numA; i <= numB; i++)
		sum += i;

	cout << numA << "와 " << numB << " 사이의 있는 모든 정수의 합은 " << sum << "이다\n";

	return 0;
}