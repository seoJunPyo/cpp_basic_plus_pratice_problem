#include "Q4.h"

int Q4_3()
{
	char f_name[20];
	char l_name[20];
	char full_name[40];

	cout << "퍼스트 네임 (이름)을 입력하시오 : ";
	cin.getline(f_name, 20);
	cout << "라스트 네임 (성)을 입력하시오 : ";
	cin.getline(l_name, 20);

	strcpy_s(full_name, 40, l_name);
	strcat_s(full_name, 40, ", ");
	strcat_s(full_name, 40, f_name);

	cout << "하나의 문자열을 만들면 : " << full_name;

	return 0;
}