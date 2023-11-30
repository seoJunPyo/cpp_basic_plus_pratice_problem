#include "Q10.h"

int Q10_6()
{
	Move moveA(1, 2), moveB(3, 4);

	moveA.showmove();
	moveB.showmove();

	moveA = moveA.add(moveB);
	moveA.showmove();

	moveA.reset();
	moveA.showmove();

	return 0;
}