#include "Q9.h"


static void copy_arr(double copy[], const double source[], int n);
static double average(double arr[], int n);
static double min(double arr[], int n);
static double max(double arr[], int n);

namespace SALES
{
	extern const int QUARTERS;

	void setSales(Sales& s, const double ar[], int n)
	{
		copy_arr(s.sales, ar, n);
		s.average = average(s.sales, n);
		s.max = max(s.sales, n);
		s.min = min(s.sales, n);
	}

	void setSales(Sales& s)
	{
		for (int i = 0; i < QUARTERS; i++)
		{
			cout << i + 1 << "번쨰 가격 입력 : ";
			cin >> s.sales[i];
		}
		s.average = average(s.sales, QUARTERS);
		s.max = max(s.sales, QUARTERS);
		s.min = min(s.sales, QUARTERS);
	}

	void showSales(const Sales& s)
	{
		cout << "가격 목록 : ";
		for (int i = 0; i < QUARTERS; i++)
			cout << s.sales[i] << " ";
		cout << endl;

		cout << "평균 : " << s.average << endl;
		cout << "최댓값 : " << s.max << endl;
		cout << "최솟값 : " << s.min << endl;
	}
}

static void copy_arr(double copy[], const double source[], int n)
{
	for (int i = 0; i < n; i++)
		copy[i] = source[i];
}

static double average(double arr[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];

	return sum / n;
}

static double min(double arr[], int n)
{
	double min = arr[0];

	for (int i = 1; i < n; i++)
		min = min < arr[i] ? min : arr[i];

	return min;
}

static double max(double arr[], int n)
{
	double max = arr[0];

	for (int i = 1; i < n; i++)
		max = max > arr[i] ? max : arr[i];

	return max;
}

