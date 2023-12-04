#include "Q11.h"

const char* FILE_NAME = "step.txt";
using namespace VECTOR;

int Q11_1()
{
	ofstream wFile;
	wFile.open(FILE_NAME);

	if (!wFile.is_open())
	{
		cerr << FILE_NAME << "파일을 열 수 없습니다." << endl;
		exit(EXIT_FAILURE);
	}

	srand((unsigned int)time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned int steps = 0;
	double target;
	double dstep;

	cout << "목표 거리 입력하시오. (끝내려면 q) : ";
	while (cin >> target)
	{
		cout << "보폭을 입력하시오 : ";
		if (!(cin >> dstep))
			break;

		wFile << "목표 거리 : " << target << ", 보폭 : " << dstep << endl;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;

			wFile << steps << ". " << result << endl;
		}
		wFile << steps << "걸음을 걸은 후 솔고래의 현재 위치 : " << endl;
		wFile << result << endl;
		wFile << "걸음당 기둥에서 벗어난 평균 거리 = " << result.magval() / steps << endl;

		steps = 0;
		result.reset(0.0, 0.0);
		
		cout << "목표 거리 입력하시오. (끝내려면 q) : ";
	}
	

	cout << "종료!" << endl;
	cin.clear();
	while (cin.get() != '\n')
		continue;

	return 0;
}