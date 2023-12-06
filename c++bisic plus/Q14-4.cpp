#include "Q14.h"
#include "person_der.h"

int Q14_4()
{
	Person_Base* p[5] = { 0 };
	int i;
	for (i = 0; i < 5; i++)
	{
		char choice;
		cout << "당신의 유형은? : " << endl;;
		cout << "g) Gunslinger    p) PokerPlayer    b) BadDude     q) Quit" << endl;;
		cin >> choice;

		while (strchr("gpbq", choice) == NULL)
		{
			cout << " g, p, b, q 중에서 하나를 선택하십시오 : " << endl;;
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

	cout << "사람 현황은 이렇습니다 : " << endl;
	for (int j = 0; j < i; j++)
	{
		cout << endl;
		p[i]->Show();
	}

	cout << "종료!" << endl;

	return 0;
} 