#include "Q4.h"

int Q4_4()
{
	string f_name;
	string l_name;
	
	cout << "퍼스트 네임 (이름)을 입력하시오 : ";
	getline(cin, f_name);
	cout << "라스트 네임 (성)을 입력하시오 : ";
	getline(cin, l_name);

	string full_name = f_name + ", " + l_name;
	cout << "하나의 문자열을 만들면 : " << full_name;

	return 0;
}