#include "queue.h"
#include <iostream>

using namespace std;

bool new_customer(double x);

int Q12_5()
{
	srand((unsigned int)time(0));
	cout << "��� ���� : ���� ������ ATM" << endl;
	cout << "ť�� �ִ� ���̸� �Է��Ͻʽÿ�. : ";
	int qs;
	cin >> qs;
	Queue line(qs);

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
		cout << "ť�� ���� �� �� �� : " << customers << endl;
		cout << "�ŷ��� ó���� �� �� : " << served << endl;
		cout << "���ư� �� �� : " << turnaways << endl;
		cout << "��� ť�� ���� : ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout.setf(ios_base::showpoint);
		cout << (double)sum_line / cyclelimit << endl;
		cout << "��� ��� �ð� : " << (double)line_wait / served << "��" << endl;
	}
	else
	{
		cout << "���� �Ѹ� �����ϴ�." << endl;
	}

	cout << "�Ϸ�!" << endl;;

	return 0;
}

bool new_customer(double x)
{
	return (rand() * x / RAND_MAX) < 1;
}