#include "Q11.h"

int Q11_6()
{
	Stonewt st[6] =
	{
		Stonewt(10, 2),
		Stonewt(30, 32),
		Stonewt(102.25),
	};

	int stn;
	double lbs;
	char choice;

	for (int i = 3; i < 6; i++)
	{
		cout << i + 1 << "번째 요소 입력..." << endl;
		cout << "a) 스톤-파운드 단위        b) 파운드 단위" << endl;
		cout << "선택 : ";

		while (cin >> choice && choice != 'a' && choice != 'b')
		{
			cout << "유효하지 않은 선택입니다." << endl;
			cout << "다시 선택 : ";
		}

		switch (choice)
		{
		case 'a':
			cout << "스톤-파운드 단위 입력 : ";
			cin >> stn >> lbs;
			st[i] = Stonewt(stn, lbs);
			break;
		case 'b':
			cout << "파운드 단위 입력 : ";
			cin >> lbs;
			st[i] = Stonewt(lbs);
			break;
		}
	}

	Stonewt eleven = Stonewt(11, 0);
	Stonewt max, min;
	int count = 0;

	for (int i = 0; i < 6; i++)
	{
		if (i == 0)
		{
			max = st[i];
			min = st[i];
		}
		else
		{
			max = max > st[i] ? max : st[i];
			min = min < st[i] ? min : st[i];
		}

		if (st[i] >= eleven)
			count++;
	}

	cout << "최댓값 : " << max << endl;
	cout << "최솟값 : " << min << endl;
	cout << "11스톤보다 크거나 같은 요소 갯수 : " << count << endl;

	return 0;
}