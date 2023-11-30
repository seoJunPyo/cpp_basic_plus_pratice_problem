#include "Q10.h"

int Q10_3()
{
	Golf golfers[4];

	for (int i = 0; i < 4; i++)
		golfers[i].setgolf();

	golfers[2].handicap(100);
	
	for (int i = 0; i < 4; i++)
		golfers[i].showgolf();

	return 0;
}