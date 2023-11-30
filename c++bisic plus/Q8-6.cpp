#include "Q8.h"

template <class T>
T maxn(T arr[], int n);

template <> const char* maxn(const char* arr[], int n);

int Q8_6()
{
	int i_nums[] = { 2, 3, 5, 6, 1, 4 };
	double d_nums[] = { 2.2, 3.3, 4.4, 1.1 };
	const char* strs[] = { "hi", "hello", "bye", "hello world", "hihi" };

	cout << maxn(i_nums, 6) << endl;
	cout << maxn(d_nums, 4) << endl;
	cout << maxn(strs, 5) << endl;

	return 0;
}


template <class T>
T maxn(T arr[], int n)
{
	if (n < 0)
		return 0;

	T max = arr[0];

	for (int i = 0; i < n; i++)
		max = max > arr[i] ? max : arr[i];

	return max;
}


template <> const char* maxn(const char* arr[], int n)
{
	if (n < 0)
		return 0;

	const char* max = arr[0];
	for (int i = 0; i < n; i++)
		max = strlen(max) > strlen(arr[i]) ? max : arr[i];

	return max;
}