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
		cout << i + 1 << "��° ��� �Է�..." << endl;
		cout << "a) ����-�Ŀ�� ����        b) �Ŀ�� ����" << endl;
		cout << "���� : ";

		while (cin >> choice && choice != 'a' && choice != 'b')
		{
			cout << "��ȿ���� ���� �����Դϴ�." << endl;
			cout << "�ٽ� ���� : ";
		}

		switch (choice)
		{
		case 'a':
			cout << "����-�Ŀ�� ���� �Է� : ";
			cin >> stn >> lbs;
			st[i] = Stonewt(stn, lbs);
			break;
		case 'b':
			cout << "�Ŀ�� ���� �Է� : ";
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

	cout << "�ִ� : " << max << endl;
	cout << "�ּڰ� : " << min << endl;
	cout << "11���溸�� ũ�ų� ���� ��� ���� : " << count << endl;

	return 0;
}