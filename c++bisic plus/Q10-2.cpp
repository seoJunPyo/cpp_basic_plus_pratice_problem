#include "Q10.h"

int Q10_2()
{
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");

	one.Show();
	one.FormalShow();
	cout << endl;

	two.Show();
	two.FormalShow();
	cout << endl;

	three.Show();
	three.FormalShow();
	cout << endl;
	
	return 0;
}