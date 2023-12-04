#include "Q12.h"

int Q12_1()
{
	Cow a = Cow("blue", "archive", 12);
	Cow b;
	Cow c = { "jun", "coffe", 20 };
	Cow d = c;
	Cow e = Cow(c);
	b = a;

	a.ShowCow();
	b.ShowCow();
	c.ShowCow();
	d.ShowCow();
	e.ShowCow();

	return 0;
}