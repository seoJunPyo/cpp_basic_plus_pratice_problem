#include "Q6.h"

const int strsize = 50;
const int arrsize = 4;

struct bop
{
	char full_name[strsize];
	char title[strsize];
	char bop_name[strsize];
	int preference;
};

bop bop_list[arrsize] =
{
	{"Wimp Macho", "captin", "WM_C", 0},
	{"Raki Rhodes", "sub captin", "RR_SC", 1},
	{"Celia Laiter", "junior", "CL_J", 2},
	{"Pat Hand", "senior", "PH_S", 1},
};

int Q6_4()
{
	char choice;

	cout << "a. �Ǹ����� ����               b.�������� ����" << endl;
	cout << "c. BOP ���̵�� ����           d.ȸ���� ������ ������ ����" << endl;
	cout << "q. ����" << endl;
	cout << "���ϴ� ���� �����Ͻʽÿ� : ";
	
	while ((cin >> choice) && choice != 'q')
	{
		switch (choice)
		{
		case 'a' :
			for (int i = 0; i < arrsize; i++)
				cout << bop_list[i].full_name << endl;
			break;
		case 'b':
			for (int i = 0; i < arrsize; i++)
				cout << bop_list[i].title << endl;
			break;
		case 'c':
			for (int i = 0; i < arrsize; i++)
				cout << bop_list[i].bop_name << endl;
			break;
		case 'd':
			for (int i = 0; i < arrsize; i++)
			{
				switch (bop_list[i].preference)
				{
				case 0 : 
					cout << bop_list[i].full_name << endl;
					break;
				case 1:
					cout << bop_list[i].title << endl;
					break;
				case 2:
					cout << bop_list[i].bop_name << endl;
					break;
				default:
					break;
				}
			}
			break;
		default:
			cout << "��ȿ�� ������ �ƴմϴ�." << endl;
			break;
		}

		cout << "���ϴ� ���� �����Ͻʽÿ� : ";
	}

	cout << "����!" << endl;

	return 0;
}