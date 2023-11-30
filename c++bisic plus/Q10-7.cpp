#include "Q10.h"

int Q10_7()
{
	Plorg plorgA;
	Plorg plorgB("blue archive blue archive blue archive blue archive", 20);

	plorgA.show();
	plorgB.show();
	plorgA.setCI(100);
	plorgA.show();

	return 0;
}