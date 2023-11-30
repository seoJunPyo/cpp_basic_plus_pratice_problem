#include "Q10.h"

int Q10_4()
{
	Sales S1, S2;
	double sample[4] = { 20.0, 30.5, 32.5, 24.9 };
	S1.setSales(sample);
	S2.setSales();

	S1.showSales();
	S2.showSales();

	return 0;
}