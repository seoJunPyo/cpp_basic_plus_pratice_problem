#include "queue.h"
#include <iostream>

using namespace std;

bool new_customer(double x);

int Q12_6()
{
	srand((unsigned int)time(0));
	cout << "사례 연구 : 히서 은행의 ATM" << endl;
	cout << "큐의 최대 길이를 입력하십시오. : ";
	int qs;
	cin >> qs;
	Queue line1(qs);
	Queue line2(qs);

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
	long sum_line1 = 0;
	long sum_line2 = 0;
	int wait_time1 = 0;
	int wait_time2 = 0;
	long line_wait1 = 0;
	long line_wait2 = 0;

	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (new_customer(min_per_cust))
		{
			if (line1.isfull() && line2.isfull())
				turnaways++;
			else if (line2.isfull() || line1.queue_count() <= line2.queue_count())
			{
				customers++;
				temp.set(cycle);
				line1.enqueue(temp);
			}
			else if (line1.isfull() || line1.queue_count() > line2.queue_count())
			{
				customers++;
				temp.set(cycle);
				line2.enqueue(temp);
			}
		}
		if (wait_time1 <= 0 && !line1.isempty())
		{
			line1.dequeue(temp);
			wait_time1 = temp.ptime();
			line_wait1 += cycle - temp.when();
			served++;
		}

		if (wait_time2 <= 0 && !line2.isempty())
		{
			line1.dequeue(temp);
			wait_time2 = temp.ptime();
			line_wait2 += cycle - temp.when();
			served++;
		}

		if (wait_time1 > 0)
			wait_time1--;

		if (wait_time2 > 0)
			wait_time2--;

		sum_line1 += line1.queue_count();
		sum_line2 += line2.queue_count();
	}

	if (customers > 0)
	{
		cout << "큐에 줄을 선 고객 수 : " << customers << endl;
		cout << "거래를 처리한 고객 수 : " << served << endl;
		cout << "돌아간 고객 수 : " << turnaways << endl;
		cout << "평균 첫번째 큐의 길이 : ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout.setf(ios_base::showpoint);
		cout << (double)sum_line1 / cyclelimit << endl;
		cout << "평균 두번째 큐의 길이 : ";
		cout << (double)sum_line2 / cyclelimit << endl;
		cout << "첫번째 큐 평균 대기 시간 : " << (double)line_wait1 / served << "분" << endl;
		cout << "두번째 큐 평균 대기 시간 : " << (double)line_wait2 / served << "분" << endl;
	}
	else
	{
		cout << "고객이 한명도 없습니다." << endl;
	}

	cout << "완료!" << endl;;

	return 0;
}

static bool new_customer(double x)
{
	return (rand() * x / RAND_MAX) < 1;
}