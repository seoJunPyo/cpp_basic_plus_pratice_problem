#include "Q9.h"

void strcount(const string);

int Q9_2()
{
	string input;

	cout << "영문으로 한 행을 입력하십시오. : " << endl;
	while (getline(cin, input) && input != "")
	{
		strcount(input);

		cout << "영문으로 한 행을 입력하십시오. (끝내려면 빈행을 입력) : " << endl;
	}

	cout << "종료!" << endl;

	return 0;
}

void strcount(const string str)
{
	static int total = 0;
	total += (int)str.size();

	cout << "\"" << str << "\"에는 " << str.size() << "개의 문자가 있습니다." << endl;
	cout << "지금까지 총 " << total << "개의 문자을 입력하셨습니다." << endl;
}