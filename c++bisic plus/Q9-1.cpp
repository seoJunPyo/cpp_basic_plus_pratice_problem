#include "Q9.h"

const int Size = 5;

int Q9_1()
{
	golf golfers[Size];
	char name[Len];
	int hc;

	for (int i = 0; i < Size; i++)
	{
		cout << "�̸� �Է� : ";
		cin.getline(name, Len);
		if (name[0] == '\0')
			break;

		cout << "�ڵ�ĸ �Է� : ";
		cin >> hc;

		setgolf(golfers[i], name, hc);
	}

	for (int i = 0; i < Size; i++)
	{
		cout << i + 1 << "��° : " << endl;
		showgolf(golfers[i]);
	}

	return 0;
}