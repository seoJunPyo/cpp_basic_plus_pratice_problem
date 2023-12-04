#include "queue.h"
#include <iostream>

using namespace std;

bool new_customer(double x);

int Q12_5()
{
	srand((unsigned int)time(0));
	cout << "사례 연구 : 히서 은행의 ATM" << endl;
	cout << "큐의 최대 길이를 입력하십시오. : ";
	int qs;
	cin >> qs;
	Queue line(qs);

	cout << "시뮬레이션 시간 수를 입력하십시오. : ";
	int hours;
	cin >> hours;
	long cyclelimit = 60 * hours;

	cout << "시간당 평균 고객 수를 입력하십시오. : ";
	double perhour;
	cin >> perhour;
	double min_per_cust = 60 / perhour;

	Item temp;
	long turnaways = 0;
	long customers = 0;
	long served = 0;
	long sum_line = 0;
	int wait_time = 0;
	long line_wait = 0;

	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (new_customer(min_per_cust))
		{
			if (line.isfull())
				turnaways++;
			else
			{
				customers++;
				temp.set(cycle);
				line.enqueue(temp);
			}
		}
		if (wait_time <= 0 && !line.isempty())
		{
			line.dequeue(temp);
			wait_time = temp.ptime();
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time > 0)
			wait_time--;

		sum_line += line.queue_count();
	}

	if (customers > 0)
	{
		cout << "큐에 줄을 선 고객 수 : " << customers << endl;
		cout << "거래를 처리한 고객 수 : " << served << endl;
		cout << "돌아간 고객 수 : " << turnaways << endl;
		cout << "평균 큐의 길이 : ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout.setf(ios_base::showpoint);
		cout << (double)sum_line / cyclelimit << endl;
		cout << "평균 대기 시간 : " << (double)line_wait / served << "분" << endl;
	}
	else
	{
		cout << "고객이 한명도 없습니다." << endl;
	}

	cout << "완료!" << endl;;

	return 0;
}

bool new_customer(double x)
{
	return (rand() * x / RAND_MAX) < 1;
}