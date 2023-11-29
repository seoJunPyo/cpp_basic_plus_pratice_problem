#include "Q5.h"

int Q5_6()
{
	const int MAX_MONTH = 12;
	const int MAX_YEAR = 3;

	int monthly_sales[MAX_YEAR][MAX_MONTH];
	int yearly_sales[MAX_YEAR];
	string month_str[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec" };

	for (int i = 0; i < MAX_YEAR; i++)
	{
		yearly_sales[i] = 0;
		for (int j = 0; j < MAX_MONTH; j++)
		{
			cout << i + 1 << "년차, " << month_str[j] << "의 판매량 입력 : ";
			cin >> monthly_sales[i][j];
			yearly_sales[i] += monthly_sales[i][j];
		}
	}

	for (int i = 0; i < MAX_YEAR; i++)
		cout << i + 1 << "년차 총 판매량은 " << yearly_sales[i] << "입니다.\n";

	cout << "2년차와 3년차의 누적 판매량은 " << yearly_sales[1] + yearly_sales[2] << "입니다.\n";

	return 0;
}

