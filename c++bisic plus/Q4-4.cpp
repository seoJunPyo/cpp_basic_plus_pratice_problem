#include "Q4.h"

int Q4_4()
{
	string f_name;
	string l_name;
	
	cout << "�۽�Ʈ ���� (�̸�)�� �Է��Ͻÿ� : ";
	getline(cin, f_name);
	cout << "��Ʈ ���� (��)�� �Է��Ͻÿ� : ";
	getline(cin, l_name);

	string full_name = f_name + ", " + l_name;
	cout << "�ϳ��� ���ڿ��� ����� : " << full_name;

	return 0;
}