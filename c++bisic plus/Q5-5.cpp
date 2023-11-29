#include "Q5.h"

int Q5_5()
{
	const int MAX_MONTH = 12;
	int monthly_sales[MAX_MONTH];
	int yearly_sales = 0;
	string month_str[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec" };

	for (int i = 0; i < MAX_MONTH; i++)
	{
		cout << month_str[i] << "의 판매량 입력 : ";
		cin >> monthly_sales[i];
		yearly_sales += monthly_sales[i];
	}

	cout << "연간 총 판매량은 " << yearly_sales << "권 입니다.\n";

	return 0;
}