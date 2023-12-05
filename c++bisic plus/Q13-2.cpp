#include "Q13.h"
#include "cd2.h"

void Bravo(const Cd2& disk);

int Q13_2()
{
	Cd2 c1("Beatles", "Capitol", 14, 35.5);
	Classic2 c2 = Classic2("Piano Sonata in B flat, Fantsia in C", "Alfred Brendel", "Philips", 2, 57.17);
	Cd2* pcd = &c1;

	cout << "��ü�� ���� ����Ѵ� : " << endl;
	c1.Report();
	c2.Report();

	cout << "��ü�� �����ϴ� Cd* �����͸� ����Ѵ� : " << endl;
	pcd->Report();
	pcd = &c2;
	pcd->Report();

	cout << "���� �Ű������� ����Ͽ� �Լ��� ȣ���Ѵ� : " << endl;
	Bravo(c1);
	Bravo(c2);

	cout << "������ �׽�Ʈ�Ѵ� : " << endl;
	Classic2 copy;
	copy = c2;
	copy.Report();

	return 0;
}

void Bravo(const Cd2& disk)
{
	disk.Report();
}