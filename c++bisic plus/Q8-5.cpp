#include "Q8.h"

template <class T>
T max5(T arr[]);

int Q8_5()
{
	int i_nums[5] = { 1, 2, 3, 4, 5 };
	double d_nums[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

	cout << max5(i_nums) << endl;
	cout << max5(d_nums) << endl;

	return 0;
}


template <class T>
T max5(T arr[])
{
	T max = arr[0];

	for (int i = 1; i < 5; i++)
		max = max > arr[i] ? max : arr[i];

	return max;
}