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
		cout << "직종을 입력하십시오 : " << endl;
		cout << "w: 웨이터     s: 가수    t: 가수 겸 웨이터   q: 종료" << endl;
		cin >> choice;

		while (strchr("wstq", choice) == NULL)
		{
			cout << "w, s, t, q 중에서 하나를 선택하십시오 : ";
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