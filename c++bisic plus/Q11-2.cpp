#include "Q11.h"
using namespace VECTOR;

int Q11_2()
{
	srand((unsigned int)time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned int steps = 0;
	double target;
	double dstep;

	cout << "��ǥ �Ÿ� �Է��Ͻÿ�. (�������� q) : ";
	while (cin >> target)
	{
		cout << "������ �Է��Ͻÿ� : ";
		if (!(cin >> dstep))
			break;

		cout << "��ǥ �Ÿ� : " << target << ", ���� : " << dstep << endl;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		cout << steps << "������ ���� �� �ְ��� ���� ��ġ : " << endl;
		cout << result << endl;
		cout << "������ ��տ��� ��� ��� �Ÿ� = " << result.magval() / steps << endl;

		steps = 0;
		result.reset(0.0, 0.0);

		cout << "��ǥ �Ÿ� �Է��Ͻÿ�. (�������� q) : ";
	}


	cout << "����!" << endl;
	cin.clear();
	while (cin.get() != '\n')
		continue;

	return 0;
}