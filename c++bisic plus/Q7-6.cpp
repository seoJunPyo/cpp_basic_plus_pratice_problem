#include "Q7.h"

static int Fill_array(double nums[], int size);
static void Show_array(double nums[], int size);
static void Reverse_array(double nums[], int size);

int Q7_6()
{
	const int size = 10;
	double nums[size];

	int input_count = Fill_array(nums, size);
	Show_array(nums, input_count);

	cout << endl;
	cout << "배열을 뒤집습니다." << endl;
	Reverse_array(nums, input_count);
	Show_array(nums, input_count);

	return 0;
}

static int Fill_array(double nums[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		cout << i + 1 << "번째 요소 입력 : ";
		cin >> nums[i];

		if (!cin.good())
			break;
	}

	return i;
}

static void Show_array(double nums[], int size)
{
	for (int i = 0; i < size; i++)
		cout << nums[i] << endl;
}

static void Reverse_array(double nums[], int size)
{
	for (int i = 0, j = size - 1; i < j; i++, j--)
	{
		double temp = nums[i];
		nums[i] = nums[j];
		nums[j] = temp;
	}
}