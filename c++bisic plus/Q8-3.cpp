#include "Q8.h"

int Q8_3()
{
	string input;

	cout << "���ڿ��� �Է��Ͻÿ� (�������� q) : ";
	while (getline(cin, input) && input != "q")
	{
		for (int i = 0; i < input.size(); i++)
			input[i] = toupper(input[i]);

		cout << input << endl;

		cout << "���ڿ��� �Է��Ͻÿ� (�������� q) : ";
	}

	cout << "��" << endl;
	return 0;

}