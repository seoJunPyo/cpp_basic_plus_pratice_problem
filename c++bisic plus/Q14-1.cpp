#include "Q14.h"
#include "wine.h"

int Q14_1()
{
	cout << "���� �̸��� �Է��Ͻÿ� : ";
	char lab[50];
	cin.getline(lab, 50);
	cout << "��Ȯ �⵵ ������ �Է��Ͻÿ� : ";
	int yrs;
	cin >> yrs;

	Wine holding(lab, yrs);
	holding.GetBottles();
	holding.Show();

	const int YRS = 3;
	int y[YRS] = { 1993, 1995, 1998 };
	int s[YRS] = { 48, 60, 72 };
	Wine more("Gushing Grape Res", YRS, y, s);
	more.Show();
	cout << more.Label() << " ��ü ���� : " << " : " << more.sum() << endl;
	cout << "����!" << endl;

	return 0;
}
