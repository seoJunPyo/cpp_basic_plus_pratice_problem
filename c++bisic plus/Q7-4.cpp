#include "Q7.h"

static long double probability(unsigned numbers, unsigned picks);

int Q7_4()
{
	long double first, second;
	unsigned total, choice;

	cout << "ù ��° ������ ���� �� �ִ� Ƚ���� �Է��ϼ���. : ";
	while ((cin >> total >> choice) && choice <= total)
	{
		first = probability(total, choice);

		cout << "�� ��° ������ ���� �� �ִ� Ƚ���� �Է��ϼ���. : ";
		while (!((cin >> total >> choice) && choice <= total))
			cout << "�߸��� �Է��Դϴ�. �ٽ� �Է� : ";

		second = probability(total, choice);

		cout << "����� �̱� Ȯ���� " << (first * second) * 100 << "%�Դϴ�." << endl;
		cout << "ù ��° ������ ���� �� �ִ� Ƚ���� �Է��ϼ���. : ";
 	}

	cout << "����";
	
	return 0;
}

static long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * (p / n);

	return result;
}