#include "Q7.h"

static double* Fill_array(double *start, double * end);
static void Show_array(double* start, double* end);
static void Reverse_array(double* start, double* end);

int Q7_7()
{
	const int size = 5;
	double nums[size];

	double * end_pt = Fill_array(nums, &nums[size - 1]);
	Show_array(nums, end_pt);

	cout << endl;
	cout << "배열을 뒤집습니다." << endl;
	Reverse_array(nums, end_pt);
	Show_array(nums, end_pt);

	return 0;
}

static double* Fill_array(double *start, double * end)
{
	double * i;
	int idx;
	for (i = start, idx = 0; i != (end + 1); i++, idx++)
	{
		cout << idx + 1 << "번째 요소 입력 : ";
		cin >> *i;

		if (!cin.good())
			break;
	}

	return i;
}

static void Show_array(double* start, double* end)
{
	for (double * i = start; i != end; i++)
		cout << *i << endl;
}

static void Reverse_array(double* start, double* end)
{
	for (double* i = start, * j = end - 1; i < j; i++, j--)
	{
		double temp = *i;
		*i = *j;
		*j = temp;
	}
}