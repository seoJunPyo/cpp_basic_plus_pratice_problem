#include "Q6.h"

int Q6_8()
{
	string file_name;
	ifstream inFile;

	cout << "������ ������ �̸��� �Է��Ͻÿ� : ";
	getline(cin, file_name);

	inFile.open(file_name);
	if (!inFile.is_open())
	{
		cout << file_name << " ������ �� �� �����ϴ�." << endl;
		cout << "���α׷��� �����մϴ�." << endl;
		exit(EXIT_FAILURE);
	}

	int count = 0;
	char ch;

	while ((inFile >> ch) && !inFile.eof())
		count++;
	
	cout << file_name << " ���� �ȿ� ���ڴ� �� " << count << "���� �ֽ��ϴ�." << endl;

	inFile.close();

	return 0;
}