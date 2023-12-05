#include "Q13.h"
#include "cd2.h"

void Bravo(const Cd2& disk);

int Q13_2()
{
	Cd2 c1("Beatles", "Capitol", 14, 35.5);
	Classic2 c2 = Classic2("Piano Sonata in B flat, Fantsia in C", "Alfred Brendel", "Philips", 2, 57.17);
	Cd2* pcd = &c1;

	cout << "객체를 직접 사용한다 : " << endl;
	c1.Report();
	c2.Report();

	cout << "객체를 지시하는 Cd* 포인터를 사용한다 : " << endl;
	pcd->Report();
	pcd = &c2;
	pcd->Report();

	cout << "참조 매개변수를 사용하여 함수를 호출한다 : " << endl;
	Bravo(c1);
	Bravo(c2);

	cout << "대입을 테스트한다 : " << endl;
	Classic2 copy;
	copy = c2;
	copy.Report();

	return 0;
}

void Bravo(const Cd2& disk)
{
	disk.Report();
}