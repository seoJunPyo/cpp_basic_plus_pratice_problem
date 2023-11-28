#include "Q3.h"

int Q3_5()
{
	long long population;
	long long population_USA;

	cout << "세계 인구수를 입력하시오 : ";
	cin >> population;
	cout << "미국의 인구수 입력하시오 : ";
	cin >> population_USA;
	cout << "세계 인구수에서 미국이 차지하는 비중은 " << ((long double)population_USA / population) * 100 << "%이다";

	return 0;
}