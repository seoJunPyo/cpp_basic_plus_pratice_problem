#include "Q7.h"

static int input_score(int scores[], int size);
static void show_scores(int scores[], int size);
static double average_score(int scores[], int size);

int Q7_2()
{
	const int size = 10;
	int scores[size];

	int input_count = input_score(scores, size);
	show_scores(scores, input_count);
	cout << "������ ����� " << average_score(scores, input_count) << "�Դϴ�." << endl;

	return 0;
}

static int input_score(int scores[], int size)
{
	int count, temp;


	for (count = 0; count < size; count++)
	{
		cout << count + 1 << "��° ���ھ� �Է� : (�Է��� ��ġ���� -1) ";
		cin >> temp;

		if (temp < 0)
		{
			cout << "�Է��� �����մϴ�." << endl;
			break;
		}

		scores[count] = temp;
	}

	return count;
}

static void show_scores(int scores[], int size)
{
	for (int i = 0; i < size; i++)
		cout << scores[i] << " ";
}

static double average_score(int scores[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
		sum += scores[i];

	return (double)sum / size;
}