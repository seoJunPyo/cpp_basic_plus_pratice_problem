#include "Q9.h"

const int Size = 5;

int Q9_1()
{
	golf golfers[Size];
	char name[Len];
	int hc;

	for (int i = 0; i < Size; i++)
	{
		cout << "이름 입력 : ";
		cin.getline(name, Len);
		if (name[0] == '\0')
			break;

		cout << "핸디캡 입력 : ";
		cin >> hc;

		setgolf(golfers[i], name, hc);
	}

	for (int i = 0; i < Size; i++)
	{
		cout << i + 1 << "번째 : " << endl;
		showgolf(golfers[i]);
	}

	return 0;
}