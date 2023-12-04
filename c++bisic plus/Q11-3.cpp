#include "Q11.h"
using namespace VECTOR;

int Q11_3()
{
	srand((unsigned int)time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned int steps = 0;
	double target;
	double dstep;
	unsigned int max_steps = 0, min_steps = INT_MAX, total_steps = 0;
	int try_count;

	cout << "��ǥ �Ÿ� �Է��Ͻÿ�. (�������� q) : ";

	while (cin >> target)
	{
		cout << "������ �Է��Ͻÿ� : ";
		if (!(cin >> dstep))
			break;

		cout << "�õ� Ƚ���� �Է��Ͻÿ� : ";
		if (!(cin >> try_count))
			break;

		cout << "��ǥ �Ÿ� : " << target << ", ���� : " << dstep << ", �õ� Ƚ�� : " << try_count << endl;

		for (int i = 0; i < try_count; i++)
		{
			while (result.magval() < target)
			{
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				steps++;
			}

			max_steps = max_steps > steps ? max_steps : steps;
			min_steps = min_steps < steps ? min_steps : steps;
			total_steps += steps;


			steps = 0;
			result.reset(0.0, 0.0);
		}

		cout << try_count << "ȸ �õ� ���" << endl;
		cout << "�ִ� ���� �� : " << max_steps << endl;
		cout << "�ּ� ���� �� : " << min_steps << endl;
		cout << "��� ���� �� : " << total_steps / try_count << endl;

		cout << "��ǥ �Ÿ� �Է��Ͻÿ�. (�������� q) : ";
	}


	cout << "����!" << endl;
	cin.clear();
	while (cin.get() != '\n')
		continue;

	return 0;
}