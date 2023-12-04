#include "queue.h"
#include <iostream>

using namespace std;

bool new_customer(double x);

int Q12_6()
{
	srand((unsigned int)time(0));
	cout << "��� ���� : ���� ������ ATM" << endl;
	cout << "ť�� �ִ� ���̸� �Է��Ͻʽÿ�. : ";
	int qs;
	cin >> qs;
	Queue line1(qs);
	Queue line2(qs);

	cout << "�ùķ��̼� �ð� ���� �Է��Ͻʽÿ�. : ";
	int hours;
	cin >> hours;
	long cyclelimit = 60 * hours;

	cout << "�ð��� ��� �� ���� �Է��Ͻʽÿ�. : ";
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
		cout << "ť�� ���� �� �� �� : " << customers << endl;
		cout << "�ŷ��� ó���� �� �� : " << served << endl;
		cout << "���ư� �� �� : " << turnaways << endl;
		cout << "��� ù��° ť�� ���� : ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout.setf(ios_base::showpoint);
		cout << (double)sum_line1 / cyclelimit << endl;
		cout << "��� �ι�° ť�� ���� : ";
		cout << (double)sum_line2 / cyclelimit << endl;
		cout << "ù��° ť ��� ��� �ð� : " << (double)line_wait1 / served << "��" << endl;
		cout << "�ι�° ť ��� ��� �ð� : " << (double)line_wait2 / served << "��" << endl;
	}
	else
	{
		cout << "���� �Ѹ� �����ϴ�." << endl;
	}

	cout << "�Ϸ�!" << endl;;

	return 0;
}

static bool new_customer(double x)
{
	return (rand() * x / RAND_MAX) < 1;
}