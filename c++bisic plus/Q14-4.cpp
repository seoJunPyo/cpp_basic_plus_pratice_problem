#include "Q14.h"
#include "person_der.h"

int Q14_4()
{
	Person_Base* p[5] = { 0 };
	int i;
	for (i = 0; i < 5; i++)
	{
		char choice;
		cout << "����� ������? : " << endl;;
		cout << "g) Gunslinger    p) PokerPlayer    b) BadDude     q) Quit" << endl;;
		cin >> choice;

		while (strchr("gpbq", choice) == NULL)
		{
			cout << " g, p, b, q �߿��� �ϳ��� �����Ͻʽÿ� : " << endl;;
			cin >> choice;
		}

		if (choice == 'q')
			break;

		switch (choice)
		{
		case 'g' :
			p[i] = new Gunslinger;
			break;
		case 'p':
			p[i] = new PokerPlayer;
			break;
		case 'b':
			p[i] = new BadDude;
			break;
		}

		cin.get();
		p[i]->Set();
	}

	cout << "��� ��Ȳ�� �̷����ϴ� : " << endl;
	for (int j = 0; j < i; j++)
	{
		cout << endl;
		p[i]->Show();
	}

	cout << "����!" << endl;

	return 0;
} 