#include "Q13.h"
#include "cd.h"

void Bravo(const Cd& disk);

int Q13_1()
{
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = Classic("Piano Sonata in B flat, Fantsia in C", "Alfred Brendel", "Philips", 2, 57.17);
	Cd* pcd = &c1;

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
	Classic copy;
	copy = c2;
	copy.Report();

	return 0;
}

void Bravo(const Cd& disk)
{
	disk.Report();
}