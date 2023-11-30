#include "Q9.h"

int Q9_4()
{
	using SALES::Sales;

	Sales S1, S2;
	double sample[4] = { 20.0, 30.5, 32.5, 24.9 };

	SALES::setSales(S1, sample, 4);
	SALES::setSales(S2);

	SALES::showSales(S1);
	SALES::showSales(S2);

	return 0;
}