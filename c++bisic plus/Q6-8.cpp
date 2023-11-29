#include "Q6.h"

int Q6_8()
{
	string file_name;
	ifstream inFile;

	cout << "데이터 파일의 이름을 입력하시오 : ";
	getline(cin, file_name);

	inFile.open(file_name);
	if (!inFile.is_open())
	{
		cout << file_name << " 파일을 열 수 없습니다." << endl;
		cout << "프로그램을 종료합니다." << endl;
		exit(EXIT_FAILURE);
	}

	int count = 0;
	char ch;

	while ((inFile >> ch) && !inFile.eof())
		count++;
	
	cout << file_name << " 파일 안에 문자는 총 " << count << "개가 있습니다." << endl;

	inFile.close();

	return 0;
}