#include "Q14.h"
#include "queuetp.h"
#include "worker.h"

static void show(Worker * wt);


int Q14_3()
{
	QueueTp<Worker *> lolas;

	while (true)
	{
		char choice;
		cout << "������ �Է��Ͻʽÿ� : " << endl;
		cout << "w: ������     s: ����    t: ���� �� ������   q: ����" << endl;
		cin >> choice;

		while (strchr("wstq", choice) == NULL)
		{
			cout << "w, s, t, q �߿��� �ϳ��� �����Ͻʽÿ� : ";
			cin >> choice;
		}

		while (cin.get() != '\n')
			continue;

		if (choice == 'q')
			break;

		Worker* temp = nullptr;

		switch (choice)
		{
		case 'w' :
			temp = new Waiter();
			break;
		case 's':
			temp = new Singer();
			break;
		case 't':
			temp = new SingingWaiter();
			break;
		}

		if (temp != nullptr)
			(*temp).Set();
		lolas.Enqueue(temp);
	}

	lolas.Show(show);

	return 0;
}

static void show(Worker * wt)
{
	wt->Show();
}