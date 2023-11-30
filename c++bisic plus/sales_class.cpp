#include "Q10.h"

Sales::Sales(const double arr[])
{
	for (int i = 0; i < QUARTERS; i++)
		sales_[i] = arr[i];

	average_ = average(sales_);
	max_ = max(sales_);
	min_ = min(sales_);
}

void Sales::setSales(const double arr[])
{
	*this = Sales(arr);
}

void Sales::setSales()
{
	double temp[QUARTERS];
	for (int i = 0; i < QUARTERS; i++)
	{
		cout << i + 1 << "���� ���� �Է� : ";
		cin >> temp[i];
	}

	*this = Sales(temp);
}

void Sales::showSales() const
{
	cout << "���� ��� : ";
	for (int i = 0; i < QUARTERS; i++)
		cout << sales_[i] << " ";
	cout << endl;

	cout << "��� : " << average_ << endl;
	cout << "�ִ� : " << max_ << endl;
	cout << "�ּڰ� : " << min_ << endl;
}

void Sales::copy_arr(double copy[], const double source[])
{
	for (int i = 0; i < QUARTERS; i++)
		copy[i] = source[i];
}

double Sales::average(double arr[])
{
	double sum = 0;
	for (int i = 0; i < QUARTERS; i++)
		sum += arr[i];

	return sum / QUARTERS;
}

double Sales::min(double arr[])
{
	double min = arr[0];

	for (int i = 1; i < QUARTERS; i++)
		min = min < arr[i] ? min : arr[i];

	return min;
}

double Sales::max(double arr[])
{
	double max = arr[0];

	for (int i = 1; i < QUARTERS; i++)
		max = max > arr[i] ? max : arr[i];

	return max;
}

