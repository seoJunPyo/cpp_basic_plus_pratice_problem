#include "Q11.h"

const char* FILE_NAME = "step.txt";
using namespace VECTOR;

int Q11_1()
{
	ofstream wFile;
	wFile.open(FILE_NAME);

	if (!wFile.is_open())
	{
		cerr << FILE_NAME << "������ �� �� �����ϴ�." << endl;
		exit(EXIT_FAILURE);
	}

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

		wFile << "��ǥ �Ÿ� : " << target << ", ���� : " << dstep << endl;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;

			wFile << steps << ". " << result << endl;
		}
		wFile << steps << "������ ���� �� �ְ��� ���� ��ġ : " << endl;
		wFile << result << endl;
		wFile << "������ ��տ��� ��� ��� �Ÿ� = " << result.magval() / steps << endl;

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