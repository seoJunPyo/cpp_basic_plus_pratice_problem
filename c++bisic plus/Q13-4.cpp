#include "Q13.h"
#include "port.h"

int Q13_4()
{
	Port pt1("Gallo", "tawny", 20);
	Port pt2("Chateau Haut Brion", "vintage", 30);
	Port pt3("Romanee Conti", "ruby", 40);

	Port tport;
	tport.Show();
	cout << endl;

	tport = pt1;
	tport.Show();
	cout << endl;

	cout << pt2;
	cout << endl;

	cout << pt3;
	cout << endl;

	pt3 += 3;
	cout << pt3;
	cout << endl;

	pt3 -= 3;
	cout << pt3;
	cout << endl << endl;

	// VintagePort Ŭ���� �׽�Ʈ
	VintagePort vpt1("Chateau Haut Brion", "vintage", 30, "The Noble", 1950);
	VintagePort vpt2("Chambertin", "vintage", 17, "Old Velvet", 1912);

	VintagePort tvport;
	tvport.Show();
	cout << endl;

	tvport = vpt1;
	tvport.Show();
	cout << endl;

	cout << vpt2;
	cout << endl;

	vpt2 += 3;
	cout << vpt2;
	cout << endl;

	vpt2 -= 3;
	cout << vpt2;
	cout << endl << endl;

	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}