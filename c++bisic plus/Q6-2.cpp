#include "Q6.h"

int Q6_2()
{
	double donations[10];
	int input_count = 0;
	
	for (int i = 0; i < 10; i++)
	{
		cin >> donations[i];

		if (!cin.good())
			break;

		input_count++;
	}

	double sum = 0;

	for (int i = 0; i < input_count; i++)
		sum += donations[i];

	double average = sum / input_count;
	int over_average_count = 0;

	for (int i = 0; i < input_count; i++)
		if (average < donations[i])
			over_average_count++;

	cout << "기부금의 평균은 " << average << "원이고, 기부금의 평균보다 더 기부한 사람은 " << over_average_count << "명입니다.\n";

	return 0;
}