#include "Q6.h"

int Q6_3()
{
	char choice;

	cout << "���� ���� ���� �߿��� �ϳ��� �����Ͻʽÿ�. (�������� q)\n";
	cout << "c) carema          p) pianist\n";
	cout << "t) tree            g) game\n";
	
	while ((cin >> choice) && choice != 'q')
	{
		switch (choice)
		{
		case 'c' :
			cout << "carmea�� ����!\n";
			break;
		case 'p':
			cout << "pianist�� ����!\n";
			break;
		case 't':
			cout << "tree�� ����!\n";
			break;
		case 'g':
			cout << "game�� ����!\n";
			break;
		default:
			cout << "��ȿ�� ������ �ƴմϴ�.\n";
			break;
		}

		cout << "c, p, t, g �߿��� �ϳ��� �����Ͻʽÿ�. (�������� q) : ";
	}

	cout << "����!\n";
	return 0;
}