#include "Q4.h"

int Q4_3()
{
	char f_name[20];
	char l_name[20];
	char full_name[40];

	cout << "�۽�Ʈ ���� (�̸�)�� �Է��Ͻÿ� : ";
	cin.getline(f_name, 20);
	cout << "��Ʈ ���� (��)�� �Է��Ͻÿ� : ";
	cin.getline(l_name, 20);

	strcpy_s(full_name, 40, l_name);
	strcat_s(full_name, 40, ", ");
	strcat_s(full_name, 40, f_name);

	cout << "�ϳ��� ���ڿ��� ����� : " << full_name;

	return 0;
}