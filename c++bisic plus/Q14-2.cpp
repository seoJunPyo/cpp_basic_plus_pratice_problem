#include "Q14.h"
#include "wine2.h"

int Q14_2()
{
	cout << "와인 이름을 입력하시오 : ";
	char lab[50];
	cin.getline(lab, 50);
	cout << "수확 년도 개수를 입력하시오 : ";
	int yrs;
	cin >> yrs;

	Wine2 holding(lab, yrs);
	holding.GetBottles();
	holding.Show();

	const int YRS = 3;
	int y[YRS] = { 1993, 1995, 1998 };
	int s[YRS] = { 48, 60, 72 };
	Wine2 more("Gushing Grape Res", YRS, y, s);
	more.Show();
	cout << more.Label() << " 전체 수량 : " << " : " << more.sum() << endl;
	cout << "종료!" << endl;

	return 0;
}
