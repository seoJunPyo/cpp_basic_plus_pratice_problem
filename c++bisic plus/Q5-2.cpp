#include "Q5.h"

int Q5_2()
{
	const int A_SIZE = 101;
	array<long double, A_SIZE> factorials;

	factorials[0] = factorials[1] = 1;

	for (int i = 2; i < A_SIZE; i++)
		factorials[i] = i * factorials[i - 1];
	
	cout << "100! = " << factorials[100] << endl;

	return 0;
}
