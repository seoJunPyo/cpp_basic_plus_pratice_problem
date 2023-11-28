#include "Q2.h"

static void Three();
static void See();

int Q2_3()
{
	Three();
	Three();
	See();
	See();
	return 0;
}

static void Three()
{
	cout << "Three blind mice\n";
}

static void See()
{
	cout << "See how they run\n";
}