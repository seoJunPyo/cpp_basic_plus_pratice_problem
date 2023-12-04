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

	cout << "목표 거리 입력하시오. (끝내려면 q) : ";

	while (cin >> target)
	{
		cout << "보폭을 입력하시오 : ";
		if (!(cin >> dstep))
			break;

		cout << "시도 횟수를 입력하시오 : ";
		if (!(cin >> try_count))
			break;

		cout << "목표 거리 : " << target << ", 보폭 : " << dstep << ", 시도 횟수 : " << try_count << endl;

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

		cout << try_count << "회 시도 결과" << endl;
		cout << "최대 걸음 수 : " << max_steps << endl;
		cout << "최소 걸음 수 : " << min_steps << endl;
		cout << "평균 걸음 수 : " << total_steps / try_count << endl;

		cout << "목표 거리 입력하시오. (끝내려면 q) : ";
	}


	cout << "종료!" << endl;
	cin.clear();
	while (cin.get() != '\n')
		continue;

	return 0;
}